class CfgPatches
{
	class USCG_Vehicle_H60
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "USCG_Common"};
	};
};

#include "\USCG_Vehicle_H60\configs\cfgRescueVehicles.hpp"

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
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {-0.730867,5.09079,-0.491695};
					label = "Read Hoist Data";
					radius = 0.2;
					buttonDown = "[] call uscg_mod_fnc_getDataReadings";
				};
				class transferBasketHelicopter
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {-0.0472,4.88146,-0.613526};
					label = "Move Hoist Crew - Helicopter";
					radius = 0.1;
					buttonDown = "[vxf_vehicle] spawn uscg_mod_fnc_moveInAllOccupants";
				};
			};
		};
		class vxf_driver
		{
			class interaction
			{
				class transferBasketHelicopter
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {-0.0472,4.88146,-0.613526};
					label = "Move Hoist Crew - Helicopter";
					radius = 0.1;
					buttonDown = "[vxf_vehicle] spawn uscg_mod_fnc_moveInAllOccupants";
				};
				class setLengthPilot
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {0.719166,5.09165,-0.493864};
					label = "Set Rope Length";
					radius = 0.2;
					buttonDown = " createDialog 'uscg_RopeMeter' ";
				};
				class readDataPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
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
					condition = "!([vxf_vehicle] call uscg_mod_fnc_hookDeployed)";
					positionType = "coordinates";
					position[] = {1,2.03228,0.269152};
					label = "Deploy Hoist + Stretcher";
					radius = 0.2;
					buttonDown = "[vxf_vehicle] call uscg_mod_fnc_deployStretcher";
				};
				*/
				class deployHook
				{
					condition = "!([vxf_vehicle] call uscg_mod_fnc_hookDeployed)";
					positionType = "coordinates";
					position[] = {1.3946,2.03228,0.269152};
					label = "Deploy Hoist";
					radius = 0.2;
					buttonDown = "[vxf_vehicle] call uscg_mod_fnc_deployHook";
				};
				class getOutDiver
				{
					condition = "";
					positionType = "coordinates";
					position[] = {-1.08656,1.74033,-1.22008};
					label = "Jump Into Water";
					radius = 0.3;
					buttonDown = "[] call uscg_mod_fnc_handleEject, player action ['Eject', vxf_vehicle];";
				};
				class undeployHook
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {1.3946,2.03228,0.269152};
					//position[] = {1.43148,2.02815,0.46699};
					label = "Retrieve Hoist";
					radius = 0.3;
					buttonDown = "[hook, vxf_vehicle] call uscg_mod_fnc_deleteHook";
				};
				class changeRopeLength
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {1.04544,2.62412,-0.248061};
					label = "Set Rope Length";
					radius = 0.1;
					buttonDown = " createDialog 'uscg_RopeMeter' ";
				};
				class transferToBasket
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_canMoveToHoist";
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
