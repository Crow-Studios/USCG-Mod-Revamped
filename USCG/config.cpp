class CfgPatches
{
	class USCG
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F", "cba_settings"};
	};
};

class CfgFunctions
{
	class USCG_mod
	{
		class functions
		{

		// functions
			class aceInit 
			{
				file="\USCG\functions\fn_aceInit.sqf";
				postInit=1;
			};
		// functions
			class cbaInit 
			{
				file="\USCG\functions\fn_cbaInit.sqf";
				postInit=1;
			};
		// functions
			class deleteHook
			{
				file="\USCG\functions\fn_deleteHook.sqf";
				postInit=0;
			};
		// functions
			class client_addItemActions
			{
				file="\USCG\functions\fn_client_addItemActions.sqf";
				postInit=0;
			};
		// functions
			class client_itemActions 
			{
				file="\USCG\functions\fn_client_itemActions.sqf";
				postInit=0;
			};
		// functions
			class getDataReadings 
			{
				file="\USCG\functions\fn_getDataReadings.sqf";
				postInit=0;
			};
		// functions
			class handleDialog 
			{
				file="\USCG\functions\fn_handleDialog.sqf";
				postInit=0;
			};
		// functions
			class handleRopeDetach 
			{
				file="\USCG\functions\fn_handleRopeDetach.sqf";
				postInit=0;
			};
		// functions
			class moveInAllOccupants 
			{
				file="\USCG\functions\fn_moveInAllOccupants.sqf";
				postInit=0;
			};
		// functions
			class treatStretcherPatient 
			{
				file="\USCG\functions\fn_treatStretcherPatient.sqf";
				postInit=0;
			};
		// ace
			class ace_attachStretcher 
			{
				file="\USCG\functions\ace\fn_ace_attachStretcher.sqf";
				postInit=0;
			};
		// ace
			class ace_detachStretcher 
			{
				file="\USCG\functions\ace\fn_ace_detachStretcher.sqf";
				postInit=0;
			};
		// cba
			class cba_attachStretcher 
			{
				file="\USCG\functions\cba\fn_cba_attachStretcher.sqf";
				postInit=0;
			};
		// cba
			class cba_attachBasket
			{
				file="\USCG\functions\cba\fn_cba_attachBasket.sqf";
				postInit=0;
			};
		// ace
			class ace_loadStretcher 
			{
				file="\USCG\functions\ace\fn_ace_loadStretcher.sqf";
				postInit=0;
			};
		// ace
			class ace_makeCarryable 
			{
				file="\USCG\functions\ace\fn_ace_makeCarryable.sqf";
				postInit=0;
			};
		// ace
			class ace_treatPatientOnStretcher 
			{
				file="\USCG\functions\ace\fn_ace_treatPatientOnStretcher.sqf";
				postInit=0;
			};
		// ace
			class ace_unloadStretcher 
			{
				file="\USCG\functions\ace\fn_ace_unloadStretcher.sqf";
				postInit=0;
			};
		// equipment
			class attachStretcher 
			{
				file="\USCG\functions\equipment\fn_attachStretcher.sqf";
				postInit=0;
			};
		// equipment
			class basketDeployed 
			{
				file="\USCG\functions\equipment\fn_basketDeployed.sqf";
				postInit=0;
			};
		// equipment
			class canMoveToHoist 
			{
				file="\USCG\functions\equipment\fn_canMoveToHoist.sqf";
				postInit=0;
			};
		// equipment
			class deployBasket 
			{
				file="\USCG\functions\equipment\fn_deployBasket.sqf";
				postInit=0;
			};
		// equipment
			class deployHook 
			{
				file="\USCG\functions\equipment\fn_deployHook.sqf";
				postInit=0;
			};
		// equipment
			class deployStretcher 
			{
				file="\USCG\functions\equipment\fn_deployStretcher.sqf";
				postInit=0;
			};
		// equipment
			class detachStretcher 
			{
				file="\USCG\functions\equipment\fn_detachStretcher.sqf";
				postInit=0;
			};
		// equipment
			class getRopeLength 
			{
				file="\USCG\functions\equipment\fn_getRopeLength.sqf";
				postInit=0;
			};
		// equipment
			class hookDeployed 
			{
				file="\USCG\functions\equipment\fn_hookDeployed.sqf";
				postInit=0;
			};
		// equipment
			class loadStretcher 
			{
				file="\USCG\functions\equipment\fn_loadStretcher.sqf";
				postInit=0;
			};
		// equipment
			class moveToHelicopter 
			{
				file="\USCG\functions\equipment\fn_moveToHelicopter.sqf";
				postInit=0;
			};
		// equipment
			class moveToHoist 
			{
				file="\USCG\functions\equipment\fn_moveToHoist.sqf";
				postInit=0;
			};
		// equipment
			class onStretcherEnter 
			{
				file="\USCG\functions\equipment\fn_onStretcherEnter.sqf";
				postInit=0;
			};
		// equipment
			class setRopeLength 
			{
				file="\USCG\functions\equipment\fn_setRopeLength.sqf";
				postInit=0;
			};
		// equipment
			class spawnHoistMenu 
			{
				file="\USCG\functions\equipment\fn_spawnHoistMenu.sqf";
				postInit=0;
			};
		// equipment
			class stretcherDeployed 
			{
				file="\USCG\functions\equipment\fn_stretcherDeployed.sqf";
				postInit=0;
			};
		// equipment
			class unfoldStretcher 
			{
				file="\USCG\functions\equipment\fn_unfoldStretcher.sqf";
				postInit=0;
			};
		// equipment
			class unloadStretcher 
			{
				file="\USCG\functions\equipment\fn_unloadStretcher.sqf";
				postInit=0;
			};
		// hatchet
			class debugStuff
			{
				file="\USCG\functions\hatchet\fn_debugStuff.sqf";
				postInit=0;
			};
			
		};
	};
};

