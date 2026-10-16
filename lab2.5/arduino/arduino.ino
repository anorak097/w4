#include <Wire.h>
#include <Adafruit_PN532.h>

Adafruit_PN532 nfc(-1, -1);

void setup(void) {
    Serial.begin(115200);
    while (!Serial) delay(10);

    Serial.println("Initializing PN532 NFC Module...");
    nfc.begin();

    uint32_t versiondata = nfc.getFirmwareVersion();
    if (!versiondata) {
        Serial.print("Didn't find PN53x board! Check your I2C wiring.");
        while (1);
    }
    
    Serial.print("Found chip PN5"); Serial.println((versiondata>>24) & 0xFF, HEX); 
    Serial.print("Firmware ver. "); Serial.print((versiondata>>16) & 0xFF, DEC); 
    Serial.print('.'); Serial.println((versiondata>>8) & 0xFF, DEC);

    nfc.setPassiveActivationRetries(0xFF);
    nfc.SAMConfig();
    
    Serial.println("Waiting for an ISO14443A card...");
}

void loop(void) {
    boolean success;
    uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };
    uint8_t uidLength;

    success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength);

    if (success) {
        Serial.println("Found an ISO14443A card!");
        Serial.print("UID Length: "); Serial.print(uidLength, DEC); Serial.println(" bytes");
        Serial.print("UID Value: ");
        
        for (uint8_t i = 0; i < uidLength; i++) {
            Serial.print(" 0x");
            if (uid[i] < 0x10) Serial.print("0");
            Serial.print(uid[i], HEX);
        }
        Serial.println("");
        
        delay(1000);
    }
}