class CfgPatches
{
	class USCG_Stretcher
	{
		units[] = {"USCG_Stretcher", "USCG_Stokes_Basket"};
		weapons[] = {"USCG_Stretcher_Item"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "USCG_Common"};
	};
};

#define AUTHOR "USCG Dev Team"

class CBA_Extended_EventHandlers;

class CfgMovesBasic 
{
	class DefaultDie;
	class ManActions
	{
		uscg_vehicleanim_stretcher = "uscg_vehicleanim_stretcher";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "cfgGesturesMale";
	class States
	{
		class Crew;
		
		class uscg_anim_stretcher: Crew 
		{
			file = "USCG_Stretcher\anim\anim_stretcher.rtm";
			speed = -1e+010;
			looped = "true";
			interpolateFrom[] = {};
			interpolateTo[] = {};
			canPullTrigger = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 1;
			weaponIK = 0;
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
            canReload = 0;				
		};
		class uscg_vehicleanim_stretcher: Crew 
		{
			file = "USCG_Stretcher\anim\anim_stretcher.rtm";
		};
	};
};

class Extended_Init_EventHandlers {
    class USCG_Stretcher {
		class uscg_stretcher_init {
			init = "[(_this select 0)] call uscg_mod_fnc_onStretcherEnter; (_this select 0) setVariable [""ace_medical_medicClass"", 1]";
		};
    };
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class USCG_Stretcher_Item: CBA_MiscItem
	{
		displayName = "Stokes Basket";
		scope=2;
		author=AUTHOR;
		picture = "\USCG_Stretcher\UI\stokes_basket_ca.paa";
		model = "\A3\Props_F_Orange\Humanitarian\Camps\Stretcher_01_folded_F.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Deploy this using the ace menu, or if in a vehicle by double clicking on this item.";
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
  	class Man;
  	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class USCG_UnfoldStretcher {
					displayName = "Unpack Stokes Basket";
					condition = "'USCG_Stretcher_Item' in items _player";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					statement = "[_player, 'USCG_Stokes_Basket', 'USCG_Stretcher_Item'] call uscg_mod_fnc_unfoldStretcher";
					showDisabled = 0;
					icon = "USCG_Stretcher\UI\stretcher_ca.paa";
				};
			};
    	};
	};

	class Tank_F;
	class USCG_Stretcher_Base : Tank_F
	{
		author=AUTHOR;
	};
	
	class USCG_Stretcher: USCG_Stretcher_Base 
	{
		class ACE_SelfActions {};
		_generalMacro = "USCG_Stretcher";
		armor = 1000000;
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"uscg_vehicleanim_stretcher"};
		ejectDeadCargo = 0;
		cargoProxyIndexes[] = {1};
		editorSubcategory = "EdSubcat_Military";
		cost = 0;
		displayName = "Stretcher";
		hasDriver = 0;
		hasGunner = 0;
		hasCommander = 0;
		picture = "\USCG_Stretcher\UI\stretcher_ca.paa";
		icon = "\USCG_Stretcher\UI\stretcher_ca.paa";
		editorPreview = "\USCG_Stretcher\UI\stretcher_ca.paa";
		mapSize = 2;
		mass = 15;
		maximumLoad = 0;
		tf_isolatedAmount = 0;
		maxCompression = 0;
		maxDroop = 0;
		numberPhysicalWheels = 0;
		model = "\USCG_Stretcher\stretcherv3";
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
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		transportSoldier = 1;
		typicalCargo[] = {};
		textureList[] = {};
		class AnimationSources {};
		class Components {};
		class DestructionEffects {};
		class TextureSources {};
		class Turrets {};
	};

	class USCG_Stokes_Basket : USCG_Stretcher
	{
		displayName = "Stokes Basket";
		model = "\USCG_Stretcher\stretcherv4";
		picture = "\USCG_Stretcher\UI\stokes_basket_ca.paa";
		icon = "\USCG_Stretcher\UI\stokes_basket_ca.paa";
		editorPreview = "\USCG_Stretcher\UI\stokes_basket_ca.paa";
		mass = 11;
	};
};