#include <stdio.h>
#include "Emoticon.h"
#include "EmoT.h"

using namespace m2d;

class AppState
{
	private:
	bool manualMode = false;
	bool autoMode = false;
	int counter = 0;
	int weight[6] = {0};

	void dispatch() {
		if (this->dispatchHandler){
			int max_index = PoseDetector::Pose::question;
			int max = this->weight[PoseDetector::Pose::question];
			if(max < this->weight[PoseDetector::Pose::arm]){
				max = this->weight[PoseDetector::Pose::arm];
				max_index = PoseDetector::Pose::arm;
			}
			if(max < this->weight[PoseDetector::Pose::vsign]){
				max = this->weight[PoseDetector::Pose::vsign];
				max_index = PoseDetector::Pose::vsign;
			}
			if(max < this->weight[PoseDetector::Pose::beer]){
				max = this->weight[PoseDetector::Pose::beer];
				max_index = PoseDetector::Pose::beer;
			}
			if(max < this->weight[PoseDetector::Pose::sushi]){
				max = this->weight[PoseDetector::Pose::sushi];
				max_index = PoseDetector::Pose::sushi;
			}
			if(max < this->weight[PoseDetector::Pose::standing]){
				max = this->weight[PoseDetector::Pose::standing];
				max_index = PoseDetector::Pose::standing;
			}
			this->dispatchHandler(max_index);
		}
	}

	void flushWeight() {
		for(int i = 0; i < 6; i++){
			this->weight[i] = 0;
		}
	}

	public:
	int dispatchInterval;
	void (*dispatchHandler)(int);
	void (*manualModeHandler)(String);
	void (*autoModeHandler)();

	AppState() {
		this->dispatchInterval = 20;
		this->dispatchHandler = nullptr;
		this->manualModeHandler = nullptr;
		this->autoModeHandler = nullptr;
	}

	bool isManualMode() {
		return this->manualMode;
	}

	bool isAutoMode() {
		return this->autoMode;
	}

	bool toggleManualMode() {
		this->manualMode = !this->manualMode;
		return this->isManualMode();
	}

	void setManualMode(bool enabled) {
		this->manualMode = enabled;
	}

	bool toggleAutoMode() {
		this->autoMode = !this->autoMode;
		return this->isAutoMode();
	}


	void setAutoMode(bool enabled) {
		this->autoMode = enabled;
	}

	void update(int pose, String comm) {
		if (this->isAutoMode()) {
			if(this->autoModeHandler) {
				Serial3.println("auto");
				this->autoModeHandler();
			}
		}
		else if (this->isManualMode()) {
			if (this->manualModeHandler) {
				Serial3.println("manual");
				this->manualModeHandler(comm);
			}
		}
		else {
			switch (pose) {
				case PoseDetector::Pose::question: // 左手を腰に手を当て、右手を頭に当てる
					this->weight[PoseDetector::Pose::question]++;
					break;
				case PoseDetector::Pose::arm: // 右腕の力こぶをふくらませるように腕を曲げる
					this->weight[PoseDetector::Pose::arm]++;
					break;
				case PoseDetector::Pose::vsign: // 左手を前に突き出す
					this->weight[PoseDetector::Pose::vsign]++;
					break;
				case PoseDetector::Pose::beer: // 前のめりになり、左向きに走るようなポーズ
					this->weight[PoseDetector::Pose::beer]++;
					break;
				case PoseDetector::Pose::sushi:
					this->weight[PoseDetector::Pose::sushi]++;
					break;
				case PoseDetector::Pose::standing:
					this->weight[PoseDetector::Pose::standing]++;
					break;
				default:
					break;
			}

			this->counter++;
			if (this->counter == 40) {
				this->dispatch();
				this->flushWeight();
				this->counter = 0;
			}
		}
	}
};

EmoT tee;
AppState state;
void setup()
{
	tee.clear();
	Serial.begin(9600);
	Serial3.begin(9600);
	state.dispatchHandler = drawImage;
	state.manualModeHandler = dispatchCommand;
	state.autoModeHandler = playDemo;
}

