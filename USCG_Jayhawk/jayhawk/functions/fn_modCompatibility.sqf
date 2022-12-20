/*
*	Author: Silence
*	Description: Speaks for itself doesn't it
*
*	Arguments:
*
*	Return Value:
*	None
*/


hasHatchet = false;
hasACE = false;

if ( isClass (configFile >> "cfgPatches" >> "vtx_main") ) then {
	hasHatchet = true;
};

if ( isClass (configFile >> "cfgPatches" >> "ace_medical") ) then {
	hasACE = true;
};