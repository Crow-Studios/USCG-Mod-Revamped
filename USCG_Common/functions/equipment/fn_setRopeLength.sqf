params ["_length", "_vehicle"];

private _attached = ropeAttachedObjects _vehicle;

{
	_x setDir getDir _vehicle;
} forEach _attached;

{
	ropeUnwind [_x, 4, _length, false];
} forEach ropes _vehicle;