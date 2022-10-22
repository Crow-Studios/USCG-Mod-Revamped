params ["_vehicle"];

private _helicopter = _vehicle getVariable ["helicopter", objNull];

private _hookDeployed = _vehicle getVariable ["hookDeployed", false];

if (_helicopter getVariable ["stretcherLoaded", false]) then {
    _hookDeployed = false;
};

_hookDeployed