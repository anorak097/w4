#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN  10
#define RST_PIN 9
#define GREEN_LED 2
#define RED_LED 3

MFRC522 rfid(SS_PIN, RST_PIN);

byte targetUID[] = {0x11, 0x22, 0x33, 0x44};

void setup() {
    Serial.begin(115200);
    SPI.begin();
    rfid.PCD_Init();
    pinMode(GREEN_LED, OUTPUT);
    pinMode(RED_LED, OUTPUT);
}

void loop() {
    if (!rfid.PICC_IsNewCardPresent()) {
        return;
    }

    if (!rfid.PICC_ReadCardSerial()) {
        return;
    }

    Serial.print("Card UID:");
    for (byte i = 0; i < rfid.uid.size; i++) {
        Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
        Serial.print(rfid.uid.uidByte[i], HEX);
    }
    Serial.println();

    bool isMatch = true;
    if (rfid.uid.size != 4) {
        isMatch = false;
    } else {
        for (byte i = 0; i < 4; i++) {
            if (rfid.uid.uidByte[i] != targetUID[i]) {
                isMatch = false;
                break;
            }
        }
    }

    if (isMatch) {
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(RED_LED, LOW);
    } else {
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RED_LED, HIGH);
    }

    rfid.PICC_HaltA();
    delay(1000);
}