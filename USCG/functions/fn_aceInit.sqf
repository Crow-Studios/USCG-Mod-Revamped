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
		private _stretcherDetached = _target getVariable ["stretcherDetached", false];
		private _hookDeployed = _target getVariable ["hookDeployed", false];

		(!_stretcherDetached) && {_stretcherDeployed}
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["vtx_hook", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_actionInfo = [
	"attachStretcher",  // 0: Action name <STRING>
	"Attach Stretcher",                  // 1: Name of the action shown in the menu <STRING>
	"",                                 // 2: Icon <STRING>
	// Statement <CODE>
	{
		params ["_target", "_player", "_params"];
		private _stretcher = _target getVariable ["stretcher", objNull];
		[ _target, _stretcher, [0, 0, 0.05] ] call uscg_mod_fnc_attachStretcher;
	},
	// Condition <CODE>
	{ 
		params ["_target", "_player", "_params"];

		private _stretcherDeployed = _target getVariable ["stretcherDeployed", false];
		private _stretcherDetached = _target getVariable ["stretcherDetached", false];

		private _stretcher = _target getVariable ["stretcher", objNull];

		(_stretcherDetached) && {_stretcherDeployed} && {_target distance _stretcher <= 2}
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["vtx_hook", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

// Stretcher Stuff
private _fnc_makeCarry = {
    params ["_object"];
	[_object, true, [0,1.5,0.5], 0, true] call ace_dragging_fnc_setDraggable;
	[_object, true, [0,1.5,0.5], 0, true] call ace_dragging_fnc_setCarryable;
};

["USCG_Stretcher", "init", _fnc_makeCarry, true, [], true] call CBA_fnc_addClassEventHandler;
["vtx_stretcher_1", "init", _fnc_makeCarry, true, [], true] call CBA_fnc_addClassEventHandler;

/* For Loading Stretchers */
_actionInfo = [
	"loadStretcher",  // 0: Action name <STRING>
	"Load Stretcher",                  // 1: Name of the action shown in the menu <STRING>
	"",                                 // 2: Icon <STRING>
	// Statement <CODE>
	{
		params ["_target", "_player", "_params"];

        {
            if (typeOf _x in ["vtx_MH60M", "vtx_UH60M_MEDEVAC", "vtx_UH60M_SLICK"]) then {
                heli = _x;
            };
        } forEach nearestObjects [_target, ["Air"], 10];

		[heli, _target] call uscg_mod_fnc_loadStretcher;
	},
	// Condition <CODE>
	{ 
		params ["_target", "_player", "_params"];

		private _stretcherDetached = _target getVariable ["stretcherDetached", false];
        private _stretcherLoaded = _target getVariable ["stretcherLoaded", false];

		(!_stretcherDetached) && {!_stretcherLoaded}
	}
];

_action = _actionInfo call ace_interact_menu_fnc_createAction;
["USCG_Stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["vtx_stretcher_1", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

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
/* For Loading Stretchers */

/* For Interacting With Stretchers In Heli */
private _condition = {(vehicle player) getVariable ["stretcherLoaded", false]};
private _statement = {[player] call uscg_mod_fnc_treatStretcherPatient};
private _action = ["treatPatient","Treat Patient On Stretcher","\USCG_Stretcher\UI\stretcher_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
["vtx_H60_base", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;