#ifndef _TRANSITIONS_h
#define _TRANSITIONS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
	#include "SensorsCase.h"
#else
	#include "WProgram.h"
#endif

class Transitions {

	private:
		SensorCase aux;
	public:
		bool checkSensors(String s, byte sensor);
		bool checkTime(unsigned long curr, uint32_t value);

};

#endif

