params ["_hook"];

{
    ropeDestroy _x;
} forEach ropes _hook;

_hook setVariable ["uscg_mod_stretcherDeployed", false, true];
_hook setVariable ["uscg_mod_stretcherAttached", false, true];