#ifndef _SENSORSCASE_h
#define _SENSORSCASE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class SensorCase {

	private:
		String state;
	
	public:
		String whatCase(byte sensors);
		void printSensorsCase();

};

#endif

