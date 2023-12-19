#include <cutscenes.h>

/*
 * Function:
 * InitCutScenes()
 * 
 * Description:
 * Initialize a cutscene in order for it to be played.
 * 
 * Arguments:
 * None.
 * 
 * Return value:
 * None.
 */
void
InitCutScenes(void)
{
	NuGCutSceneSysInit(cutscene_locatorfns);
	NuSetCutSceneFindCharactersFn(AppCutSceneFindCharacters);
	NuSetCutSceneCharacterRenderFn(AppCutSceneCharacterRender);
	
	return;
}
