#include "Main.h"
#include "GlobalVariables.h"
#include "Transitions.h"
#include "SensorsCase.h"
#include "StateList.h"
#include "StateDef.h"
#include "StrategySelect.h"
#include "Read.h"
#include <Sabertooth.h>

Sabertooth ST(128);

byte sensorsByte;


int main(void) {

	init();

	SabertoothTXPinSerial.begin(115200);
	Serial.begin(9600);

	ST.motor(1, 0);
	ST.motor(2, 0);

	DDRD &= ~0xFC; //senzori 2,3,4,5,6,7
	PORTD &= ~0xFC;

	DDRB &= ~0x3F; //senzor 8 + dip switches + senzor start stop
	PORTB &= ~0x1F; 

	Read read;
	SensorCase sensorCase;
	Transitions transitions;

	for ( ; ; ) {

		sensorsByte = read.readSensors(PIND, PINB);

		read.printData(PIND, PINB, analogRead(A0), analogRead(A1));

		sensorCase.whatCase(sensorsByte);
		sensorCase.printSensorsCase();

		Serial.print("		Sensor case match: ");
		Serial.println(transitions.checkSensors("All centre", sensorsByte));

		Serial.println("\n");
		delay(250);

	}

}