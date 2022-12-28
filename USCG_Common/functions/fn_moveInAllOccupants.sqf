params ["_vehicle"];

private _stretcherAttached = hook getVariable ["uscg_mod_stretcherAttached", false];
private _hookDeployed = hook getVariable ["uscg_mod_hookDeployed", false];
private _basketDeployed = hook getVariable ["uscg_mod_basketDeployed", false];

private _stretcher = hook getVariable ["uscg_mod_stretcher", objNull];
private _basket = hook getVariable ["uscg_mod_basket", objNull];

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
emptySpots = [];

{
	private _unit = (_x select 0);
	private _role = (_x select 1);
	private _cargoIndex = (_x select 2);

	if (_unit isEqualTo objNull && _cargoIndex != -1) then {
		emptySpots append [_cargoIndex];
	};
} forEach _spots;

{
	private _unit = _x;
	private _handle = [_unit, _vehicle] spawn { // fix locality issues?
		params ["_unit", "_vehicle"];
		_unit setPosATL [0, 0, 0];
		_unit assignAsCargo _vehicle;
		[_unit, [_vehicle, (emptySpots select 0), true]] remoteExec ["moveInCargo", _unit]; // Please for the love of all that is holy... work
		diag_log format["%1 was moved into %2 by moveAllOccupants", _unit, _vehicle];
		emptySpots deleteAt (emptySpots select 0);
		uiSleep 1;
		if (vehicle _unit != _vehicle) then {_unit setPos getPos _vehicle; _unit moveInAny _vehicle; diag_log "moveAllOccupants script has failed, using failsafe."}; // Incase script fails
	};
} forEach _crews;

// I was puzzled for so long, then I remembered all the forEach loops were in different scopes so the _forEachIndex wasn't shared...
// Safe to say, that wasn't fun!
