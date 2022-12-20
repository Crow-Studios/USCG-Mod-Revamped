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

private _hoist = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "hoist", 0] call BIS_fnc_returnConfigEntry;

if !(_hoist isEqualTo 1) exitWith {hint "This vehicle doesn't have hook compatibility! Try loading some equipment instead."};

private _hoistCoords = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "hoistCoords", [0,0,0]] call BIS_fnc_returnConfigEntry;

private _hoistPoint = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "hoistPoint", ""] call BIS_fnc_returnConfigEntry;

hook = "vtx_hook" createVehicle position _vehicle;

publicVariable "hook";

hook setPos (_vehicle modelToWorld [3,2,-1]);

if !(_hoistPoint isEqualTo "") then {
    private _hoistPointCoords = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "hoistPointCoords", [0,0,0]] call BIS_fnc_returnConfigEntry;

    _rope = ropeCreate [_vehicle, _hoistPoint, hook, [0,0,0.25], 3];
} else {
    _rope = ropeCreate [_vehicle, _hoistCoords, hook, [0,0,0.25], 3];
};

hook setVariable ["uscg_mod_hookDeployed", true, true];
hook setVariable ["uscg_mod_helicopter", _vehicle, true];

_vehicle setVariable ["uscg_mod_hookDeployed", true, true]; // add it to helicopter too
_vehicle animateSource ['hoist_hook_hide', 1];

[_vehicle] call uscg_mod_fnc_handleRopeDetach;