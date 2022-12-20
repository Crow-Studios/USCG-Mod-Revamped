params ["_vehicle"];

if ( ropeLength (ropes _vehicle select 0) <= 3 && ([_vehicle] call uscg_mod_fnc_hookDeployed) ) then {
    true
} else {
    false
};