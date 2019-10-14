#include "Transitions.h"
#include "GlobalVariables.h"

bool Transitions::checkSensors(String s, byte sensor) {

	if (s.compareTo(aux.whatCase(sensor)) == 0)
		return true;
	return false;

}

bool Transitions::checkTime(unsigned long curr, uint32_t value) {

	if (curr - millis() <= value)
		return true;
	return false;

}
