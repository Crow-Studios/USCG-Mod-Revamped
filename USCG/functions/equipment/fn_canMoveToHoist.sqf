params ["_vehicle"];

if ( (_vehicle getVariable ["hookDeployed",false]) ) then {
	true
} else {
	false
};