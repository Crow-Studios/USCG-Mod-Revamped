params ["_vehicle"];

private _stretcherAttached = hook getVariable ["stretcherAttached", false];
private _hookDeployed = hook getVariable ["hookDeployed", false];
private _basketDeployed = hook getVariable ["basketDeployed", false];

private _stretcher = hook getVariable ["stretcher", objNull];
private _basket = hook getVariable ["basket", objNull];

private _crews = [];

if (_hookDeployed) then {
	_crews append (crew hook);
};

if (_stretcherAttached) then {
	_crews append (crew _stretcher);
};

if (_basketDeployed) then {
	_crews append (crew _basket);
};

//private _emptySpots = _vehicle emptyPositions "Cargo";
private _crewCount = count _crews;
private _spots = fullCrew [_vehicle, "", true];
_emptySpots = [];

{
	private _unit = (_x select 0);
	private _role = (_x select 1);
	private _cargoIndex = (_x select 2);

	if (_unit isEqualTo objNull && _cargoIndex != -1) then {
		_emptySpots append [_cargoIndex];
	};
} forEach _spots;

{
	_x setPos getPos _vehicle;
	_x assignAsCargo _vehicle;
	_x moveInCargo [_vehicle, (_emptySpots select 0), true];
	_emptySpots deleteAt (_emptySpots select 0);
	uiSleep 1;
} forEach _crews;

// I was so puzzled for so long, then I remembered all the forEach loops were in different scopes so the _forEachIndex wasn't shared...
// Safe to say, that wasn't fun!