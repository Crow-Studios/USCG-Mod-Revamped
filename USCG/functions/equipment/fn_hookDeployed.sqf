params ["_vehicle"];

private _helicopter = _vehicle getVariable ["helicopter", objNull];

private _hookDeployed = _vehicle getVariable ["hookDeployed", false];


/* I'm a dummy, no wonder the retrieve wasn't working after deploying the hook + a stretcher loaded
if (_helicopter getVariable ["stretcherLoaded", false]) then {
    _hookDeployed = false;
};
*/

_hookDeployed