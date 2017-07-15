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
			if (this->currentImageAddr != &(img[0][0][0])) {
				this->currentImageAddr = &(img[0][0][0]);
				if (flip) {
					for (int time = 0; time <= 32; time++) {
						for (int i = 16 * 16; i >= 0; i--) {
							int idx = i / 16;
							int row = i % 16;
							int pos = i;

							float ratio = time / 32.0;
							uint32_t c = this->strip.Color(img[row][idx][0] * ratio, img[row][idx][1] * ratio, img[row][idx][2] * ratio);
							if (row % 2) {
								pos = (row + 1) * 16 - idx - 1;
							}
							this->strip.setPixelColor(pos, c);
						}
						this->strip.show();
						delay(1);
					}
				}
			 	else {
			 		for (int time = 0; time <= 32; time++) {
						for (int i = 0; i < 16 * 16; i++) {
							int row = i / 16;
							int idx = i % 16;
							int pos = i;

							float ratio = time / 32.0;
							uint32_t c = this->strip.Color(img[row][idx][0] * ratio, img[row][idx][1] * ratio, img[row][idx][2] * ratio);
							if (row % 2) {
								pos = (row + 1) * 16 - idx - 1;
							}
							this->strip.setPixelColor(pos, c);
						}
						this->strip.show();
						delay(1);
					}
				}
			}
		}

		void clear() {
			this->currentImageAddr = nullptr;
			this->strip.clear();
			this->strip.show();
		}

		private:
		unsigned char *currentImageAddr = nullptr;
		void setup() {
			this->strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);
			this->strip.begin();
			this->strip.setBrightness(30);
		}
	};
}