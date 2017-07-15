#include "EmoT.h"

using namespace m2d;
EmoT *tee;
void setup()
{
	Serial.begin(9600);
	tee = new EmoT();
}

#define kVoltage 3.3

void loop()
{
	if(Serial.available()) {
		String str = Serial.readStringUntil('\r');
		for(int i = 0; i < 500; i++){
			tee->updateValues();
			int s_l = tee->getSensorValue(EmoT::SensorPosition::SholderLeft);
			int sj_l = tee->getSensorValue(EmoT::SensorPosition::SholderJointLeft);
			int s_r = tee->getSensorValue(EmoT::SensorPosition::SholderRight);
			int sj_r = tee->getSensorValue(EmoT::SensorPosition::SholderJointRight);
			int bk = tee->getSensorValue(EmoT::SensorPosition::Back);
			Serial.print(str);
			Serial.print(",");
			Serial.print(s_l);
			Serial.print(",");
			Serial.print(sj_l);
			Serial.print(",");
			Serial.print(s_r);
			Serial.print(",");
			Serial.print(sj_r);
			Serial.print(",");
			Serial.println(bk);
		}
	}
}
