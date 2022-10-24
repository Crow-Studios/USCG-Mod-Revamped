params ["_vehicle"];

if ( ropeLength (ropes _vehicle select 0) <= 3 && (_vehicle getVariable ["hookDeployed",false]) ) then {
    _canMove = true;
} else {
    _canMove = false;
};

_canMove