params ["_vehicle", "_vehicleLoad"];

if (_vehicle distance _vehicleLoad >= 6) exitWith {};

hint str _vehicle;

[
    5,
    [_vehicle, _vehicleLoad],
    {
		params ["_args"];

		_vehicle = _args select 0;
		_vehicleLoad = _args select 1;
        
        _vehicle setVariable ["stretcherLoaded", true, true];

        _vehicleLoad setPos (_vehicle modelToWorld [3,2,-1]);

        if (typeOf _vehicleLoad == "USCG_Stretcher") then {
            _vehicleLoad setDir 0; // fits vertically but not horizontally
            _vehicleLoad attachTo [_vehicle, [0,2,-0.20]];
        } else {
            _vehicleLoad setDir 0;
            _vehicleLoad attachTo [_vehicle, [0,2,-0.22]];
        };

        private _fnc_disableCarry = {
            params ["_object"];
            [_object, false, [0,1.5,0.5], 0, true] remoteExec ["ace_dragging_fnc_setDraggable"];
            [_object, false, [0,1.5,0.5], 0, true] remoteExec ["ace_dragging_fnc_setCarryable"];
        };

        [_vehicleLoad] call _fnc_disableCarry;

        _vehicleLoad setVariable ["stretcherLoaded", true, true];
    },
    {
        titleText ["Loading Failed!", "PLAIN"];
    },
    "Loading Stretcher..."
] call ace_common_fnc_progressBar;