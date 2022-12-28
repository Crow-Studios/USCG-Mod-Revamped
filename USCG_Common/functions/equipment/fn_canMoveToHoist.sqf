params ["_vehicle"];

if ( (_vehicle getVariable ["uscg_mod_hookDeployed",false]) ) then {
	true
} else {
	false
};