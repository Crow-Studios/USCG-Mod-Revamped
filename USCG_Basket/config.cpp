class CfgPatches
{
	class USCG_Basket
	{
		units[] = {"USCG_Basket"};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Boat_F", "USCG_Stretcher"};
	};
};

#define AUTHOR "USCG Dev Team"

class CBA_Extended_EventHandlers;

class Extended_Init_EventHandlers {
    class USCG_Basket {
		class uscg_basket_init {
			init = "[(_this select 0)] call uscg_mod_fnc_onStretcherEnter";
		};
    };
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class USCG_Basket_Item: CBA_MiscItem
	{
		displayName = "Rescue Basket";
		scope=2;
		author=AUTHOR;
		picture = "\USCG_Basket\UI\basket_ca.paa";
		model = "\A3\Props_F_Orange\Humanitarian\Camps\Stretcher_01_folded_F.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Use this in a compatible helicopter.";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 50;
			scope = 0;
			type = 302;
		};
	};
};

class cfgVehicles 
{
	class Tank_F;
	class USCG_Basket_Base : Tank_F
	{
		
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };

		author=AUTHOR;
		// ACE Misc Stuff
		ace_refuel_canReceive = 0;
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
		ace_cookoff_probability = 0;

	};
	
	class USCG_Basket: USCG_Basket_Base 
	{
		class ACE_SelfActions {};
		_generalMacro = "USCG_Basket";
		armor = 1000000;
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"uscg_vehicleanim_stretcher"}; //"passenger_injured_medevac_truck01","passenger_injured_medevac_truck02","passenger_injured_medevac_truck03"
		ejectDeadCargo = 0;
		cargoProxyIndexes[] = {1};
		//editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Military";
		cost = 0;
		displayName = "Basket";
		hasDriver = 0;
		hasGunner = 0;
		hasCommander = 0;
		// Change these paths
		picture = "\USCG_Basket\UI\basket_ca.paa";
		icon = "\USCG_Basket\UI\basket_ca.paa";
		editorPreview = "\USCG_Basket\UI\basket_ca.paa";
		mapSize = 2;
		mass = 13;
		maximumLoad = 0;
		tf_isolatedAmount = 0;
		maxCompression = 0;
		maxDroop = 0;
		numberPhysicalWheels = 0;
		model = "\USCG_Basket\basket";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "";
		DLC = "";
		simulation = "TankX";
		faction = "USCG";
		destrType = "DestructNo";
		explosionEffect = "";
		fuelExplosionPower = 0;
		editorForceEmpty = 1;
		explosionShielding = 0;
		hullDamageCauseExplosion = 0;
		crewVulnerable = 1;
		crewExplosionProtection = 0;
		irTarget = 0;
		allowTabLock = 0;
		autocenter = 1;
		preciseGetInOut = 1;
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1"};
		transportSoldier = 1;
		typicalCargo[] = {};
		textureList[] = {};
		class AnimationSources {};
		class Components {};
		class DestructionEffects {};
		class TextureSources {};
		class Turrets {};
	};
};