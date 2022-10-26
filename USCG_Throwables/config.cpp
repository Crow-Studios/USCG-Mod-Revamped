class cfgPatches
{
	class USCG_Throwables
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"USCG_static_item_flare_1",
			"USCG_static_item_flare_2"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F", "A3_Data_F"};
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

class cfgVehicleClasses
{
	class USCG_Static
	{
		displayName = "[USCG] Static Objects";
	};
};

class CfgVehicles 
{	
    class Static;
    class USCG_static_object_flare_1 : Static {
		author=AUTHOR;
        scope = 2;
        model = "\USCG_Throwables\flares\USCG_flare_1.p3d";
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
    class uscg_static_item_flare_2 : Static {
		author=AUTHOR;
        scope = 2;
        model = "\USCG_Throwables\flares\USCG_Flare_2.p3d";
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

class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		moveVelocity[] = {0, 0, 10};
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		moveVelocity[] = {0, 0, 15};
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		moveVelocity[] = {0, 0, 5};
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		moveVelocity[] = {0, 0, 10};
	};
};

class cfgAmmo
{
	class SmokeShellRed;
	class Grenade;
	class GrenadeHand;
	class USCG_ammo_flare_1: SmokeShellRed
	{
		model="\USCG_Throwables\flares\USCG_flare_1_throw.p3d";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="SmokeShellWhiteEffect"; //SmokeShellRedEffect 
	};
	class USCG_ammo_flare_2: SmokeShellRed
	{
		model="\USCG_Throwables\flares\USCG_flare_2_throw.p3d";
		smokeColor[]={0.1383,0.1353,0.84380001,1};
		effectsSmoke="SmokeShellWhiteEffect"; //SmokeShellBlueEffect
	};
};

class cfgMagazines 
{
	class SmokeShellRed;
	class CA_Magazine;
	class HandGrenade : CA_Magazine {};
	class USCG_mag_flare_1: SmokeShellRed
	{
		author=AUTHOR;
		displayName="Signal Flare";
		displayNameShort="Signal Flare";
		picture="\USCG_Throwables\flares\UI\USCG_flare_1_ca.paa";
		model="\USCG_Throwables\flares\USCG_flare_1_throw.p3d";
		ammo="USCG_ammo_flare_1";
		descriptionShort="Signal Flare, Used For... signalling?";
		mass = 30;
	};
	class USCG_mag_flare_2: SmokeShellRed
	{
		author=AUTHOR;
		displayName="Signal Flare (Blue)";
		displayNameShort="Signal Flare (Blue)";
		picture="\USCG_Throwables\flares\UI\USCG_flare_2_ca.paa";
		model="\USCG_Throwables\flares\USCG_flare_2_throw.p3d";
		ammo="USCG_ammo_flare_2";
		descriptionShort="Signal Flare, Used For... slightly different signalling?";
		mass = 30;
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += 
		{
			"USCG_mag_flare_1_throw", 
			"USCG_mag_flare_2_throw"
		};
		class ThrowMuzzle;
		class USCG_mag_flare_1_throw : ThrowMuzzle
		{
			magazines[] = {"USCG_mag_flare_1"};
		};
		class USCG_mag_flare_2_throw : ThrowMuzzle
		{
			magazines[] = {"USCG_mag_flare_2"};
		};
	};
};