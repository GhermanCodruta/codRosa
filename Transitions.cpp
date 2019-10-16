#include "Transitions.h"
#include "GlobalVariables.h"

unsigned long curr, currSensors;

bool Transitions::checkSensors(String s) {

	//Serial.print("\nsensorsss: ");
	//Serial.println(sensorsByte, BIN);
	if (s.compareTo(aux.whatCase(sensorsByte)) == 0)
		return true;
	return false;

}

bool Transitions::checkTime(uint32_t value) {

	if (curr - millis() <= value) {
		curr = millis();
		return true;
	}
	return false;

}

bool Transitions::checkTimeSensors(uint32_t value) {

	if (currSensors - millis() <= value) {
		currSensors = millis();
		return true;
	}
	return false;

}


bool Transitions::checkLine() {

	if (line)
		return true;
	return false;

}

bool Transitions::checkLineLeft() {

	if (lineLeft)
		return true;
	return false;

}

bool Transitions::checkLineRight() {

	if (lineRight)
		return true;
	return false;

}