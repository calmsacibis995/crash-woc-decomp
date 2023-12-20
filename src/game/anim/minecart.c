#include <anim.h>

void
AnimateMINECART(short *loc)
{
	short pos;
	
	if (*(byte *)((int)loc + 0x149) < 2) {
		pos = 0x68;
		if ((*(char *)(loc + 0x65b) != '\0') && (pos = 99, loc[0x663] <= loc[0x664]))
			pos = 0x68;
	}
	else
		pos = loc[0xa8];
	
	loc[0x14] = pos;
	
	UpdateCharacterIdle(loc, 0);
	return;
}
