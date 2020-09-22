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
	
	arduboy.fillRect(0, 0, 16, HEIGHT, WHITE);

	// These are the legal permutations
	{
		arduboy.setTextColor(WHITE);
		arduboy.setTextBackground(BLACK);
		arduboy.println(F("Hello"));

		arduboy.setTextColor(BLACK);
		arduboy.setTextBackground(WHITE);
		arduboy.println(F("Hello"));

		arduboy.setTextColor(BLACK);
		arduboy.setTextBackground(BLACK);
		arduboy.println(F("Hello"));

		arduboy.setTextColor(WHITE);
		arduboy.setTextBackground(WHITE);
		arduboy.println(F("Hello"));
	}

	// These are the permutations that the API considers 'illegal'
	{
		arduboy.setTextColor(WHITE);
		arduboy.setTextBackground(4);
		arduboy.println(F("Hello"));

		arduboy.setTextColor(2);
		arduboy.setTextBackground(4);
		arduboy.println(F("Hello"));

		arduboy.setTextColor(2);
		arduboy.setTextBackground(WHITE);
		arduboy.println(F("Hello"));

		arduboy.setTextColor(2);
		arduboy.setTextBackground(2);
		arduboy.println(F("Hello"));
	}

	arduboy.display();
}