params ["_heli", "_vehicle"];

_heli addEventHandler ["RopeBreak",{
    params ["_object1", "_rope", "_object2"];
    {
        ropeDestroy _x;
    } forEach ropes _object1;
	_heli animateSource ['hoist_hook_hide', 0];
	_heli setVariable ["uscg_mod_hookDeployed", false, true];
    //[hook] call uscg_mod_fnc_deleteHook; // need this to stay commented out for the detach/attach stretcher function
}];