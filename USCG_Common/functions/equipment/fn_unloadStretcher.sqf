params ["_vehicle", "_vehicleLoad"];

[
    3,
    [_vehicle, _vehicleLoad],
    {
		params ["_args"];

		_vehicle = _args select 0;
		_vehicleLoad = _args select 1;
        
		_vehicle setVariable ["uscg_mod_stretcherLoaded", false, true];

		_vehicleLoad setPosATL (_vehicle modelToWorld [3,2,-1]);

		detach _vehicleLoad;

		private _fnc_makeCarry = {
			params ["_object"];
			[_object, true, [0,1.5,0.5], 0, true] remoteExec ["ace_dragging_fnc_setDraggable"];
			[_object, true, [0,1.5,0.5], 0, true] remoteExec ["ace_dragging_fnc_setCarryable"];
		};

		[_vehicleLoad] call _fnc_makeCarry;
		_vehicleLoad setVariable ["uscg_mod_stretcherLoaded", false, true];
    },
    {
        titleText ["Unloading Failed!", "PLAIN"];
    },
    "Unloading Stretcher..."
] call ace_common_fnc_progressBar;
