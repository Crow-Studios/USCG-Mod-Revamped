/*
*	Author: Silence
*	Description: deploys stretcher
*
*	Arguments:
*
*	Return Value:
*	None
*/

params ["_vehicle"];

if (_vehicle getVariable ["stretcherLoaded", false]) then {
    [_vehicle] call uscg_mod_fnc_deployHook;
    hook setVariable ["stretcherDeployed", false, true];
    hook setVariable ["stretcher", objNull, true];
    titleText ["A stretcher is already loaded, only deploying hook.", "PLAIN"];
} else {
    [_vehicle] call uscg_mod_fnc_deployHook;

    private _stretcher = "USCG_Stretcher" createVehicle [0,0,0];
    _stretcher setPos (_vehicle modelToWorld [3,2,-1]);

    _stretcher addItemCargoGlobal ["firstAidKit", 8]; // 2 FAK's get put in automatically
    _stretcher addItemCargoGlobal ["Medikit", 10];

    private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo1", 1, [], ["RopeEnd", [0,0,0]]];
    private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo2", 1, [], ["RopeEnd", [0,0,0]]];
    private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo3", 1, [], ["RopeEnd", [0,0,0]]];
    private _tempRope = ropeCreate [hook, [0, 0, 0.05], _stretcher, "SlingLoadCargo4", 1, [], ["RopeEnd", [0,0,0]]];

    hook setVariable ["stretcherDeployed", true, true];
    hook setVariable ["stretcherAttached", true, true];
    hook setVariable ["stretcher", _stretcher, true];
};