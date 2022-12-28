class cfgRescueVehicles
{
    class rescue_vehicle_base;

    // USCG Helicopters
    class USCG_Jayhawk : rescue_vehicle_base
    {
        hoistPoint = "rope";
        hoistPointCoords[] = {0,0,0.2};
        loadCoords[] = {-0.47,2.4,-0.81}; // for different heli heights etc
        loadRotation = 0;
    };
};