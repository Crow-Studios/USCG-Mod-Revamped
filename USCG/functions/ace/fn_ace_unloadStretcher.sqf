_actionInfo = [
	"unloadStretcher",  // 0: Action name <STRING>
	"Unload Stretcher",                  // 1: Name of the action shown in the menu <STRING>
	"",                                 // 2: Icon <STRING>
	// Statement <CODE>
	{
		params ["_target", "_player", "_params"];

        {
            if (typeOf _x in ["vtx_MH60M", "vtx_UH60M_MEDEVAC", "vtx_UH60M_SLICK"]) then {
                heli = _x;
            };
        } forEach nearestObjects [_target, ["Air"], 10];

		[heli, _target] call uscg_mod_fnc_unloadStretcher;
	},
	// Condition <CODE>
	{ 
		params ["_target", "_player", "_params"];

		private _stretcherDetached = _target getVariable ["stretcherDetached", false];
        private _stretcherLoaded = _target getVariable ["stretcherLoaded", false];

		(!_stretcherDetached) && {_stretcherLoaded}
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["USCG_Stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["vtx_stretcher_1", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;