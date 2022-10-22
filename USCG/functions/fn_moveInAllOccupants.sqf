params ["_vehicle"];

private _stretcherDeployed = hook getVariable ["stretcherDeployed", false];
private _hookDeployed = hook getVariable ["hookDeployed", false];
private _basketDeployed = hook getVariable ["basketDeployed", false];

private _stretcher = hook getVariable ["stretcher", objNull];
private _basket = hook getVariable ["basket", objNull];

private _crews = [];

if (_hookDeployed) then {
	_crews append (crew hook);
};

if (_stretcherDeployed) then {
	_crews append (crew _stretcher);
};

if (_basketDeployed) then {
	_crews append (crew _basket);
};

{
	_x setPos getPos _vehicle;
	_x assignAsCargo _vehicle;
	_x moveInCargo [_vehicle, _forEachIndex, true];
	uiSleep 1;
} forEach _crews;

// I was so puzzled for so long, then I remembered all the forEach loops were in different scopes so the _forEachIndex wasn't shared...
// Safe to say, that wasn't fun!