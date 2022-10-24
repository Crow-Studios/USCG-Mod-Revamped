class cfgPatches
{
	class USCG_Flare_2
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"uscg_static_item_flare_2"
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
	class USCG_static_item_flare_2: CBA_MiscItem
	{
		displayName = "Airdrop Flare";
		scope=2;
		author = "Lost Hope Dev Team"; //Your Name
		picture = "\USCG_flare_2\UI\USCG_flare_2_ca.paa";
		model = "\USCG_flare_2\USCG_flare_2.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Airdrop Signal Flare (Blue)";
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
    class uscg_static_item_flare_2 : Static {
		author=AUTHOR;
        scope = 2;
        model = "\USCG_Flare_2\USCG_Flare_2.p3d";
        displayName = "Flare 2 (Object)";
        faction = "Empty";
        vehicleClass = "USCG_Static";
		class TransportItems
		{
			class USCG_static_item_flare_2
			{
				name = USCG_static_item_flare_2;
				count = 1;
			};
		};
    };
};