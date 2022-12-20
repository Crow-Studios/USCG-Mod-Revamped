_actionInfo = [
	"unloadStretcher",  // 0: Action name <STRING>
	"Unload Stretcher",                  // 1: Name of the action shown in the menu <STRING>
	"",                                 // 2: Icon <STRING>
	// Statement <CODE>
	{
		params ["_target", "_player", "_params"];

        // {
		// 	private _rescueVehicle = [_x] call uscg_mod_fnc_isRescueVehicle;
        //     if (_rescueVehicle) then {
        //         heli = _x;
        //     };
        // } forEach nearestObjects [_target, ["Air"], 10];

		private _heli = _target getVariable ["uscg_mod_loadedHeli", objNull];

		if (_heli isEqualTo objNull) exitWith {hint "Something went wrong with the heli load in/out script, aborting"; diag_log [_heli, _target]};

		[_heli, _target] call uscg_mod_fnc_unloadStretcher;
	},
	// Condition <CODE>
	{ 
		params ["_target", "_player", "_params"];

		private _stretcherDetached = _target getVariable ["uscg_mod_stretcherDetached", false];
        private _stretcherLoaded = _target getVariable ["uscg_mod_stretcherLoaded", false];

		(!_stretcherDetached) && {_stretcherLoaded}
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["USCG_Stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["vtx_stretcher_1", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;