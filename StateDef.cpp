#include "StateDef.h"

void State::assignState(uint32_t stanga, uint32_t dreapta, short dir, unsigned long time) {

	(*this).stanga = stanga;
	(*this).dreapta = dreapta;
	(*this).dir = dir;
	(*this).time = time;

}


