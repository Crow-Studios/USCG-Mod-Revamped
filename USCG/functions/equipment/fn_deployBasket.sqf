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

params ["_vehicle", "_unit"];

diag_log [_vehicle, _unit];

if !("USCG_Basket_Item" in items _unit) exitWith {hint "You don't have a rescue basket in your inventory!"}; // you never know with arma
if !(typeOf _vehicle in ["vtx_MH60M", "vtx_UH60M_MEDEVAC", "vtx_UH60M_SLICK"]) exitWith {hint "You are not in a compatible helicopter."}; // check if they're in the right vehicles first
if !(_vehicle getVariable ["hookDeployed", false]) exitWith {hint "The hoist isn't deployed, dummy!"}; // make sure the hoist is actually deployed

//[_vehicle] call uscg_mod_fnc_deployHook; // rework

private _basket = "USCG_Basket" createVehicle position _unit;
_basket setPos (_vehicle modelToWorld [3,2,-1]);

_basket addItemCargoGlobal ["firstAidKit", 8]; // 2 FAK's get put in automatically
_basket addItemCargoGlobal ["Medikit", 2];

private _tempRope = ropeCreate [hook, [0, 0, 0.05], _basket, "SlingLoadCargo1", 1, []];

hook setVariable ["basketDeployed", true, true];
hook setVariable ["basket", _basket, true];
_unit removeItem "USCG_Basket_Item";