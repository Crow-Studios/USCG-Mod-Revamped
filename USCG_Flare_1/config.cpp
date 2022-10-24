class cfgPatches
{
	class USCG_Flare_1
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"USCG_static_item_flare_1"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

#define AUTHOR "USCG Dev Team"

/*
class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class USCG_static_item_flare_1: CBA_MiscItem
	{
		displayName = "Airdrop Flare (Blue)";
		scope=2;
		author = "Lost Hope Dev Team"; //Your Name
		picture = "\USCG_flare_1\UI\USCG_flare_1_ca.paa";
		model = "\USCG_flare_1\USCG_flare_1.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Airdrop Signal Flare";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 30;
			scope = 0;
			type = 302;
		};
	};
};
*/ // No need, already have a grenade vers. ingame

class CfgVehicles 
{	
    class Static;
    class USCG_static_object_flare_1 : Static {
		author=AUTHOR;
        scope = 2;
        model = "\USCG_flare_1\USCG_flare_1.p3d";
        displayName = "Flare 1 (Object)";
        faction = "Empty";
        vehicleClass = "USCG_Static";
		class TransportItems
		{
			class USCG_static_item_flare_1
			{
				name = USCG_static_item_flare_1;
				count = 1;
			};
		};
    };
};