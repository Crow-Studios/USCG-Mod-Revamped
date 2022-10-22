params ["_player"];

_vehicle = vehicle _player;

//if (! (_vehicle getCargoIndex _player in [8,9]) ) exitWith {};

{
  if ("Stretcher" in typeOf _x) exitWith {
    VIV = _x;
  };
} forEach attachedObjects _vehicle;

private _stretcherMan = crew VIV select 0;

//private _canOpen = [_player, VIV] call ace_medical_gui_fnc_canOpenMenu; // temporary, prob not worth

private _canOpen = true;

if (_canOpen) then {
    [_stretcherMan] call ace_medical_gui_fnc_openMenu;
    //_player switchMove "passenger_inside_5_Idle_Unarmed"; // can break given wrong circumstances
} else {
    titleText ["You can't open the medical menu! Try reloading the stretcher... Unless you're in the air.","PLAIN"];
};