void loop()
{
	tee.updateValues();
	int s_l = tee.getSensorValue(EmoT::SensorPosition::SholderLeft);
	int sj_l = tee.getSensorValue(EmoT::SensorPosition::SholderJointLeft);
	int s_r = tee.getSensorValue(EmoT::SensorPosition::SholderRight);
	int sj_r = tee.getSensorValue(EmoT::SensorPosition::SholderJointRight);
	int bk = tee.getSensorValue(EmoT::SensorPosition::Back);
	String comm = "";
	if (Serial3.available()) {
		comm = Serial3.readStringUntil('.');
		Serial.println(comm);
		if (comm == "~") {
			Serial.println("manual mode true");
			state.setManualMode(true);
		}
		else if (comm == "!") {
			Serial.println("manual mode false");
			state.setManualMode(false);
		}
		else if (comm == "=") {
			Serial.println("auto mode true");
			state.setAutoMode(true);
		}
		else if (comm == "+") {
			Serial.println("auto mode false");
			state.setAutoMode(false);
		}
	}

	int values[5] = {s_l, sj_l, s_r, sj_r, bk};
	state.update(PoseDetector::classify(values), comm);
}

void drawImage(int pose)
{
	switch (pose) {
		case PoseDetector::Pose::question:
			tee.draw(Emoticon::question);
			Serial.println("question");
			break;
		case PoseDetector::Pose::arm:
			tee.draw(Emoticon::arm);
			Serial.println("arm");
			break;
		case PoseDetector::Pose::vsign:
			tee.draw(Emoticon::vsign);
			Serial.println("vsign");
			break;
		case PoseDetector::Pose::beer:
			tee.draw(Emoticon::beer);
			Serial.println("beer");
			break;
		case PoseDetector::Pose::sushi:
			tee.draw(Emoticon::sushi);
			Serial.println("sushi");
			break;
		case PoseDetector::Pose::standing:
			tee.clear();
			Serial.println("standing");
			break;
		default:
			break;
	}
}

void dispatchCommand(String comm)
{
	if (comm == "1") {
		tee.draw(Emoticon::question);
	}
	else if (comm == "2") {
		tee.draw(Emoticon::arm);
	}
	else if (comm == "3") {
		tee.draw(Emoticon::vsign);
	}
	else if (comm == "4") {
		tee.draw(Emoticon::beer);
	}
	else if (comm == "5") {
		tee.draw(Emoticon::heart);
	}
	else if (comm == "6") {
		tee.draw(Emoticon::pray);
	}
	else if (comm == "7") {
		tee.draw(Emoticon::tengu);
	}
	else if (comm == "8") {
		tee.draw(Emoticon::sushi);
	}
	else if (comm == "9") {
		tee.draw(Emoticon::exclamation);
	}
	else if (comm == "a") {
		tee.draw(Emoticon::sorry);
	}
	else if (comm == "b") {
		tee.draw(Emoticon::ban);
	}
	else if (comm == "c") {
		tee.draw(Emoticon::success);
	}
	else if (comm == "d") {
		tee.draw(Emoticon::fire);
	}
	else if (comm == "e") {
		tee.draw(Emoticon::notgood);
	}
	else if (comm == "-") {
		tee.clear();
	}
}

void playDemo()
{
	tee.draw(Emoticon::question);
	delay(5000);

	tee.draw(Emoticon::arm);
	delay(5000);

	tee.draw(Emoticon::vsign);
	delay(5000);

	tee.draw(Emoticon::beer);
	delay(5000);

	tee.draw(Emoticon::heart);
	delay(5000);

	tee.draw(Emoticon::pray);
	delay(5000);

	tee.draw(Emoticon::tengu);
	delay(5000);

	tee.draw(Emoticon::sushi);
	delay(5000);

	tee.draw(Emoticon::exclamation);
	delay(5000);

	tee.draw(Emoticon::sorry);
	delay(5000);

	tee.draw(Emoticon::ban);
	delay(5000);

	tee.draw(Emoticon::success);
	delay(5000);

	tee.draw(Emoticon::fire);
	delay(5000);
}
