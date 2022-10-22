params ["_heli"];

_heli addEventHandler ["RopeBreak",{
    params ["_object1", "_rope", "_object2"];
    {
        ropeDestroy _x;
    } forEach ropes _object1;
    //hintSilent str _object1;
    //[hook] call uscg_mod_fnc_deleteHook; // need this to stay commented out for the detach/attach stretcher function
}];