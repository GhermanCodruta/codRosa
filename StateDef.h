#ifndef _STATEDEF_h
#define _STATEDEF_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class State {

	private:
		uint32_t stanga, dreapta;
		short dir;
		unsigned long time;
	public:
		void assignState(uint32_t stanga, uint32_t dreapta, short dir, unsigned long time);

};

#endif

