/*
*	Author: Silence
*	Description: deploys stretcher
*
*	Arguments:
*
*	Return Value:
*	None
*/

params ["_vehicle", "_unit"];

if !("USCG_Stretcher_Item" in items _unit) exitWith {hint "You don't have a stretcher in your inventory!"}; // you never know with arma
if !(typeOf _vehicle in ["vtx_MH60M", "vtx_UH60M_MEDEVAC", "vtx_UH60M_SLICK"]) exitWith {hint "You are not in a compatible helicopter."}; // check if they're in the right vehicles first
if !(_vehicle getVariable ["hookDeployed", false]) exitWith {hint "The hoist isn't deployed, dummy!"}; // make sure the hoist is actually deployed

//[_vehicle] call uscg_mod_fnc_deployHook; // rework

private _stretcher = "USCG_Stokes_Basket" createVehicle [0,0,0];
_stretcher setPos (_vehicle modelToWorld [3,2,-1]);

_stretcher addItemCargoGlobal ["firstAidKit", 8]; // 2 FAK's get put in automatically
_stretcher addItemCargoGlobal ["Medikit", 10];

private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo1", 1, []];
private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo2", 1, []];
private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo3", 1, []];
private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo4", 1, []];

hook setVariable ["stretcherDeployed", true, true];
hook setVariable ["stretcherAttached", true, true];
hook setVariable ["stretcher", _stretcher, true];
_unit removeItem "USCG_Stretcher_Item";