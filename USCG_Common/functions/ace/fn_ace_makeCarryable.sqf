params ["_object", "_carryable", "_offset"];

[_object, _carryable, _offset, 0, true] call ace_dragging_fnc_setDraggable;
[_object, _carryable, _offset, 0, true] call ace_dragging_fnc_setCarryable;

// [0,1.5,0.5]