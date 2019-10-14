#include "Read.h"
#include "GlobalVariables.h"

byte sensorsss = 10101010;

byte Read::readSensors(byte port1, byte port2) {

	//sensors = (port1 & ~0x03) | ((port2 & 0x01) & 0x03);
	sensors = 0x80 | ((port2 & 0x01) << 6) | ((port1 & ~0x03) >> 2);
	sensorsss = sensors;
	return sensors;

}

byte Read::readDips(byte port) {

	dips = ((port & ~0x20) >> 1);
	return dips;

}

struct Read::qtr Read::readLine(uint32_t st, uint32_t dr) {

	struct qtr aux; 
	st < 100 ? aux.stanga = true : aux.stanga = false;
	st < 100 ? aux.dreapta = true : aux.dreapta = false;
	aux.line = aux.dreapta || aux.stanga;
	aux.stangaValoare = st;
	aux.dreaptaValoare = dr;
	return aux;

}

void Read::printData(byte port1, byte port2, uint32_t st, uint32_t dr) {

	Serial.print("Sensors: ");
	Serial.print(Read::readSensors(port1, port2), BIN);
	Serial.print(";		Dips: ");
	Serial.print(Read::readDips(port2), BIN);
	Serial.print(";		Line: ");
	Serial.print(Read::readLine(analogRead(A0), analogRead(A1)).line);
	Serial.print(";  Left QTR: ");
	Serial.print(Read::readLine(analogRead(A0), analogRead(A1)).stangaValoare);
	Serial.print(";  Right QTR: ");
	Serial.print(Read::readLine(analogRead(A0), analogRead(A1)).dreaptaValoare);
	Serial.print(";\n");

}

