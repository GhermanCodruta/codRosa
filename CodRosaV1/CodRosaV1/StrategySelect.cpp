#include "StrategySelect.h"

uint32_t strategie(byte dips) {

	switch (dips)
	{
	case 0x01:	///Switch 1 on
		return 1;
	case 0x02:	///Switch 2 on
		return 2;
	case 0x03:	///Switch 1 and 2 on
		return 3;
	case 0x04:	///Switch 3 on
		return 4;
	case 0x05:	///Switch 1 and 3 on
		return 5;
	case 0x06:	///Switch 2 and 3 on
		return 6;
	case 0x07:	///Switch 1, 2 and 3 on
		return 7;
	case 0x08:	///Switch 4 on
		return 8;
	case 0x09:	///Switch 1 and 4 on
		return 9;
	case 0xA:	///Switch 2 adn 4 on
		return 10;
	case 0xB:	///Switch 1, 2 and 4 on
		return 11;
	case 0xC:	///Switch 3, 4 on
		return 12;
	case 0xD:	///Switch 1, 3 and 4 on
		return 13;
	case 0xE:	///Switch 2, 3 and 4 on
		return 14;
	case 0xF:	///Switch 1, 2, 3 and 4 on
		return 15;
	default:
		break;
	}

}


