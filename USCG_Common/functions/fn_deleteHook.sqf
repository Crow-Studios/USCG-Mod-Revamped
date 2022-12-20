params ["_hook", "_vehicle"];

private _stretcherDeployed = _hook getVariable ["uscg_mod_stretcherDeployed", false];
private _hookDeployed = _hook getVariable ["uscg_mod_hookDeployed", false];
private _basketDeployed = _hook getVariable ["uscg_mod_basketDeployed", false];

private _stretcher = _hook getVariable ["uscg_mod_stretcher", objNull];
private _basket = _hook getVariable ["uscg_mod_basket", objNull];

if (_hookDeployed) exitWith { // hook always needs to be deployed to run the rest

	[_vehicle] call uscg_mod_fnc_moveInAllOccupants;

	if (_stretcherDeployed) then {
		deleteVehicle _stretcher;
		_vehicle addItemCargoGlobal ["USCG_Stretcher_Item",1]; // add back to main vehicle cargo, is easier
	};

	if (_basketDeployed) then {
		deleteVehicle _basket;
		_vehicle addItemCargoGlobal ["USCG_Basket_Item",1]; // add back to main vehicle cargo, is easier
	};

	{
		ropeDestroy _x;
	} forEach ropes _hook;
	deleteVehicle _hook;

	{
		ropeDestroy _x;
	} forEach ropes _vehicle;

	_vehicle animateSource ['hoist_hook_hide', 0];
	_vehicle setVariable ["uscg_mod_hookDeployed", false, true];

};