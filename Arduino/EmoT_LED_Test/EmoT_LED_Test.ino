#include "EmoT.h"
#include "Emoticon.h"

using namespace m2d;
EmoT tee;
void setup()
{
	
}

#define kVoltage 3.3

void loop()
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
