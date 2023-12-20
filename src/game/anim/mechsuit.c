#include <anim.h>

/*
 * Function:
 * AnimateMECH()
 * 
 * Description:
 * Animate the mech suit.
 * 
 * Arguments:
 * loc: Pointer to the location of the mech suit.
 * 
 * Return value:
 * None.
 */
void
AnimateMECH(short *loc)
{
	short pos;
	
	if (1 < *(byte *)((int)loc + 0x149)) {
		pos = loc[0xa8];
		goto update;
	}
	
update:
	UpdateCharacterIdle(loc, 0);
	return;
}
