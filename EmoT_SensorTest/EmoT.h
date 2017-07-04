#include <Adafruit_NeoPixel.h>
#include "PoseDetector.h"

namespace m2d {
	#define kVoltage 3.3
	#define PIN 13
	#define N_LEDS 256

	class EmoT
	{
		private:
		Adafruit_NeoPixel strip;
		int sensorValues[5] = { 0 };
		public:
		enum SensorPosition {
			SholderLeft = 0,
			SholderJointLeft,
			SholderRight,
			SholderJointRight,
			Back
		};

		EmoT() {
			this->setup();
		}

		EmoT(int baudrate) {
			Serial.begin(baudrate);
			this->setup();
		}

		void setBrightness(int brightness) {
			this->strip.setBrightness(brightness);
		}

		void updateValues() {
			for(int i = 0; i < 5; i++){
			    this->sensorValues[i] = this->getCurrentSensorValue(i);
			}
		}

		int getSensorValue(int index) {
			return this->sensorValues[index];
		}

		int getCurrentSensorValue(int index) {
			int iValue = analogRead(index);
			double dV = iValue * kVoltage  / 1023;
			double dR = -1.0;

			if( 0.005 < (kVoltage  - dV) ) {
				dR = 10 * 1000 * dV / (5.0  - dV);
			}
			if( 0.0 > dR ) {
				return -1;
			}
			
			return dR;
		}

		void draw(unsigned char img[16][16][3], bool flip = false) {
			if (flip) {
				for (int i = 16 * 16; i >= 0; i--) {
					int idx = i / 16;
					int row = i % 16;
					int pos = i;

					uint32_t c = this->strip.Color(img[row][idx][0], img[row][idx][1], img[row][idx][2]);
				 	if (row % 2) {
						pos = (row + 1) * 16 - idx - 1;
					}
					this->strip.setPixelColor(pos, c);
				}
			}
		 	else {
				for (int i = 0; i < 16 * 16; i++) {
					int row = i / 16;
					int idx = i % 16;
					int pos = i;

					uint32_t c = this->strip.Color(img[row][idx][0], img[row][idx][1], img[row][idx][2]);
					if (row % 2) {
						pos = (row + 1) * 16 - idx - 1;
					}
					this->strip.setPixelColor(pos, c);
				}
			}

			this->strip.show();
		}

		void clear() {
			this->strip.clear();
		}

		// void animate() {

		// }

		void debugPrint() {
			int s_l = this->getSensorValue(EmoT::SensorPosition::SholderLeft);
			int sj_l = this->getSensorValue(EmoT::SensorPosition::SholderJointLeft);
			int s_r = this->getSensorValue(EmoT::SensorPosition::SholderRight);
			int sj_r = this->getSensorValue(EmoT::SensorPosition::SholderJointRight);
			int bk = this->getSensorValue(EmoT::SensorPosition::Back);
			printf("%05d, %05d, %05d, %05d, %05d\n", s_l, sj_l, s_r, sj_r, bk);
		}

		private:
		void setup() {
			this->strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
			this->strip.begin();
			this->strip.setBrightness(30);
		}
	};
}