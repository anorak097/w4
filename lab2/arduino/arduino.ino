#include <IRremote.h>

IRsend irsend;
unsigned long count = 0;

void setup(){
    irsend.begin(3);
    IrReceiver.begin(9);
    Serial.begin(115200);
}

void loop(){
    irsend.sendNEC(0xED12B904, 32);
    delay(200);

    if (IrReceiver.decode()){
        unsigned long code = IrReceiver.decodedIRData.decodedRawData;
        
        count += 1;
        Serial.print("Received: ");
        Serial.print(code, HEX);
        Serial.print(" | Count: ");
        Serial.println(count);

        IrReceiver.resume();
    }
}