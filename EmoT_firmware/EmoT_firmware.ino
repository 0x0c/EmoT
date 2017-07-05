#include <stdio.h>
#include "Emoticon.h"
#include "EmoT.h"

using namespace m2d;
EmoT *tee;
int counter = 0;
int weight[5] = {0};
bool manualMode = false;
void setup()
{
	tee = new EmoT();
	tee->clear();
	Serial.begin(9600);
	Serial3.begin(9600);
}

void loop()
{
	tee->updateValues();
	int s_l = tee->getSensorValue(EmoT::SensorPosition::SholderLeft);
	int sj_l = tee->getSensorValue(EmoT::SensorPosition::SholderJointLeft);
	int s_r = tee->getSensorValue(EmoT::SensorPosition::SholderRight);
	int sj_r = tee->getSensorValue(EmoT::SensorPosition::SholderJointRight);
	int bk = tee->getSensorValue(EmoT::SensorPosition::Back);

	if (Serial3.available()) {
		char s = Serial3.read();
		Serial3.println(s);
		if (s == 'm'){
			manualMode = !manualMode;
			Serial3.print("Manual Mode: ");
			Serial3.println(manualMode ? "true" : "false");
		}

		switch (s) {
			case 'q':
				tee->draw(Emoticon::question);
				break;
			case 'a':
				tee->draw(Emoticon::arm);
				break;
			case 'v':
				tee->draw(Emoticon::vsign);
				break;
			case 'b':
				tee->draw(Emoticon::beer);
				break;
			case 'h':
				tee->draw(Emoticon::heart);
				break;
			case 'p':
				tee->draw(Emoticon::pray);
				break;
			case 't':
				tee->draw(Emoticon::tengu);
				break;
			case 's':
				tee->draw(Emoticon::sushi);
				break;
			case 'e':
				tee->draw(Emoticon::exclamation);
				break;
			case 'r':
				tee->draw(Emoticon::sorry);
				break;
			case 'n':
				tee->draw(Emoticon::ban);
				break;
			case 'c':
				tee->draw(Emoticon::success);
				break;
			case 'f':
				tee->draw(Emoticon::fire);
				break;
			case 'g':
				tee->draw(Emoticon::notgood);
				break;
			case '-':
				tee->clear();
				break;
			default:
				break;
		}
	}
	if (manualMode == false) {
		int values[5] = {s_l, sj_l, s_r, sj_r, bk};
		int pose = PoseDetector::detect(values);
		switch (pose) {
			case PoseDetector::Pose::question:
				Serial.println("question"); // 左手を腰に手を当て、右手を頭に当てる
				weight[PoseDetector::Pose::question]++;
				break;
			case PoseDetector::Pose::arm: // 右腕の力こぶをふくらませるように腕を曲げる
				Serial.println("arm");
				weight[PoseDetector::Pose::arm]++;
				break;
			case PoseDetector::Pose::vsign: // 左手を前に突き出す
				Serial.println("vsign");
				weight[PoseDetector::Pose::vsign]++;
				break;
			case PoseDetector::Pose::beer: // 前のめりになり、左向きに走るようなポーズ
				Serial.println("beer");
				weight[PoseDetector::Pose::beer]++;
				break;
			case PoseDetector::Pose::standing:
				Serial.println("standing");
				weight[PoseDetector::Pose::standing]++;
				break;
			default:
				break;
		}
		counter++;
		if(counter == 20){
			counter = 0;
			int max_index = PoseDetector::Pose::question;
			int max = weight[PoseDetector::Pose::question];
			if(max < weight[PoseDetector::Pose::arm]){
				max = weight[PoseDetector::Pose::arm];
				max_index = PoseDetector::Pose::arm;
			}
			if(max < weight[PoseDetector::Pose::vsign]){
				max = weight[PoseDetector::Pose::vsign];
				max_index = PoseDetector::Pose::vsign;
			}
			if(max < weight[PoseDetector::Pose::beer]){
				max = weight[PoseDetector::Pose::beer];
				max_index = PoseDetector::Pose::beer;
			}
			if(max < weight[PoseDetector::Pose::standing]){
				max = weight[PoseDetector::Pose::standing];
				max_index = PoseDetector::Pose::standing;
			}
			show_tee(max_index);
			for(int i = 0; i < 5; i++){
				weight[i] = 0;
			}
		}
	}
}

void show_tee(int index) {
	Serial.println("dispatch");
	switch (index) {
		case PoseDetector::Pose::question:
			tee->draw(Emoticon::question);
			break;
		case PoseDetector::Pose::arm:
			tee->draw(Emoticon::arm);
			break;
		case PoseDetector::Pose::vsign:
			tee->draw(Emoticon::vsign);
			break;
		case PoseDetector::Pose::beer:
			tee->draw(Emoticon::beer);
			break;
		case PoseDetector::Pose::standing:
			tee->clear();
			break;
		default:
			break;
	}
}

