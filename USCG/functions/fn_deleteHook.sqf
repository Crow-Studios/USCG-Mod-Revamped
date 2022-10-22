params ["_hook", "_vehicle"];

private _stretcherDeployed = _hook getVariable ["stretcherDeployed", false];
private _hookDeployed = _hook getVariable ["hookDeployed", false];
private _basketDeployed = _hook getVariable ["basketDeployed", false];

private _stretcher = _hook getVariable ["stretcher", objNull];
private _basket = _hook getVariable ["basket", objNull];

if (_hookDeployed) exitWith { // hook always needs to be deployed to run the rest

	if (_stretcherDeployed) then {
		deleteVehicle _stretcher;
	};

	if (_basketDeployed) then {
		deleteVehicle _basket;
	};

	{
		ropeDestroy _x;
	} forEach ropes _hook;
	deleteVehicle _hook;

	{
		ropeDestroy _x;
	} forEach ropes _vehicle;

	_vehicle animateSource ['hoist_hook_hide', 0];

};