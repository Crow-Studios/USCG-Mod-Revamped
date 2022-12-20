		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine"
		};
		soundEngineOnInt[]=
		{
			"USCG_Jayhawk\Jayhawk\Sounds\uh60_startup",
			0.1,
			1
		};
		soundEngineOnExt[]=
		{
			"USCG_Jayhawk\Jayhawk\Sounds\uh60_startup",
			1,
			1,
			800
		};
		soundEngineOffInt[]=
		{
			"USCG_Jayhawk\Jayhawk\Sounds\uh60_shutdown",
			0.1,
			1
		};
		soundEngineOffExt[]=
		{
			"USCG_Jayhawk\Jayhawk\Sounds\uh60_shutdown",
			1,
			1,
			800
		};
		class Sounds: Sounds
		{
			class Engine
			{
				sound[]=
				{
					"USCG_Jayhawk\Jayhawk\Sounds\uh60_engine",
					2.5118899,
					1,
					900
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*5)/10";
			};
			class EngineIn
			{
				sound[]=
				{
					"USCG_Jayhawk\Jayhawk\Sounds\uh60_internal",
					3.1622777,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*6)/60";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"USCG_Jayhawk\Jayhawk\Sounds\uh60_rotor",
					3.1622777,
					1
				};
				frequency="rotorSpeed";
				volume="2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))/60";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"USCG_Jayhawk\Jayhawk\Sounds\uh60_rotor",
					3.1622777,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)/60";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"USCG_Jayhawk\Jayhawk\Sounds\uh60_rotor",
					2.5118899,
					1,
					1400
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))/10";
				cone[]={1.6,3.1400001,2,0.5};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"USCG_Jayhawk\Jayhawk\Sounds\uh60_rotor",
					2.5118899,
					1,
					1600
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))/10";
				cone[]={1.6,3.1400001,2,0.5};
			};
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine",
					1.41254,
					1,
					800
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)/60";
			};
			class EngineInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine",
					1,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="(1-camPos)*((rotorSpeed-0.75)*6)/60";
			};
		};
		class SoundsExt: SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine",
						1.41254,
						1,
						800
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="camPos*((rotorSpeed-0.72)*6)/10";
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine",
						1,
						1
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="(1-camPos)*((rotorSpeed-0.75)*6)/60";
				};
			};
		};
		class MFD
		{
		};
		class pilotCamera
		{
		};