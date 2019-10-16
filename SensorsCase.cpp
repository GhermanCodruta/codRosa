#include "SensorsCase.h"

String SensorCase::whatCase(byte sensors) {

	switch (sensors){

		case 0xFF:
			(*this).state = "None";
			break;
		case 0xFE:
			(*this).state = "Left 90";
			break;
		case 0xFC:
			(*this).state = "Left 90 & 45";
			break;
		case 0xF8:
			(*this).state = "Left 90 & 45 + left centre"; ///Foarte aproape
			break;
		case 0xFD:
			(*this).state = "Left 45"; ///Se intampla des
			break;
		case 0xF9:
			(*this).state = "Left 45 + left centre"; ///De aproape
			break;
		case 0xF1:
			(*this).state = "Left 45 + left & middle centre";
			break;
		case 0xF3:
			(*this).state = "Left & middle centre";
			break;
		case 0xE3:
			(*this).state = "All centre";
			break;
		case 0xE7:
			(*this).state = "Right & middle centre";
			break;
		case 0xC7:
			(*this).state = "Right 45 + right & middle centre";
			break;
		case 0xCF:
			(*this).state = "Right 45 + right centre"; ///De aproape
			break;
		case 0xDF:
			(*this).state = "Right 45"; ///Se intampla des
			break;
		case 0x8F:
			(*this).state = "Right 90 & 45 + right centre"; ///Foarte aproape
			break;
		case 0x9F:
			(*this).state = "Right 90 & 45";
			break;
		case 0xBF:
			(*this).state = "Right 90";
			break;
		default:
			(*this).state = "Flag / Error";
			break;

	}

	/*Serial.print("Miau: ");
	Serial.print(sensors, HEX);
	Serial.println("		Current state: " + (*this).state);*/

	return (*this).state;

}

void SensorCase::printSensorsCase() {

	Serial.print("Sensors case: ");
	Serial.print((*this).state);

}
