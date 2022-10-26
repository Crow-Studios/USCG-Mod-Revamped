class CfgPatches
{
	class USCG_Common
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class cfgFactionClasses 
{ 
    class USCG
    { 
        displayName = "USCG"; 
        priority = 3;
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "\USCG_Common\USCG_Image.paa";
    };
};

#include "\USCG_Common\dialogs\defines.hpp"
#include "\USCG_Common\dialogs\dialogs.hpp"