[] call uscg_mod_fnc_ace_attachStretcher;
[] call uscg_mod_fnc_ace_detachStretcher;
[] call uscg_mod_fnc_ace_loadStretcher;
[] call uscg_mod_fnc_ace_unloadStretcher;
[] call uscg_mod_fnc_ace_treatPatientOnStretcher;

// You can call uscg_mod_fnc_ace_makeCarryable on an object by object basis

private _fnc_makeCarry = {
	params ["_object"];

	[_object, true, [0,1.5,0.5], 0, true] call ace_dragging_fnc_setDraggable;
	[_object, true, [0,1.5,0.5], 0, true] call ace_dragging_fnc_setCarryable;
};

["USCG_Stretcher", "init", _fnc_makeCarry, true, [], true] call CBA_fnc_addClassEventHandler;
["vtx_stretcher_1", "init", _fnc_makeCarry, true, [], true] call CBA_fnc_addClassEventHandler;