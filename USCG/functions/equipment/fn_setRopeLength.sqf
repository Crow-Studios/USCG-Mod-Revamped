params ["_length", "_vehicle"];

{
	ropeUnwind [_x, 4, _length, false];
} forEach ropes _vehicle;