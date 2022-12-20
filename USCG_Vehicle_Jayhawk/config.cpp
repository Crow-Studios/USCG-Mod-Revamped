class CfgPatches
{
	class USCG_Jayhawk_Hatchet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "USCG_Common"};
	};
};

#include "\USCG_Vehicle_Jayhawk\configs\cfgRescueVehicles.hpp"

class cfgVehicles 
{
	class B_Heli_Transport_01_F;
	class Helicopter_Medium_Base : B_Heli_Transport_01_F
	{
		class vxf_copilot
		{
			class interaction 
			{
				class readDataCoPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "hasDeployedHook";
					positionType = "coordinates";
					position[] = {-0.0120684,5.23913,-1.05607};
					label = "Read Hoist Data";
					radius = 0.2;
					buttonDown = "[player] call uscg_mod_fnc_getDataReadings";
				};
				class transferBasketHelicopter
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {0.0136251,4.71973,-1.14};
					label = "Move Hoist Crew - Helicopter";
					radius = 0.1;
					buttonDown = "[vxf_vehicle] spawn uscg_mod_fnc_moveInAllOccupants";
				};
				class openDoorCoPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""CoPilot_Door"" < 0.9";
					positionType = "coordinates";
					position[] = {-1.02609,4.86841,-1.13349};
					label = "Open Door";
					radius = 0.2;
					buttonDown = "['copilot_door', vxf_vehicle] call uscg_jayhawk_fnc_openDoor, [vxf_vehicle, [[0], false]] remoteExec [""lockTurret""]";
				};
				class closeDoorCoPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""CoPilot_Door"" > 0.9";
					positionType = "coordinates";
					position[] = {-1.45678,5.27944,-1.13264};
					label = "Close Door";
					radius = 0.2;
					buttonDown = "['copilot_door', vxf_vehicle] call uscg_jayhawk_fnc_closeDoor, [vxf_vehicle, [[0], true]] remoteExec [""lockTurret""]";
				};
				class openDoorPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""Pilot_Door"" < 0.9";
					positionType = "coordinates";
					position[] = {1.04996,4.87261,-1.131};
					label = "Open Door";
					radius = 0.2;
					buttonDown = "['pilot_door', vxf_vehicle] call uscg_jayhawk_fnc_openDoor, [vxf_vehicle, false] remoteExec [""lockDriver""]";
				};
				class closeDoorPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""Pilot_Door"" > 0.9";
					positionType = "coordinates";
					position[] = {1.53369,5.26205,-1.13927};
					label = "Close Door";
					radius = 0.2;
					buttonDown = "['pilot_door', vxf_vehicle] call uscg_jayhawk_fnc_closeDoor, [vxf_vehicle, true] remoteExec [""lockDriver""]";
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
					position[] = {0.0136251,4.71973,-1.14};
					label = "Move Hoist Crew - Helicopter";
					radius = 0.1;
					buttonDown = "[vxf_vehicle] spawn uscg_mod_fnc_moveInAllOccupants";
				};
				class setLengthPilot
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {0.733901,5.28162,-0.954426};
					label = "Set Rope Length";
					radius = 0.2;
					buttonDown = " createDialog 'uscg_RopeMeter' ";
				};
				class readDataPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "coordinates";
					position[] = {-0.0120684,5.23913,-1.05607};
					label = "Read Rescue Hoist Data";
					radius = 0.2;
					buttonDown = "[player] call uscg_mod_fnc_getDataReadings";
				};
				class openDoorPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""Pilot_Door"" < 0.9";
					positionType = "coordinates";
					position[] = {1.04996,4.87261,-1.131};
					label = "Open Door";
					radius = 0.2;
					buttonDown = "['pilot_door', vxf_vehicle] call uscg_jayhawk_fnc_openDoor, [vxf_vehicle, false] remoteExec [""lockDriver""]";
				};
				class closeDoorPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""Pilot_Door"" > 0.9";
					positionType = "coordinates";
					position[] = {1.53369,5.26205,-1.13927};
					label = "Close Door";
					radius = 0.2;
					buttonDown = "['pilot_door', vxf_vehicle] call uscg_jayhawk_fnc_closeDoor, [vxf_vehicle, true] remoteExec [""lockDriver""]";
				};
				class openDoorCoPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""CoPilot_Door"" < 0.9";
					positionType = "coordinates";
					position[] = {-1.02609,4.86841,-1.13349};
					label = "Open Door";
					radius = 0.2;
					buttonDown = "['copilot_door', vxf_vehicle] call uscg_jayhawk_fnc_openDoor, [vxf_vehicle, [[0], false]] remoteExec [""lockTurret""]";
				};
				class closeDoorCoPilot
				{
					clickSound = "vxf_Switch_Sound";
					condition = "vxf_vehicle animationPhase ""CoPilot_Door"" > 0.9";
					positionType = "coordinates";
					position[] = {-1.45678,5.27944,-1.13264};
					label = "Close Door";
					radius = 0.2;
					buttonDown = "['copilot_door', vxf_vehicle] call uscg_jayhawk_fnc_closeDoor, [vxf_vehicle, [[0], true]] remoteExec [""lockTurret""]";
				};
			};
		};
		class vxf_cargo
		{
			class interaction
			{
				class getOutDiver
				{
					condition = "vxf_vehicle doorPhase ""door_RB"" > 0.5";
					positionType = "coordinates";
					position[] = {1.05919,2.73676,-0.616433};
					label = "Jump Into Water";
					radius = 0.2;
					buttonDown = "[] call uscg_mod_fnc_handleEject, player action ['Eject', vxf_vehicle];";
				};
				class Door_RB 
				{
					clickSound="";
					position="door_RB";
					positionType="anim";
					label="Side Door";
					animation="Door_RB";
					interactionCondition="!(vxf_vehicle getCargoIndex player == -1)";
					animStates[] = {0, 1};
					animLabels[] = {"Closed", "Open"};
					animEnd="";
					animStart = "[vxf_vehicle] call uscg_jayhawk_fnc_sideDoor";
					radius=0.3;
					animSpeed=1;
				};
				class transferToBasket
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_canMoveToHoist && {vxf_vehicle doorPhase ""door_RB"" > 0.5}";
					positionType = "coordinates";
					position[] = {1.08302,2.72844,-0.803451};
					label = "Move Onto Hoist";
					radius = 0.1;
					buttonDown = "[player] call uscg_mod_fnc_moveToHoist";
				};
				class deployHook
				{
					condition = "!([vxf_vehicle] call uscg_mod_fnc_hookDeployed)";
					positionType = "anim";
					position = "rope";
					label = "Deploy Hoist";
					radius = 0.1;
					buttonDown = "[vxf_vehicle] call uscg_mod_fnc_deployHook";
				};
				class undeployHook
				{
					condition = "[vxf_vehicle] call uscg_mod_fnc_hookDeployed";
					positionType = "anim";
					position = "rope";
					label = "Retrieve Hoist";
					radius = 0.3;
					buttonDown = "[hook, vxf_vehicle] call uscg_mod_fnc_deleteHook";
				};
			};
		};
	};
};