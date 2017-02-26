/*
  StairButton.cpp - Libreria que soluciona el problema de los dos interruptores en la escalera.
  Created by Jose y Romualdo Villalobos, Enero 28, 2017.
*/

#include "Arduino.h"
#include "StairButton.h"

StairButton::StairButton(int pinNumberButton)
{
	pinButton = pinNumberButton; // Notese que pinButton es un atributo privado (miembro de clase)
	buttonState = false;
	onFirstPushDown = true;
	pinMode(pinNumberButton, INPUT);
}

void StairButton::updateToggleLogic(bool* ledState)
{
	buttonState = digitalRead(pinButton);

	if (buttonState && onFirstPushDown)
	{
		// turn LED on:
		*ledState = ! (*ledState); // Si no se ponen los parentesis habra un problema de presedencia
		onFirstPushDown = false;
	}
	else if (!buttonState) // Si alguno de los botones se solto
	{
		onFirstPushDown = true;
	}
}