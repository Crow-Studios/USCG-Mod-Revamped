class cfgPatches
{
	class Lost_Hope_Flare_2
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"lost_hope_static_item_flare_2"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

/*
class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class lost_hope_static_item_flare_2: CBA_MiscItem
	{
		displayName = "Airdrop Flare";
		scope=2;
		author = "Lost Hope Dev Team"; //Your Name
		picture = "\lost_hope_flare_2\UI\lost_hope_flare_2_ca.paa";
		model = "\lost_hope_flare_2\lost_hope_flare_2.p3d";
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
    class lost_hope_static_object_flare_2 : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_flare_2\lost_hope_flare_2.p3d";
        displayName = "Flare 2 (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_flare_2
			{
				name = lost_hope_static_item_flare_2;
				count = 1;
			};
		};
    };
};