/*
  StairButton.h - Libreria que soluciona el problema de los dos interruptores en la escalera.
  Created by Jose y Romualdo Villalobos, Enero 28, 2017.
*/


#ifndef Morse_h
#define Morse_h

#include "Arduino.h"
class StairButton
{
	public:
		StairButton(int pinNumberButton);
		void updateToggleLogic(bool* ledState);
	private:
	 	int pinButton;
	 	bool buttonState;
	 	bool onFirstPushDown;
};

#endif