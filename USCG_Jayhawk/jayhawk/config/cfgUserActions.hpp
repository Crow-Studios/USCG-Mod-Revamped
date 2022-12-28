		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "Open Side Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 1.5; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this doorPhase ""door_RB"" < 0.5 && !(this getCargoIndex player == -1) && !(hasHatchet)"; // only show if the door is closed and player isn't a pilot, and doesn't have hatchet loaded
				statement = "[this] call uscg_jayhawk_fnc_sideDoor";
			};
			class OpenCargoDoorOutside
			{
				displayName = "Open Side Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 2; // A too small radius might cause the action to not be visible
				position = "pos cargo";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this doorPhase ""door_RB"" < 0.5"; 
				statement = "[this] call uscg_jayhawk_fnc_sideDoor";
			};
			class CloseCargoDoor
			{
				displayName = "Close Side Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 1.5; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this doorPhase ""door_RB"" > 0.5 && !(this getCargoIndex player == -1) && !(hasHatchet)";
				statement = "[this] call uscg_jayhawk_fnc_sideDoor";
			};
			class CloseCargoDoorOutside
			{
				displayName = "Close Side Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 2; // A too small radius might cause the action to not be visible
				position = "pos cargo";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this doorPhase ""door_RB"" > 0.5";
				statement = "[this] call uscg_jayhawk_fnc_sideDoor";
			};
			class ClosePilotDoor
			{
				displayName = "Close Pilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 1.5; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""Pilot_Door"" > 0.9 && (this getCargoIndex player == -1) && !(hasHatchet)";
				statement = " ['pilot_door', this] call uscg_jayhawk_fnc_closeDoor, [this, true] remoteExec [""lockDriver""] ";
			};
			class OpenPilotDoor
			{
				displayName = "Open Pilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 1.5; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""Pilot_Door"" < 0.9 && (this getCargoIndex player == -1) && !(hasHatchet)";
				statement = " ['pilot_door', this] call uscg_jayhawk_fnc_openDoor, [this, false] remoteExec [""lockDriver""] ";
			};
			class ClosePilotDoorOutside
			{
				displayName = "Close Pilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 2.2; // A too small radius might cause the action to not be visible
				position = "pos driver";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""Pilot_Door"" > 0.9";
				statement = " ['pilot_door', this] call uscg_jayhawk_fnc_closeDoor, [this, true] remoteExec [""lockDriver""] ";
			};
			class OpenPilotDoorOutside
			{
				displayName = "Open Pilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 2.2; // A too small radius might cause the action to not be visible
				position = "pos driver";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""Pilot_Door"" < 0.9"; 
				statement = " ['pilot_door', this] call uscg_jayhawk_fnc_openDoor, [this, false] remoteExec [""lockDriver""] ";
			};
			class CloseCoPilotDoor
			{
				displayName = "Close CoPilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 1.5; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""CoPilot_Door"" > 0.9 && (this getCargoIndex player == -1) && !(hasHatchet)"; 
				statement = " ['copilot_door', this] call uscg_jayhawk_fnc_closeDoor, [this, [[0], true]] remoteExec [""lockTurret""] ";
			};
			class OpenCoPilotDoor
			{
				displayName = "Open CoPilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 1.5; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""CoPilot_Door"" < 0.9 && (this getCargoIndex player == -1) && !(hasHatchet)"; 
				statement = " ['copilot_door', this] call uscg_jayhawk_fnc_openDoor, [this, [[0], false]] remoteExec [""lockTurret""] ";
			};
			class CloseCoPilotDoorOutside
			{
				displayName = "Close CoPilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 2.2; // A too small radius might cause the action to not be visible
				position = "pos codriver";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""CoPilot_Door"" > 0.9"; 
				statement = " ['copilot_door', this] call uscg_jayhawk_fnc_closeDoor, [this, [[0], true]] remoteExec [""lockTurret""]; ";
			};
			class OpenCoPilotDoorOutside
			{
				displayName = "Open CoPilot Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				priority = 1.5;
				radius = 2.2; // A too small radius might cause the action to not be visible
				position = "pos codriver";
				showWindow = 0;
				hideOnUse = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this animationPhase ""CoPilot_Door"" < 0.9";
				statement = " ['copilot_door', this] call uscg_jayhawk_fnc_openDoor, [this, [[0], false]] remoteExec [""lockTurret""] ";
			};
		};