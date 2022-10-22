class CfgPatches
{
	class USCG_Stretcher
	{
		units[] = {"USCG_Stretcher"};
		weapons[] = {"USCG_Stretcher_Item"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Boat_F"};
	};
};

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

//External Ref from CBA XEH:
class CBA_Extended_EventHandlers;

class Extended_Init_EventHandlers {
    class USCG_Stretcher {
		class uscg_stretcher_init {
			init = "[(_this select 0)] call uscg_mod_fnc_onStretcherEnter";
		};
    };
};

class cfgVehicles 
{
	/*
	class Boat_F;
	class B_Boat_Transport_01_F;
	class Rubber_duck_base_F;
	class USCG_Stretcher: Rubber_duck_base_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_carryDirection = 90;
		ace_dragging_carryPosition[] = {0,1,0};
		ace_dragging_dragDirection = 90;
		ace_dragging_dragPosition[] = {0,1,0};
		faction = "USCG";
		displayName = "Stretcher";
		model = "\USCG_Stretcher\stretcherv3";
		picture = "\USCG_Stretcher\UI\stretcher_ca.paa";
		Icon = "\USCG_Stretcher\UI\stretcher_ca.paa";
		airCapacity = 0;
		hasCommander = 0;
		hasDriver = 0;
		hasGunner = 0;
		cargoAction[] = {"uscg_vehicleanim_stretcher"}; /// the same of all the crew
		getInAction 		= ""; 		/// how does driver look while getting in
		getOutAction 		= ""; 		/// and out
		cargoGetInAction[] 	= {""}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {""}; 	/// that means all use the same in this case
		destrType = "DestructNo";
		transportSoldier = 1; /// number of cargo except driver
		ejectDeadDriver = true;			/// use this if you don't have proper dead pose for the driver, it will eject him from boat if he dies
		simulation = "TankX";
		maxSpeed = 75;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4", "SlingLoadCargo5"};
	};
	*/
  	class Man;
  	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class USCG_UnfoldStretcher {
					displayName = "Unfold USCG Stretcher";
					condition = "'USCG_Backpack_Rescue_Pack' in backpack _player && _player getVariable ['canUnfoldStretcher',true]";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					statement = "[_player, 'USCG_Stretcher', 'USCG_Stretcher_Item'] call uscg_mod_fnc_unfoldStretcher";
					showDisabled = 0;
					icon = "USCG_Stretcher\UI\stretcher_ca.paa";
				};
			};
    	};
	};

	class Tank_F;
	class USCG_Stretcher: Tank_F 
	{
		class ACE_SelfActions {};
		_generalMacro = "USCG_Stretcher";
		ace_refuel_canReceive = 0;
		ace_cargo_space = 0;
		ace_cargo_hasCargo = 0;
		ace_cookoff_probability = 0;
		armor = 1000000;
		author = "Silence/Zelo";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"uscg_vehicleanim_stretcher"}; //"passenger_injured_medevac_truck01","passenger_injured_medevac_truck02","passenger_injured_medevac_truck03"
		ejectDeadCargo = 0;
		cargoProxyIndexes[] = {1};
		//editorCategory = "EdCat_Things";
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
		mass = 200;
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

	class vtx_stretcher_item; // requires hatchet h60 pack (the helicopters)
	class USCG_Stretcher_Item : vtx_stretcher_item
	{
		author = "Silence";
		displayName = "Stretcher (USCG)";
		class TransportItems {
			class _xx_uscg_stretcher_item {
				count = 1;
				name = "uscg_stretcher_item";
			};
		};
	};
};