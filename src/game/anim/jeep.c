#include <anim.h>

void
AnimateJEEP(short *loc)
{
	short pos;
	
	pos = 0x68;
	if (1 < *(byte *)((int)loc + 0x149))
		pos = loc[0xa8];
	loc[0x14] = pos;
	
	UpdateCharacterIdle(loc, 0);
	return;
}

int
AnimateForLightsEnemyJeep()
{
}
