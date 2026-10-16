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
    0xE619FF00,
    0xBA45FF00,
    0xB946FF00,
    0xB847FF00,
    0xBB44FF00,
    0xBF40FF00,
    0xBC43FF00,
    0xF807FF00,
    0xEA15FF00,
    0xF609FF00,
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
    IrReceiver.begin(9);
    Serial.begin(115200);
}

void loop(){
    if (IrReceiver.decode()){
        unsigned long code = IrReceiver.decodedIRData.decodedRawData;
        Serial.println(code, HEX);
        IrReceiver.resume();
    }
}