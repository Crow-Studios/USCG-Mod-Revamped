class CfgPatches
{
	class USCG_Equipment
	{
		units[]=
		{
			"USCG_Unit_Rescue_Medic",
			"USCG_Unit_Rescue_Pilot",
			"USCG_Unit_Rescue_Swimmer",
			"USCG_Unit_Combat_Officer"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_characters_F",
		};
	};
};

class cfgVehicleClasses
{
	class USCG_Rescue
	{
		displayName = "Rescue Team";
	};
	class USCG_Combat
	{
		displayName = "Combat Team";
	};
};

class CfgVehicles 
{     
    class B_Soldier_F; 
    
	class B_Soldier_03_f;
	
	class USCG_Unit_Rescue_Pilot: B_Soldier_03_f
	{
		side=1;
		faction="USCG";
		backpack="";
		vehicleclass="USCG_Rescue";
		author="Akers, Remastered by Silence";
		_generalMacro="USCG_Unit_Rescue_Pilot";
		scope=2;
		displayName="(USCG) Rescue Pilot";
		icon="iconManLeader";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		weapons[]=
		{
			"",
			"",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"",
			"",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"H_PilotHelmetHeli_B",
			"USCG_Vest_Rescue_Pilot",
			"USCG_Vest_Facewear_Floaty_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_B",
			"USCG_Vest_Rescue_Pilot",
			"USCG_Vest_Facewear_Floaty_Black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="USCG_Uniform_Rescue";
		camouflage=1.6;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"USCG_Uniforms\Uniform\uscg_rescue_suit_co.paa",
		};
	};
	class USCG_Unit_Rescue_Medic: B_Soldier_03_f
	{
		side=1;
		faction="USCG";
		backpack="USCG_Backpack_Rescue_Pack";
		vehicleclass="USCG_Rescue";
		author="Akers, Remastered by Silence";
		_generalMacro="USCG_Unit_Rescue_Medic";
		scope=2;
		displayName="(USCG) Rescue Medic";
		icon="iconManLeader";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		Items[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		RespawnItems[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[]=
		{
			"H_Cap_Orange_IDAP_F",
			"V_Chestrig_blk",
			"G_WirelessEarpiece_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Cap_Orange_IDAP_F",
			"V_Chestrig_blk",
			"G_WirelessEarpiece_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="USCG_Uniform_Rescue";
		camouflage=1.6;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"USCG_Uniforms\Uniform\uscg_rescue_suit_co.paa",
		};
	};
	class USCG_Unit_Rescue_Swimmer: B_Soldier_03_f
	{
		side=1;
		faction="USCG";
		//backpack="B_Messenger_Black_F";
		backpack = "";
		vehicleclass="USCG_Rescue";
		author="Akers, Remastered by Silence";
		_generalMacro="USCG_Unit_Rescue_Swimmer";
		scope=2;
		displayName="(USCG) Rescue Swimmer";
		icon="iconManLeader";
		model = "\A3\characters_F\Common\diver_slotable.p3d";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		Items[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		RespawnItems[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[]=
		{
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"G_AirPurifyingRespirator_01_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="USCG_Uniform_Swimmer";
		camouflage=1.6;
		hiddenSelections[] = {"Camo1", "Camo2", "insignia"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Uniform\uscg_swimmer_suit_co.paa", "\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"};
	};
	// Combat
	class USCG_Unit_Combat_Officer: B_Soldier_03_f
	{
		side=1;
		faction="USCG";
		backpack="USCG_Backpack_Combat_Pack";
		vehicleclass="USCG_Combat";
		author="Akers, Remastered by Silence";
		_generalMacro="USCG_Unit_Combat_Officer";
		scope=2;
		displayName="(USCG) Military Officer";
		icon="iconManLeader";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		weapons[]=
		{
			"arifle_SPAR_01_blk_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_SPAR_01_blk_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_green",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_green",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		Items[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		RespawnItems[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[]=
		{
			"USCG_Headgear_Combat_Alternate",
			"USCG_Vest_Combat",
			"G_RegulatorMask_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"USCG_Headgear_Combat_Alternate",
			"USCG_Vest_Combat",
			"G_RegulatorMask_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="USCG_Uniform_Combat";
		camouflage=1.6;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"USCG_Uniforms\Uniform\uscg_combat_clothing_co.paa",
		};
	};
	class USCG_Unit_Combat_Officer_BlkUniform: B_Soldier_03_f
	{
		side=1;
		faction="USCG";
		backpack="USCG_Backpack_Combat_Pack";
		vehicleclass="USCG_Combat";
		author="Akers, Remastered by Silence";
		_generalMacro="USCG_Unit_Combat_Officer_BlkUniform";
		scope=2;
		displayName="(USCG) Military Sergeant";
		icon="iconManLeader";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red",
			"Chemlight_red"
		};
		Items[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		RespawnItems[] =
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[]=
		{
			"H_Beret_02",
			"USCG_Vest_PlateCarrier",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Beret_02",
			"USCG_Vest_PlateCarrier",
			"G_Aviator",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass="USCG_Uniform_Combat_Black";
		camouflage=1.6;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"USCG_Uniforms\Uniform\uscg_combat_clothing_blk_co.paa",
		};
	};
	
	class B_AssaultPack_Kerry;
	
	class USCG_Backpack_Rescue_Pack : B_AssaultPack_Kerry
	{
		author = "Silence";
		displayName = "(USCG) Rescue Backpack";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\backpack\backpack_compact_uscg_co.paa", "USCG_Uniforms\vest\platecarrier_uscg_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Backpack_Combat_Pack : B_AssaultPack_Kerry
	{
		author = "Silence";
		displayName = "(USCG) Combat Backpack";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\backpack\backpack_compact_uscg_co.paa", "USCG_Uniforms\vest\platecarrier_uscg_combat_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
};

class cfgGlasses
{
    class None;
    class USCG_Vest_Facewear_Floaty: None
    {
        author = "Silence/Zelo";
        displayname = "(USCG) Float Vest";
        model = "USCG_Uniforms\vest_floaty\uscg_vest";
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\vest_floaty\vest_floaties_co.paa"};
		hiddenSelectionsMaterials[] = {"USCG_Uniforms\vest_floaty\vest_floaties.rvmat"};
        picture = "\USCG\USCG_Image.paa";
        identityTypes[] =
        {
            "NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
            "G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
        };
        mass = 4;
    };
    class USCG_Vest_Facewear_Floaty_Black: None
    {
        author = "Silence/Zelo";
        displayname = "(USCG) Float Vest Black";
        model = "USCG_Uniforms\vest_floaty\uscg_vest";
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\vest_floaty\vest_floaties_black_co.paa"};
		hiddenSelectionsMaterials[] = {"USCG_Uniforms\vest_floaty\vest_floaties_black.rvmat"};
        picture = "\USCG\USCG_Image.paa";
        identityTypes[] =
        {
            "NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,
            "G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",00,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0
        };
        mass = 4;
    };
};

class cfgWeapons 
{ 
    class ItemCore; 
    class UniformItem; 
    class H_CapB: ItemCore 
    { 
        class ItemInfo; 
    }; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 
	
	class V_PlateCarrier1_blk;
	class U_B_Wetsuit;
	class H_HelmetHBK_headset_F;
	class H_HelmetHBK_F;
	class V_SmershVest_01_radio_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class H_Cap_blk;
	
	#include "vest_floaty\cfgVest.hpp"
	
	class USCG_Headgear_Cap : H_Cap_blk
	{
		author = "Silence";
		displayName = "(USCG) Cap";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Headgear\uscg_headgear_cap_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Headgear_Cap_Blk : H_Cap_blk
	{
		author = "Silence";
		displayName = "(USCG) Cap Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Headgear\uscg_headgear_blk_cap_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};	

	class H_PilotHelmetHeli_B;
	class USCG_Headgear_Pilot : H_PilotHelmetHeli_B
	{
		author = "Silence";
		displayName = "Heli Pilot Helmet [USCG]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Headgear\helmet_heli_uscg_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	
	class USCG_Headgear_Combat : H_HelmetHBK_headset_F
	{
		author = "Silence";
		displayName = "(USCG) Combat Helmet";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Headgear\USCG_Helmet_Combat.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Headgear_Combat_Alternate : H_HelmetHBK_F
	{
		author = "Silence";
		displayName = "(USCG) Combat Helmet (No Headset)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Headgear\USCG_Helmet_Combat.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	
	class USCG_Vest_Rescue_Pilot : V_PlateCarrier1_blk
	{
		author = "Silence";
		displayName = "(USCG) Rescue Pilot Vest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Vest\platecarrier_uscg_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Vest_Combat : V_PlateCarrier1_blk
	{
		author = "Silence";
		displayName = "(USCG) Combat Vest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Vest\platecarrier_uscg_combat_co.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Harness : V_SmershVest_01_radio_F
	{
		author = "Silence";
		displayName = "(USCG) Harness";
		hiddenSelections[] = {"camo", "camo2", "Radio2_hide"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Vest\smersh_uscg_co.paa", "USCG_Uniforms\Vest\Smersh_miscellaneous_uscg_CO.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Vest_PlateCarrier : V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Silence";
		displayName = "(USCG) Combat Plate Carrier";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Vest\CarrierRigKBT_01_USCG_CO.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Vest_PlateCarrier_Medic : V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Silence";
		displayName = "(USCG) Combat Medic Plate Carrier";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Vest\CarrierRigKBT_01_USCG_MEDIC_CO.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};
	class USCG_Vest_PlateCarrier_OHLAWDHECOMIN : V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Silence";
		displayName = "(USCG) Combat Plate Carrier Heavy";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"USCG_Uniforms\Vest\CarrierRigKBT_01_USCG_CO.paa"};
		picture = "\USCG\USCG_Image.paa";
		icon = "\USCG\USCG_Image.paa";
	};

    class USCG_Uniform_Rescue: Uniform_Base 
    { 
        icon = "\USCG\USCG_Image.paa";
        scope = 2; 
        displayName = "(USCG) Rescue Uniform"; 
        picture = "\USCG\USCG_Image.paa"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "USCG_Unit_Rescue_Pilot"; 
            containerClass = "Supply50"; 
            mass = 50; 
        };    
    };
    class USCG_Uniform_Combat: Uniform_Base 
    { 
        icon = "\USCG\USCG_Image.paa";
        scope = 2; 
        displayName = "(USCG) Combat Uniform"; 
        picture = "\USCG\USCG_Image.paa"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "USCG_Unit_Combat_Officer"; 
            containerClass = "Supply50"; 
            mass = 50; 
        };    
    };
    class USCG_Uniform_Combat_Black: Uniform_Base 
    { 
        icon = "\USCG\USCG_Image.paa";
        scope = 2; 
        displayName = "(USCG) Combat Uniform Black"; 
        picture = "\USCG\USCG_Image.paa"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "USCG_Unit_Combat_Officer_BlkUniform"; 
            containerClass = "Supply50"; 
            mass = 50; 
        };    
    };
    class USCG_Uniform_Swimmer: U_B_Wetsuit 
    {
        icon = "\USCG\USCG_Image.paa";
        scope = 2; 
        displayName = "(USCG) Rescue Swimmer Uniform"; 
        picture = "\USCG\USCG_Image.paa"; 
        model = "\A3\characters_F\Common\diver_slotable.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "USCG_Unit_Rescue_Swimmer"; 
			uniformType="Neopren";
            containerClass = "Supply80"; 
            mass = 60; 
        };    
    };
}; 