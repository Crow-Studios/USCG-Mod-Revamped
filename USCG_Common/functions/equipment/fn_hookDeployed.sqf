params ["_vehicle"];

private _helicopter = _vehicle getVariable ["uscg_mod_helicopter", objNull];

private _hookDeployed = _vehicle getVariable ["uscg_mod_hookDeployed", false];

/* I'm a dummy, no wonder the retrieve wasn't working after deploying the hook + a stretcher loaded
if (_helicopter getVariable ["uscg_mod_stretcherLoaded", false]) then {
    _hookDeployed = false;
};
*/

_hookDeployed