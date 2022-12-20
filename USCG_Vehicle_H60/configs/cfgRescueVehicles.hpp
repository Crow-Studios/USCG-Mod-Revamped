class cfgRescueVehicles
{
    class rescue_vehicle_base
    { // this one has hoist and space for loaded equipment
        rescueVehicle = 1;

        hoist = 1;
        hoistPoint = ""; // for memory based ropes
        hoistCoords[] = {1.405, 2.03, 0.45};
        hoistPointCoords[] = {0,0,0}; // for memory based ropes

        load = 1;
        loadCoords[] = {0,2,-0.22}; // for different heli heights etc
        loadRotation = 0;
    };

    class rescue_vehicle_base_loadable : rescue_vehicle_base
    { // this one has space for loaded equipment, but no hoist
        hoist = 0;
        load = 1;
    };

    class rescue_vehicle_base_hoistable : rescue_vehicle_base
    { // this one has no space for a loaded equipment, but has hoist
        hoist = 1;
        load = 0;
    };

    class rescue_vehicle_base_EXCLUDE : rescue_vehicle_base
    { // this one has no space for a loaded equipment, and has no hoist
        hoist = 0;
        load = 0;
    };

    // this is a general guideline, things won't always look right if player edits vehicle appearance

    class vtx_HH60              : rescue_vehicle_base {};
    class vtx_MH60M             : rescue_vehicle_base {};
    class vtx_MH60M_DAP         : rescue_vehicle_base_EXCLUDE {};
    class vtx_MH60M_DAP_MLASS   : rescue_vehicle_base_EXCLUDE {};
    class vtx_UH60M             : rescue_vehicle_base_hoistable {};
    class vtx_UH60M_MEDEVAC     : rescue_vehicle_base {};
    class vtx_UH60M_SLICK       : rescue_vehicle_base {};
};