/*
*	Author: Silence
*	Description: Deploys hook
*
*	Arguments:
*
*	Return Value:
*	None
*/


params ["_vehicle"];

hook = "vtx_hook" createVehicle position _vehicle;

publicVariable "hook";

hook setPos (_vehicle modelToWorld [3,2,-1]);

private _rope = ropeCreate [_vehicle, [1.405, 2.03, 0.45], hook, [0,0,0.2], 3];

hook setVariable ["hookDeployed", true, true];
hook setVariable ["helicopter", _vehicle, true];

[_vehicle] call uscg_mod_fnc_handleRopeDetach;

_vehicle animateSource ['hoist_hook_hide', 1];