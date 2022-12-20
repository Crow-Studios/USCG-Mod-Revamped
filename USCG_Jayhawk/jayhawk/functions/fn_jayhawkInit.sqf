/*
*	Author: Silence
*	Description: Initialises the jayhawk when it is spawned
*
*	Arguments:
*	0: _vehicle			<OBJECT> - Vehicle you want to run on
*	Return Value:
*	None
*/


params ["_vehicle"];

['pilot_door', _vehicle] call uscg_jayhawk_fnc_closeDoor, [_vehicle, true] remoteExec ["lockDriver"];

['copilot_door', _vehicle] call uscg_jayhawk_fnc_closeDoor, [_vehicle, [[0], true]] remoteExec ["lockTurret"];

_handle = [_vehicle] spawn {
	params ["_vehicle"];
	
	for "_i" from 0 to 7 do {
		[_vehicle, [_i, true]] remoteExec ["lockCargo"];
		sleep 0.1;
	};
	
};