_actionInfo = [
	"attachStretcher",  // 0: Action name <STRING>
	"Attach Stretcher",                  // 1: Name of the action shown in the menu <STRING>
	"",                                 // 2: Icon <STRING>
	// Statement <CODE>
	{
		params ["_target", "_player", "_params"];
		// not needed for now // private _stretcher = _target getVariable ["uscg_mod_stretcher", objNull];
		//diag_log "Attach Stretcher: Hook wasn't deployed with stretcher. looking for the nearest stretcher";
		
		private _stretcher = nearestObject [_target, "USCG_Stretcher"];

		if (_stretcher isEqualTo objNull) exitWith {};
		
		if (_target distance2D _stretcher <= 2) exitWith {
			_target setVariable ["uscg_mod_stretcher", _stretcher, true];
			[ _target, _stretcher, [0, 0, 0.05] ] call uscg_mod_fnc_attachStretcher;
		};
	},
	// Condition <CODE>
	{ 
		params ["_target", "_player", "_params"];

		private _stretcherDeployed = _target getVariable ["uscg_mod_stretcherDeployed", false];
		private _stretcherAttached = _target getVariable ["uscg_mod_stretcherAttached", false];

		private _stretcher = _target getVariable ["uscg_mod_stretcher", objNull];

		(!_stretcherAttached)
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["vtx_hook", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;
