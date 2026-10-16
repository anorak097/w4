#include <IRremote.h>

void setup()
{
	IrReceiver.begin(9);
	Serial.begin(115200);
}

void loop()
{
	if (IrReceiver.decode())
	{
		unsigned long code = IrReceiver.decodedIRData.decodedRawData;
		Serial.println(code, HEX);
		IrReceiver.resume();
	}
}