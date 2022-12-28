		class CargoTurret;
		class CopilotTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=1;
				gunnerAction="pilot_Heli_Light_03";
				gunnerInAction="pilot_Heli_Light_03";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				gunnerGetInAction="pilot_Heli_Light_01_Enter";
				//gunnerGetOutAction="GetOutHigh";
				gunnerGetOutAction="";
				selectionFireAnim="";
				preciseGetInOut=0;
				GunnerDoor="CoPilot_Door";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="back_stick";
				gunnerRightLegAnimName="pedalR";
				gunnerLeftLegAnimName="pedalL";
				proxyIndex=1;
				commanding=-1;
				body="Spotlight_Spin";
				gun="Spotlight_Lift";
				animationSourceBody="Spotlight_Spin";
				animationSourceGun="Spotlight_Lift";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="CopilotOptics";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				turretInfoType="RscOptics_UAV_gunner";
				gunnerForceOptics=0;
				startEngine=0;
				usePip=1;
				canUseScanners=1;
				minElev=-90;
				maxElev=90;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				stabilizedInAxes=3;
				class ViewOptics: RCWSOptics
				{
				};
				class Reflectors
				{
					class Cabin
					{
						color[]={20,0,0};
						ambient[]={20,0,0};
						intensity=10;
						size=1;
						innerAngle=179;
						outerAngle=180;
						coneFadeCoef=0;
						position="cabin_light";
						direction="cabin_light_dir";
						hitpoint="";
						selection="";
						useFlare=0;
						flareSize=0;
						flareMaxDistance=0;
						dayLight=1;
						blinking=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=1;
							hardLimitStart=0.1;
							hardLimitEnd=1.3;
						};
					};
					class cargo_light_1: Cabin
					{
						position="cargo_light_1";
						direction="cargo_light_1_dir";
						intensity=1;
						class Attenuation: Attenuation
						{
							hardLimitEnd=4;
						};
					};
					class cargo_light_2: cargo_light_1
					{
						position="cargo_light_2";
						direction="cargo_light_2_dir";
					};
				};
			};
			/*
			class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
			{
                gunnerAction = "passenger_inside_1";
				gunnerInAction = "passenger_inside_1";
                gunnerCompartments = "";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                playerPosition = 4;
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
                gunnerGetInAction = "";
                gunnerName = "Gunner (Side)";
				GunnerDoor = "";
				inGunnerMayFire = 1;
                proxyIndex = 7;
                maxElev = 90;
                minElev = -80;
                maxTurn = 100;
                minTurn = -100;
                isPersonTurret = 1;
                ejectDeadGunner = 1;
                memoryPointGunnerOptics = "eye";
                class dynamicViewLimits{};
			};
			*/
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				gunnerCompartments="";
				preciseGetInOut=0;
				canHideGunner = -1;
				hasGunner = true;
				animationSourceHatch = "hatchGunner";
				animationSourceGun = "";
				animationSourceCamElev = "camElev";
				animationSourceBody = "";
				isPersonTurret = 2;
				//GunnerDoor="Door_RB";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="";
				gunnerName="Gunner (Side)";
				dontCreateAI = true;
				proxyIndex=7;
				maxElev=90;
				minElev=-80;
				maxTurn=80;
				minTurn=-80;
				showAsCargo = false;
				ejectDeadGunner=true;
				memoryPointGunnerOptics="eye";
				class dynamicViewLimits
				{
				};
			};
		};