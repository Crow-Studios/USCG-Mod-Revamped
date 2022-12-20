/*
*	Author: Silence
*	Description: Opens door defined by params
*
*	Arguments:
*	0: _door 		<STRING> - ["copilot_door", "pilot_door"]
*	1: _vehicle		<OBJECT> - Vehicle you want to run on
*	Return Value:
*	None
*/

params ["_door", "_vehicle"];

_handle = [_door, _vehicle] spawn {
	params ["_door", "_vehicle"];
    for "_i" from 0 to 1.1 step 0.03 do {
        _vehicle animate [_door, _i];
        uiSleep 0.001;
    };
};