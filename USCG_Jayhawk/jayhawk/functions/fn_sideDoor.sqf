/*
*	Author: Silence
*	Description: Closes / Opens side door defined by params
*
*	Arguments:
*	0: _vehicle		<OBJECT> - Vehicle you want to run on
*	Return Value:
*	None
*/


params ["_vehicle"];

if (_vehicle doorPhase "door_RB" < 0.9) then {
	[_vehicle, ["Door_RB", 1]] remoteExec ["animateDoor"];
	for "_i" from 0 to 7 do {[_vehicle, [_i, false]] remoteExec ["lockCargo"]};
};

if (_vehicle doorPhase "door_RB" > 0.9) then {
	[_vehicle, ["Door_RB", 0]] remoteExec ["animateDoor"];
	for "_i" from 0 to 7 do {[_vehicle, [_i, true]] remoteExec ["lockCargo"]};
};