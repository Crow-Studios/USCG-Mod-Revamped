_actionInfo = [
	"detachStretcher",  // 0: Action name <STRING>
	"Detach Stretcher",                  // 1: Name of the action shown in the menu <STRING>
	"",                                 // 2: Icon <STRING>
	// Statement <CODE>
	{
		params ["_target", "_player", "_params"];
		[_target] call uscg_mod_fnc_detachStretcher;
	},
	// Condition <CODE>
	{ 
		params ["_target", "_player", "_params"];

		private _stretcherDeployed = _target getVariable ["stretcherDeployed", false];
		private _stretcherAttached = _target getVariable ["stretcherAttached", false];
		private _hookDeployed = _target getVariable ["hookDeployed", false];

		(_stretcherAttached)
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["vtx_hook", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;