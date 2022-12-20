class CfgPatches
{
	class USCG_Jayhawk_F
	{
		units[]={
			"USCG_Jayhawk", 
			"USCG_Jayhawk_Empty", 
			"USCG_Jayhawk_Folded"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Air_F",
			"USCG_Common"
		};
		requiredVersion=0.40000001;
	};
};

class Extended_Init_EventHandlers {
    class Helicopter_Medium_Base {
		class uscg_hh60j_init {
			init = "_vehicle = _this select 0; [_vehicle, true, true, false] call uscg_jayhawk_fnc_jayhawkInit ";
		};
    };
};

class CfgAnimationSourceSounds
{
	class Jayhawk_OpenClose
	{
		class Door_Open
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.01,0.02])";
			sound0[]=
			{
				"\USCG_Jayhawk\jayhawk\Sounds\Jayhawk_Open.ogg",
				"db+28",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class Door_Close
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.1,0.09])";
			sound0[]=
			{
				"\USCG_Jayhawk\jayhawk\Sounds\Jayhawk_Close.ogg",
				"db+34",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RCWSOptics;
class AnimationSources;
class CfgVehicles
{
	class PlaneWreck;
	class C_Plane_Civil_01_F;
	class C_Heli_Light_01_civil_F;
	//class B_Heli_Transport_01_F;
	class Helicopter_Base_H;
	class Helicopter_Medium_Base: Helicopter_Base_H
	{
		class Sounds;
		class SoundsExt;
		class Turrets;
		scope = 1;
		class AnimationSources: AnimationSources
		{
			class Light
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Proxy
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Head_Lights: Common {};
			class High_Beam: Common {};
			class Spotlight: Common {};
			class Lightbar: Common {};
			class Collision_Lights: Common {};
			class Cockpit_Lights: Common {};
			class Fair_Available: Common {};
			class Hitched: Common
			{
				animPeriod=1;
			};
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class Spotlight_Spin
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Spotlight_Lift: Spotlight_Spin {};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint="HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint="HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint="HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint="HitGlass10";
			};
			class HitRGlass: HitGlass1
			{
				hitpoint="HitRGlass";
			};
			class HitLGlass: HitGlass1
			{
				hitpoint="HitLGlass";
			};
			class DoorL
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DoorR
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.40000001;
				sound="Jayhawk_OpenClose";
				soundPosition="Door_LF_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="Door_RF_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition="Door_LB_axis";
			};
			class Door_LB2: Door_LF
			{
				soundPosition="Door_LB2_axis";
			};
			class Door_LB3: Door_LF
			{
				soundPosition="Door_LB3_axis";
			};
			class Door_LB4: Door_LF
			{
				soundPosition="Door_LB4_axis";
			};
			class Door_LB5: Door_LF
			{
				soundPosition="Door_LB5_axis";
			};
			class Door_LB6: Door_LF
			{
				soundPosition="Door_LB6_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition="Door_RB_axis";
			};
			class Door_RB2: Door_LF
			{
				soundPosition="Door_RB2_axis";
			};
			class Door_RB3: Door_LF
			{
				soundPosition="Door_RB3_axis";
			};
			class Door_RB4: Door_LF
			{
				soundPosition="Door_RB4_axis";
			};
			class Door_RB5: Door_LF
			{
				soundPosition="Door_RB5_axis";
			};
			class Door_RB6: Door_LF
			{
				soundPosition="Door_RB6_axis";
			};
			class Door_Pilot: Door_LF
			{
				soundPosition="Door_Pilot_axis";
			};
			class Door_CoPilot: Door_LF
			{
				soundPosition="Door_CoPilot_axis";
			};
			class Door_Cargo1: Door_LF
			{
				soundPosition="Door_Cargo1_axis";
			};
			class Door_Cargo2: Door_LF
			{
				soundPosition="Door_Cargo2_axis";
			};
			class Door_Cargo3: Door_LF
			{
				soundPosition="Door_Cargo3_axis";
			};
			class Door_Cargo4: Door_LF
			{
				soundPosition="Door_Cargo4_axis";
			};
			class Door_Cargo5: Door_LF
			{
				soundPosition="Door_Cargo5_axis";
			};
			class Trunk: Door_LF
			{
				soundPosition="Trunk_axis";
				animPeriod=1;
				source="user";
			};
			class Cargo_Door
			{
				source="user";
				animPeriod=1;
				sound="Jayhawk_OpenClose";
				soundPosition="";
			};
			class Cargo_Door_1: Cargo_Door
			{
				soundPosition="Cargo_Door_1_axis";
			};
			class Cargo_Door_2: Cargo_Door
			{
				soundPosition="Cargo_Door_2_axis";
			};
			class Cargo_Door_3: Cargo_Door
			{
				soundPosition="Cargo_Door_3_axis";
			};
			class Cargo_Door_4: Cargo_Door
			{
				soundPosition="Cargo_Door_4_axis";
			};
			class Cargo_Door_5: Cargo_Door
			{
				soundPosition="Cargo_Door_5_axis";
			};
			class Cargo_Door_6: Cargo_Door
			{
				soundPosition="Cargo_Door_6_axis";
			};
			class Cargo_Door_7: Cargo_Door
			{
				soundPosition="Cargo_Door_7_axis";
			};
			class Cargo_Door_8: Cargo_Door
			{
				soundPosition="Cargo_Door_8_axis";
			};
			class Cargo_Door_9: Cargo_Door
			{
				soundPosition="Cargo_Door_9_axis";
			};
			class Cargo_Door_10: Cargo_Door
			{
				soundPosition="Cargo_Door_10_axis";
			};
			class Cargo_Door_11: Cargo_Door
			{
				soundPosition="Cargo_Door_11_axis";
			};
			class Cargo_Door_12: Cargo_Door
			{
				soundPosition="Cargo_Door_12_axis";
			};
			class Cargo_Door_13: Cargo_Door
			{
				soundPosition="Cargo_Door_13_axis";
			};
			class Cargo_Door_14: Cargo_Door
			{
				soundPosition="Cargo_Door_14_axis";
			};
			class Cargo_Door_15: Cargo_Door
			{
				soundPosition="Cargo_Door_15_axis";
			};
			class Cargo_Door_16: Cargo_Door
			{
				soundPosition="Cargo_Door_16_axis";
			};
			class Cargo_Door_17: Cargo_Door
			{
				soundPosition="Cargo_Door_17_axis";
			};
			class Cargo_Door_18: Cargo_Door
			{
				soundPosition="Cargo_Door_18_axis";
			};
			class Cargo_Door_19: Cargo_Door
			{
				soundPosition="Cargo_Door_19_axis";
			};
			class Cargo_Door_20: Cargo_Door
			{
				soundPosition="Cargo_Door_20_axis";
			};
			class Outriggers
			{
				source="user";
				animPeriod=5;
				sound="";
				soundPosition="";
			};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight="Solid_White1";
			};
			class Solid_Green1: Solid_Red1
			{
				markerLight="Solid_Green1";
			};
			class Blinking_Red1: Solid_Red1
			{
				markerLight="Blinking_Red1";
			};
			class Blinking_Red2: Solid_Red1
			{
				markerLight="Blinking_Red2";
			};
			class Interior_Light: Solid_Red1
			{
				markerLight="Interior_Light";
			};
			class RedStill: Solid_Red1
			{
				markerLight="RedStill";
			};
			class RedStill_2: Solid_Red1
			{
				markerLight="RedStill_2";
			};
			class GreenStill: Solid_Red1
			{
				markerLight="GreenStill";
			};
			class GreenStill_2: Solid_Red1
			{
				markerLight="GreenStill_2";
			};
			class WhiteBlinking: Solid_Red1
			{
				markerLight="WhiteBlinking";
			};
			class WhiteBlinking_2: Solid_Red1
			{
				markerLight="WhiteBlinking_2";
			};
			class WhiteStill: Solid_Red1
			{
				markerLight="WhiteStill";
			};
			class RedBlinking: Solid_Red1
			{
				markerLight="RedBlinking";
			};
			class fold
			{
				source="user";
				animperiod=0.5;
				initPhase=0.5;
			};
			class Jayhawk_Fold
			{
				source="user";
				animperiod=25;
				initPhase=0;
			};
			class battery: fold
			{
				initPhase=0;
			};
			class gen1: fold {};
			class gen2: gen1 {};
			class gen3: gen1 {};
			class ecs: fold {};
			class fuelpump: fold {};
			class ignition: fold {};
			class apucontrol: fold {};
			class windshield
			{
				source="user";
				animperiod=0.5;
				initPhase=0;
			};
			class RotorManual
			{
				source="user";
				animperiod=8;
				initPhase=0;
			};
			class wingbackmiddle
			{
				source="user";
				animperiod=6;
				initPhase=1;
			};
			class wingbackleft: wingbackmiddle
			{
				animperiod=5;
			};
			class wingbackright: wingbackmiddle
			{
				animperiod=5;
			};
			class blade1
			{
				source="user";
				animperiod=4;
				initPhase=1;
			};
			class blade2: blade1 {};
			class blade3: blade1 {};
			class blade4: blade1 {};
			class ctail
			{
				source="user";
				animperiod=5;
				initPhase=1;
			};
			class door1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class door2: door1 {};
			class door3: door1 {};
		};
		ejectDamageLimit=0.75;
		ejectSpeed[]={900,900,900};
	};
	class USCG_Jayhawk: Helicopter_Medium_Base
	{
		author = "USCG AIO Dev Team";
		displayname="USCG MH-60 Jayhawk";
		model="\USCG_Jayhawk\Jayhawk\USCG_Jayhawk.p3d";
		picture = "USCG_Jayhawk\jayhawk\ui\heli_medium02_ca.paa";
		icon = "USCG_Jayhawk\jayhawk\ui\heli_medium02_ca.paa";
		scope = 2;
		crew = "USCG_Unit_Rescue_Pilot";
		extCameraPosition[]={0,3,-23};
		maxSpeed=295;
		slingLoadMaxCargoMass=3584;
		faction = "USCG";
		/*
		animationList[]=
		{
			"stretcher", 0,
			"basket", 0,
			"fold", 0
		};
		*/
		#include "jayhawk\config\cfgTextureSources.hpp"
		//#include "jayhawk\config\cfgAnimationSources.hpp"
		#include "jayhawk\config\cfgUserActions.hpp"
		#include "jayhawk\config\cfgSounds.hpp"
		#include "jayhawk\config\cfgComponents.hpp"
		#include "jayhawk\config\cfgTurrets.hpp"
		#include "jayhawk\config\cfgMisc.hpp"
	};
	class USCG_Jayhawk_Empty : USCG_Jayhawk
	{
		/*
		animationList[]=
		{
			"stretcher", 1,
			"basket", 1,
			"fold", 0
		};
		*/
		displayname="USCG MH-60 Jayhawk (Empty)";
		maxSpeed=310;
		slingLoadMaxCargoMass=4284;
		mainRotorSpeed=1.2;
		backRotorSpeed=6.0999999;
	};
	/*
	class USCG_Jayhawk_Folded : USCG_Jayhawk
	{
		class EventHandlers : EventHandlers
		{
			init = "_vehicle = _this select 0; [_vehicle, false, false, true] call uscg_jayhawk_fnc_jayhawkInit ";
		};
		animationList[]=
		{
			"stretcher", 1,
			"basket", 1,
			"fold", 1
		};
		displayname="USCG MH-60 Jayhawk (Empty/Folded) WIP";
		maxSpeed=310;
		slingLoadMaxCargoMass=4284;
		mainRotorSpeed=1.2;
		backRotorSpeed=6.0999999;
	};
	*/
};

