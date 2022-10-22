params ["_unit", "_vehicle", "_item"];

_unit setVariable ["canUnfoldStretcher",false,true];

//_unit removeItem _item;
[_unit, "PutDown"] call ace_common_fnc_doGesture;

private _pos = getPosATL _unit;

private _vehicle = _vehicle createVehicle _pos;
_vehicle setPos _pos;
_vehicle setDir getDir _unit;