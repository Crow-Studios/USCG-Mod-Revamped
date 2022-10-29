class cfgPatches
{
	class USCG_Winch
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"USCG_static_object_winch"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

#define AUTHOR "USCG Dev Team"

// USCG_Static

class CfgVehicles 
{	
    class Static;
    class Land_Camping_Light_F;
    class USCG_static_object_winch : Land_Camping_Light_F {
		author=AUTHOR;
        scope = 2;
        model = "\USCG_Winch\winch.p3d";
        displayName = "Winch (Object)";
        faction = "Empty";
        vehicleClass = "USCG_Static";
    };
};