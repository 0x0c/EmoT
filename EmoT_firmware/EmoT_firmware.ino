#include <stdio.h>
#include "Emoticon.h"
#include "EmoT.h"

using namespace m2d;
EmoT *tee;
int counter = 0;
int weight[9] = {0};

void setup()
{
	tee = new EmoT();
	tee->clear();
	Serial.begin(9600);
}

void loop()
{
	tee->updateValues();
	int s_l = tee->getSensorValue(EmoT::SensorPosition::SholderLeft);
	int sj_l = tee->getSensorValue(EmoT::SensorPosition::SholderJointLeft);
	int s_r = tee->getSensorValue(EmoT::SensorPosition::SholderRight);
	int sj_r = tee->getSensorValue(EmoT::SensorPosition::SholderJointRight);
	int bk = tee->getSensorValue(EmoT::SensorPosition::Back);
	Serial.print(s_l);
	Serial.print(",");
	Serial.print(sj_l);
	Serial.print(",");
	Serial.print(s_r);
	Serial.print(",");
	Serial.print(sj_r);
	Serial.print(",");
	Serial.println(bk);
	int values[5] = {s_l, sj_l, s_r, sj_r, bk};
	int pose = PoseDetector::detect(values);
	switch (pose) {
		case PoseDetector::Pose::question:
			Serial.println("question");
	  //     	tee->draw(Emoticon::question);
	      	weight[PoseDetector::Pose::question]++;
	      break;
	    case PoseDetector::Pose::exclamation:
	    	Serial.println("exclamation");
	     //  	tee->draw(Emoticon::exclamation);
	     weight[PoseDetector::Pose::exclamation]++;
	      break;
	    case PoseDetector::Pose::arm:
	    	Serial.println("arm");
	     //  	tee->draw(Emoticon::arm);
	     	weight[PoseDetector::Pose::arm]++;
	      break;
	    case PoseDetector::Pose::surprise:
	    	// tee->draw(Emoticon::surprise);
	      break;
	    case PoseDetector::Pose::anxious:
	    	Serial.println("anxious");
	     //  	tee->draw(Emoticon::anxious);
	      	weight[PoseDetector::Pose::anxious]++;
	      break;
	    case PoseDetector::Pose::vsign:
	    	Serial.println("vsign");
			// tee->draw(Emoticon::vsign);
			weight[PoseDetector::Pose::vsign]++;
	      break;
	    case PoseDetector::Pose::tengu:
	    	Serial.println("tengu");
	     //  	tee->draw(Emoticon::tengu);
	     	weight[PoseDetector::Pose::tengu]++;
	      break;
	    case PoseDetector::Pose::pray:
	      	// tee->draw(Emoticon::pray);
	      break;
	    case PoseDetector::Pose::standing:
	    	Serial.println("standing");
	        weight[PoseDetector::Pose::standing]++;
	      	// tee->clear();
	      break;
	    default:
	      break;
	}
	counter++;
	if(counter == 13){
		counter = 0;
		int max_index = PoseDetector::Pose::question;
		int max = weight[PoseDetector::Pose::question];
		if(max < weight[PoseDetector::Pose::exclamation]){
		    max = weight[PoseDetector::Pose::exclamation];
		    max_index = PoseDetector::Pose::exclamation;
		}
      	if(max < weight[PoseDetector::Pose::arm]){
		    max = weight[PoseDetector::Pose::arm];
		    max_index = PoseDetector::Pose::arm;
		}
      	if(max < weight[PoseDetector::Pose::anxious]){
		    max = weight[PoseDetector::Pose::anxious];
		    max_index = PoseDetector::Pose::anxious;
		}
      	if(max < weight[PoseDetector::Pose::vsign]){
		    max = weight[PoseDetector::Pose::vsign];
		    max_index = PoseDetector::Pose::vsign;
		}
      	if(max < weight[PoseDetector::Pose::tengu]){
		    max = weight[PoseDetector::Pose::tengu];
		    max_index = PoseDetector::Pose::tengu;
		}
      	if(max < weight[PoseDetector::Pose::standing]){
		    max = weight[PoseDetector::Pose::standing];
		    max_index = PoseDetector::Pose::standing;
		}
     	show_tee(max_index);
     	for(int i = 0; i < 9; i++){
     	    weight[i] = 0;
     	}
	}
}

void show_tee(int index) {
	Serial.println("dispatch");
	switch (index) {
		case PoseDetector::Pose::question:
			tee->draw(Emoticon::question);
	      break;
	    case PoseDetector::Pose::exclamation:
			tee->draw(Emoticon::exclamation);
	      break;
	    case PoseDetector::Pose::arm:
			tee->draw(Emoticon::arm);
	      break;
	    case PoseDetector::Pose::surprise:
	    	// tee->draw(Emoticon::surprise);
	      break;
	    case PoseDetector::Pose::anxious:
			tee->draw(Emoticon::heart);
	      break;
	    case PoseDetector::Pose::vsign:
			tee->draw(Emoticon::vsign);
	      break;
	    case PoseDetector::Pose::tengu:
			tee->draw(Emoticon::tengu);
	      break;
	    case PoseDetector::Pose::pray:
	      	// tee->draw(Emoticon::pray);
	      break;
	    case PoseDetector::Pose::standing:
	      	tee->clear();
	      break;
	    default:
	      break;
	}
}
