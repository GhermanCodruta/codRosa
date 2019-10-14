#ifndef _READ_h
#define _READ_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Read {
	private:
		byte sensors, dips;
		struct qtr {
			bool line;
			bool stanga;
			bool dreapta;
			uint32_t stangaValoare;
			uint32_t dreaptaValoare;
		};

	public:
		byte readSensors(byte port1, byte port2);
		byte readDips(byte port);
		struct qtr readLine(uint32_t st, uint32_t dr);
		void printData(byte port1, byte port2, uint32_t st, uint32_t dr);

};

#endif

