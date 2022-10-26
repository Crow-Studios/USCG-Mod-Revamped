params ["_vehicle"];

_vehicle addEventHandler ["GetIn", {
    
	params ["_vehicle", "_role", "_unit", "_turret"];

    switch (typeOf _vehicle) do
    {
        case "USCG_Stretcher": {[_unit, "uscg_anim_stretcher"] remoteExec ["switchMove"]};
        case "USCG_Stokes_Basket": {[_unit, "uscg_anim_stretcher"] remoteExec ["switchMove"]};
        case "USCG_Basket": {[_unit, "acts_civilhiding_1"] remoteExec ["switchMove"]};
    };
    

    if (typeOf _vehicle in ["USCG_Stretcher", "USCG_Stokes_Basket", "USCG_Basket"]) then { // stops AI from moving their heads and breaking stuff

        if !(isPlayer _unit) then {
            _unit enableSimulation false;
        };

    };
    
}];

_vehicle addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];

    if (typeOf _vehicle in ["USCG_Stretcher", "USCG_Stokes_Basket", "USCG_Basket"]) then {

        if !(isPlayer _unit) then {
            _unit enableSimulation true;
        };

    };
    
}];