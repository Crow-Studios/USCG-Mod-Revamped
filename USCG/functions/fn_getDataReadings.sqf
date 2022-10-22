params ["_unit"];

private _stretcherDeployed = _hook getVariable ["stretcherDeployed", false];
private _hookDeployed = _hook getVariable ["hookDeployed", false];
private _basketDeployed = _hook getVariable ["basketDeployed", false];

private _stretcher = _hook getVariable ["stretcher", objNull];
private _basket = _hook getVariable ["basket", objNull];

private _crewCount = 0;

if (_hookDeployed) then {
    private _1 = count crew hook;
	_crewCount = _crewCount + _1;
};

if (_stretcherDeployed) then {
    private _2 = count crew _stretcher;
	_crewCount = _crewCount + _2;
};

if (_basketDeployed) then {
    private _3 = count crew _basket;
	_crewCount = _crewCount + _3;
};

private _objPosition = getPosATL _unit;

private _x = _objPosition select 0;
private _y = _objPosition select 1;

private _meters = vehicle _unit distance [_x,_y,0];

hint format ["This helicopter is approximately %1m away from the ground. \n \n \n There are %2 units on the rescue equipment (hook + equipment). \n \n \n The ropes length is approximately %3.", _meters, _crewCount, ( ropeLength (ropes vehicle _unit select 0) )];