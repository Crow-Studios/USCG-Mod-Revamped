params ["_unit", "_vehicle", "_item"];

if (vehicle _unit != _unit) exitWith {};

[_unit, "AinvPknlMstpSnonWnonDnon_medic5"] remoteExec ["playMove"];

[
    10, // 5 was too fast
    [_unit, _vehicle, _item],
    {
		params ["_args"];

		private _unit = _args select 0;
		private _vehicle = _args select 1;
        private _item = _args select 2;
        
        _unit setVariable ["uscg_mod_canUnfoldStretcher",false,true];

        _unit removeItem _item;

        private _pos = getPosATL _unit;

        private _vehicle = _vehicle createVehicle _pos;
        _vehicle setPos _pos;
        _vehicle setDir getDir _unit;
        _vehicle setPos (_vehicle modelToWorld [1,0.5,0]);
    },
    {
        params ["_args"];
        private _unit = _args select 0;
        titleText ["Unpacking Failed!", "PLAIN"];
        [_unit, "AinvPknlMstpSnonWnonDnon_medicEnd"] remoteExec ["switchMove"];
    },
    "Unpacking Stokes Basket..."
] call ace_common_fnc_progressBar;