class cfgPatches
{
	class Lost_Hope_Models_Shared
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};

class cfgVehicleClasses
{
	class Lost_Hope_Static
	{
		displayName = "[Lost Hope] Static Objects";
	};
};

class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		moveVelocity[] = {0, 0, 10};
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		moveVelocity[] = {0, 0, 15};
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		moveVelocity[] = {0, 0, 5};
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		moveVelocity[] = {0, 0, 10};
	};
};

class cfgAmmo
{
	class SmokeShellRed;
	class Grenade;
	class GrenadeHand;
	class lost_hope_ammo_flare_1: SmokeShellRed
	{
		model="\lost_hope_flare_1\lost_hope_flare_1_throw.p3d";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="SmokeShellWhiteEffect"; //SmokeShellRedEffect 
	};
	class lost_hope_ammo_flare_2: SmokeShellRed
	{
		model="\lost_hope_flare_2\lost_hope_flare_2_throw.p3d";
		smokeColor[]={0.1383,0.1353,0.84380001,1};
		effectsSmoke="SmokeShellWhiteEffect"; //SmokeShellBlueEffect
	};
	class lost_hope_ammo_bile: GrenadeHand
	{
		scope = 2;
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		dangerRadiusHit=0;
		suppressionRadiusHit=-1;
		model="lost_hope_bile\lost_hope_bile";
		CraterEffects="NoCrater";
		explosionEffects="NoExplosion";
		explosive=0;
		soundHit[]=
		{
			"",
			1,
			1
		};
		cost=1;
		whistleDist=0;
		class CamShakeExplode
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
		class CamShakeHit
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
	class lost_hope_ammo_homemade_bomb: GrenadeHand
	{
		scope = 2;
		hit=10;
		indirectHit=4;
		indirectHitRange=6;
		dangerRadiusHit=10;
		suppressionRadiusHit=24;
		model="lost_hope_homemade_bomb\lost_hope_homemade_bomb";
		CraterEffects="";
		explosionEffects="GrenadeExplosion";
		explosive=1;
		soundHit[]=
		{
			"",
			1,
			1
		};
		cost=100;
		whistleDist=0;
		class CamShakeExplode
		{
			power=2;
			duration=1;
			frequency=10;
			distance=1;
		};
		class CamShakeHit
		{
			power=5;
			duration=3;
			frequency=20;
			distance=2;
		};
	};
};

class cfgMagazines 
{
	class SmokeShellRed;
	class CA_Magazine;
	class HandGrenade : CA_Magazine {};
	class lost_hope_mag_flare_1: SmokeShellRed
	{
		author="Lost Hope Dev Team";
		displayName="Signal Flare";
		displayNameShort="Signal Flare";
		picture="\lost_hope_flare_1\UI\lost_hope_flare_1_ca.paa";
		model="\lost_hope_flare_1\lost_hope_flare_1_throw.p3d";
		ammo="lost_hope_ammo_flare_1";
		descriptionShort="Signal Flare, Used For Calling In Airdrops";
		mass = 30;
	};
	class lost_hope_mag_flare_2: SmokeShellRed
	{
		author="Lost Hope Dev Team";
		displayName="Signal Flare (Blue)";
		displayNameShort="Signal Flare (Blue)";
		picture="\lost_hope_flare_2\UI\lost_hope_flare_2_ca.paa";
		model="\lost_hope_flare_2\lost_hope_flare_2_throw.p3d";
		ammo="lost_hope_ammo_flare_2";
		descriptionShort="Signal Flare, Used For Calling In Specific Airdrops";
		mass = 30;
	};
	class lost_hope_mag_bile: HandGrenade
	{
		scope = 2;
		author="Lost Hope Dev Team";
		displayName="Infected Concoction";
		displayNameShort="Infected Concoction";
		picture="\lost_hope_bile\UI\lost_hope_bile_ca.paa";
		model="\lost_hope_bile\lost_hope_bile.p3d";
		ammo="lost_hope_ammo_bile";
		descriptionShort="Infected Concoction, Used To Disguise Yourself";
		mass = 10;
	};
	class lost_hope_mag_homemade_bomb: HandGrenade
	{
		scope = 2;
		author="Lost Hope Dev Team";
		nameSound="handgrenade";
		displayName="Homemade Bomb";
		displayNameShort="Homemade Bomb";
		picture="\lost_hope_homemade_bomb\UI\lost_hope_homemade_bomb_ca.paa";
		model="\lost_hope_homemade_bomb\lost_hope_homemade_bomb.p3d";
		ammo="lost_hope_ammo_homemade_bomb";
		descriptionShort="Infected Concoction, Used To Disguise Yourself";
		mass = 10;
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += 
		{
			"lost_hope_mag_flare_1_throw", 
			"lost_hope_mag_flare_2_throw", 
			"lost_hope_mag_homemade_bomb_throw", 
			"lost_hope_mag_bile_throw"
		};
		class ThrowMuzzle;
		class lost_hope_mag_flare_1_throw : ThrowMuzzle
		{
			magazines[] = {"lost_hope_mag_flare_1"};
		};
		class lost_hope_mag_flare_2_throw : ThrowMuzzle
		{
			magazines[] = {"lost_hope_mag_flare_2"};
		};
		class lost_hope_mag_homemade_bomb_throw : ThrowMuzzle
		{
			magazines[] = {"lost_hope_mag_homemade_bomb"};
		};
		class lost_hope_mag_bile_throw : ThrowMuzzle
		{
			magazines[] = {"lost_hope_mag_bile"};
		};
	};
};
