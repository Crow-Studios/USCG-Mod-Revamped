/*
*	Author: Silence
*	Description: deploys basket
*
*	Arguments:
*   _vehicle - object
*
*	Return Value:
*	None
*/


params ["_vehicle"];

[_vehicle] call uscg_mod_fnc_deployHook;

private _basket = "USCG_Basket" createVehicle getPosATL _vehicle; // add basket classname
_basket setPos (_vehicle modelToWorld [3,2,-3]);

_basket addItemCargoGlobal ["firstAidKit", 8]; // 2 FAK's get put in automatically
_basket addItemCargoGlobal ["Medikit", 10];

private _tempRope = ropeCreate [hook, [0, 0, 0.05], _basket, "SlingLoadCargo1", 1, []];

hook setVariable ["basketDeployed", true, true];
hook setVariable ["basket", _basket, true];