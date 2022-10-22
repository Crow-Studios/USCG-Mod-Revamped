params ["_vehicle"];

_vehicle addEventHandler ["GetIn", {
    
	params ["_vehicle", "_role", "_unit", "_turret"];

    if (typeOf _vehicle == "USCG_Stretcher") then {

        if !(isPlayer _unit) then {
            _unit enableSimulation false;
        };

        [_unit, "uscg_anim_stretcher"] remoteExec ["switchMove"];

    };
    
}];