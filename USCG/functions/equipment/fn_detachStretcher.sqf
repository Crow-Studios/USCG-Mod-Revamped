params ["_hook"];

{
    ropeDestroy _x;
} forEach ropes _hook;

_hook setVariable ["stretcherAttached", false, true];