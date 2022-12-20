params ["_vehicle"];

private _rescueVehicle = [(configFile >> "cfgRescueVehicles" >> typeOf _vehicle), "rescueVehicle", 0] call BIS_fnc_returnConfigEntry;

if (_rescueVehicle isEqualTo 1) then {
    true
} else {
    false
};