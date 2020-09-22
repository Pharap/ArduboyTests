// This code is released under the CC0 licence.
// For more information see:
// https://creativecommons.org/publicdomain/zero/1.0/

#include <Arduboy2.h>

Arduboy2 arduboy;

void setup()
{
	arduboy.begin();
}

void loop()
{
	if(!arduboy.nextFrame())
		return;

	arduboy.pollButtons();

	arduboy.clear();

	arduboy.println(F("Hello World"));

	arduboy.display();
}