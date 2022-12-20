params ["_vehicle", "_vehicleLoad"];

private _load = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "load", 0] call BIS_fnc_returnConfigEntry;
private _loadCoords = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "loadCoords", [0,0,0]] call BIS_fnc_returnConfigEntry;

if !(_load isEqualTo 1) exitWith {hint "This vehicle doesn't have load compatibility! Try using the hook instead."};

if (_vehicle distance _vehicleLoad >= 6) exitWith {};

[
    5,
    [_vehicle, _vehicleLoad, _loadCoords],
    {
		params ["_args"];

		private _vehicle = _args select 0;
		private _vehicleLoad = _args select 1;
        private _loadCoords = _args select 2;
        
        _vehicle setVariable ["uscg_mod_stretcherLoaded", true, true];

        _vehicleLoad setPos (_vehicle modelToWorld [3,2,-1]);

        _vehicleLoad setDir 0;
        _vehicleLoad attachTo [_vehicle, _loadCoords];

        private _fnc_disableCarry = {
            params ["_object"];
            [_object, false, [0,1.5,0.5], 0, true] remoteExec ["ace_dragging_fnc_setDraggable"];
            [_object, false, [0,1.5,0.5], 0, true] remoteExec ["ace_dragging_fnc_setCarryable"];
        };

        [_vehicleLoad] call _fnc_disableCarry;

        _vehicleLoad setVariable ["uscg_mod_stretcherLoaded", true, true];
        _vehicleLoad setVariable ["uscg_mod_loadedHeli", _vehicle, true];
    },
    {
        titleText ["Loading Failed!", "PLAIN"];
    },
    "Loading Stretcher..."
] call ace_common_fnc_progressBar;