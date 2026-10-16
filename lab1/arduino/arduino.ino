#include <IRremote.h>

const int SEVEN_SEGMENT_PINS[] = {2, 3, 4, 5, 6, 7, 8};

byte  SEVEN_SEGMENT_DIGITAL[10][7] = { 
    { 1,1,1,1,1,1,0 },  // = 0
    { 0,1,1,0,0,0,0 },  // = 1
    { 1,1,0,1,1,0,1 },  // = 2
    { 1,1,1,1,0,0,1 },  // = 3
    { 0,1,1,0,0,1,1 },  // = 4
    { 1,0,1,1,0,1,1 },  // = 5
    { 1,0,1,1,1,1,1 },  // = 6
    { 1,1,1,0,0,0,0 },  // = 7
    { 1,1,1,1,1,1,1 },  // = 8
    { 1,1,1,1,0,1,1 }   // = 9
};

unsigned long BUTTON_CODES[] = {
    0x9768FF00,
    0xCF30FF00,
    0xE718FF00,
    0x857AFF00,
    0xEF10FF00,
    0xC738FF00,
    0xA55AFF00,
    0xBD42FF00,
    0xB54AFF00,
    0xAD52FF00,
};

void displayDigit(int digit) {
    for (int i = 0; i < 7; i++) {
        digitalWrite(SEVEN_SEGMENT_PINS[i], SEVEN_SEGMENT_DIGITAL[digit][i]);
    }
}

void clearDigit() {
    for (int i = 0; i < 7; i++) {
        digitalWrite(SEVEN_SEGMENT_PINS[i], LOW);
    }
}

void setup(){
    for (int i = 0; i < 7; i++) {
        pinMode(SEVEN_SEGMENT_PINS[i], OUTPUT);
    }
    
    IrReceiver.begin(9);
    Serial.begin(115200);
}

void loop(){
    if (IrReceiver.decode()){
        unsigned long code = IrReceiver.decodedIRData.decodedRawData;
        Serial.println(code, HEX);

        bool found = 0;

        for (int i = 0; i < 10; i++){
            if (code == BUTTON_CODES[i]){
                displayDigit(i);
                Serial.print("the button is: ");
                Serial.println(i);
                found = 1;
                break;
            }
        }

        if (!found){
            clearDigit();
        }

        IrReceiver.resume();
    }
}