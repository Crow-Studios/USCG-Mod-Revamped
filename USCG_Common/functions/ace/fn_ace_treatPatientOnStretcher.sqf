private _condition = {(vxf_vehicle) getVariable ["uscg_mod_stretcherLoaded", false]};
private _statement = {[player] call uscg_mod_fnc_treatStretcherPatient};
private _action = ["treatPatient","Treat Patient On Stretcher","\USCG_Stretcher\UI\stretcher_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
["vtx_H60_base", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;