[
    "USCG_Stretcher_Item", // item classname (can be a base class)
    "CONTAINER", // type
    ["Attach Stokes Basket To Hoist"], // name
    [1,1,1,1], // color RGBA
    "", // icon path
    [{params ["_unit", "_container", "_item", "_slot", "_params"]; [vehicle _unit] call uscg_mod_fnc_isRescueVehicle},{params ["_unit", "_container", "_item", "_slot", "_params"]; true}], // condition to use, condition to show
    {
        params ["_unit", "_container", "_item", "_slot", "_params"]; // parameters
        
        [vehicle _unit, _unit] call uscg_mod_fnc_deployStretcher; // I give up, compile stopped working after the shitty update
        // function here
    },
    false, // remove from inventory
    [] // extra params passed
] call CBA_fnc_addItemContextMenuOption;