/*
class Extended_Init_EventHandlers {
    class vtx_H60_base {
		class uscg_h60_init {
			init = "hook = objNull; publicVariable 'hook'";
		};
    };
};
*/ // Incase you didn't notice, I only work on this mod in particular when i'm sleep deprived. I do not know why!

class cfgVehicles 
{
	class Heli_Transport_01_base_F;
	class vtx_H60_base : Heli_Transport_01_base_F
	{
		class vxf_copilot
		{
			class interaction 
			{
				class readDataCoPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "[vehicle player] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {-0.730867,5.09079,-0.491695};
					label = "Read Hoist Data";
					radius = 0.2;
					buttonDown = "[] call uscg_mod_fnc_getDataReadings";
				};
				class transferBasketHelicopter
				{
					condition = "ropeLength (ropes vehicle player select 0) <= 3";
					positionType = "coordinates";
					position[] = {-0.0472,4.88146,-0.613526};
					label = "Move Hoist Crew - Helicopter";
					radius = 0.1;
					buttonDown = "[vehicle player] spawn uscg_mod_fnc_moveInAllOccupants";
				};
			};
		};
		class vxf_driver
		{
			class interaction
			{
				class transferBasketHelicopter
				{
					condition = "ropeLength (ropes vehicle player select 0) <= 3";
					positionType = "coordinates";
					position[] = {-0.0472,4.88146,-0.613526};
					label = "Move Hoist Crew - Helicopter";
					radius = 0.1;
					buttonDown = "[vehicle player] spawn uscg_mod_fnc_moveInAllOccupants";
				};
				class setLengthPilot
				{
					condition = "[vehicle player] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {0.719166,5.09165,-0.493864};
					label = "Set Rope Length";
					radius = 0.2;
					buttonDown = " createDialog 'uscg_RopeMeter' ";
				};
				class readDataPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "[vehicle player] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {0.720362,5.1483,-0.357264};
					label = "Read Rescue Hoist Data";
					radius = 0.2;
					buttonDown = "[player] call uscg_mod_fnc_getDataReadings";
				};
			};
		};
		class vxf_cargo
		{
			class interaction
			{
				/*
				class deployHookWithStretcher
				{
					condition = "!([vehicle player] call uscg_mod_fnc_hookDeployed)";
					positionType = "coordinates";
					position[] = {1,2.03228,0.269152};
					label = "Deploy Hoist + Stretcher";
					radius = 0.2;
					buttonDown = "[vehicle player] call uscg_mod_fnc_deployStretcher";
				};
				*/
				class deployHook
				{
					condition = "!([vehicle player] call uscg_mod_fnc_hookDeployed)";
					positionType = "coordinates";
					position[] = {1.3946,2.03228,0.269152};
					label = "Deploy Hoist";
					radius = 0.2;
					buttonDown = "[vehicle player] call uscg_mod_fnc_deployHook";
				};
				class getOutDiver
				{
					condition = "";
					positionType = "coordinates";
					position[] = {-1.08656,1.74033,-1.22008};
					label = "Jump Into Water";
					radius = 0.3;
					buttonDown = "[] call uscg_mod_fnc_handleEject, player action ['Eject', vehicle player];";
				};
				class undeployHook
				{
					condition = "[vehicle player] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {1.3946,2.03228,0.269152};
					//position[] = {1.43148,2.02815,0.46699};
					label = "Retrieve Hoist";
					radius = 0.3;
					buttonDown = "[hook, (vehicle player)] call uscg_mod_fnc_deleteHook";
				};
				class changeRopeLength
				{
					condition = "[vehicle player] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {1.04544,2.62412,-0.248061};
					label = "Set Rope Length";
					radius = 0.1;
					buttonDown = " createDialog 'uscg_RopeMeter' ";
				};
				class transferToBasket
				{
					condition = "[vehicle player] call uscg_mod_fnc_canMoveToHoist";
					positionType = "coordinates";
					position[] = {1.66, 1.585,-0.3};
					label = "Move Onto Hoist";
					radius = 0.1;
					buttonDown = "[player] call uscg_mod_fnc_moveToHoist";
				};
				/*
				class pickRescueEquipment
				{
					clickSound = "vxf_Switch_Sound";
					condition = "!([hook] call uscg_mod_fnc_hookDeployed)";
					positionType = "coordinates";
					position[] = {1.04227,2.76631,-0.246649};
					label = "Choose Rescue Equipment";
					radius = 0.1;
					buttonDown = "[] call uscg_mod_fnc_spawnHoistMenu";
				};
				*/
			};
		};
	};
};