class CfgMovesBasic 
{
	class DefaultDie;
	class ManActions
	{
		jayhawk_stretcher = "jayhawk_stretcher";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "cfgGesturesMale";
	class States 
	{
		class Crew;
		
		class jayhawk_anim_stretcher: Crew 
		{
			file = "USCG_Jayhawk\jayhawk\anim\anim_stretcher.rtm";
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
		class jayhawk_stretcher: Crew 
		{
			file = "USCG_Jayhawk\jayhawk\anim\anim_stretcher.rtm";
		};				
	};
};

class CfgFunctions
{
    class USCG_Jayhawk
    {
        class functions
        {
			// pilot doors
            class openDoor
            {
                file = "USCG_Jayhawk\jayhawk\functions\fn_openDoor.sqf";
            };
            class closeDoor
            {
                file = "USCG_Jayhawk\jayhawk\functions\fn_closeDoor.sqf";
            };
			// side door
            class sideDoor
            {
                file = "USCG_Jayhawk\jayhawk\functions\fn_sideDoor.sqf";
            };
			// jayhawk initialisation
            class jayhawkInit
            {
                file = "USCG_Jayhawk\jayhawk\functions\fn_jayhawkInit.sqf";
            };
			// mod compatibility
            class modCompatibility
            {
				postInit = 1;
                file = "USCG_Jayhawk\jayhawk\functions\fn_modCompatibility.sqf";
            };
        };
    };
};