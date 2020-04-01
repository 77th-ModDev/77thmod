class CfgPatches
{
    class 77_MC_Armor
    {
        units[]=
        {
            
        };
        weapons[]=
        {
            
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Weapons_F_Acc",
            "OPTRE_Core"
        };
    };
};

class CfgVehicles
{
    class Land;
    class Man: Land
    {
        class EventHandlers;
    };
    class CAManBase: Man
    {
        class HitPoints;
    };
    class SoldierWB: CAManBase
    {
        class HitPoints: HitPoints
        {
            class HitFace;
            class HitNeck;
            class HitHead;
            class HitPelvis;
            class HitAbdomen;
            class HitDiaphragm;
            class HitChest;
            class HitBody;
            class HitArms;
            class HitHands;
            class HitLegs;
        };
    };
    class OPTRE_UNSC_Soldier_Base: SoldierWB
    {
        class HitPoints: HitPoints
        {
            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.1;
                radius=0.079999998;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
            };
            class HitNeck: HitFace
            {
                armor=1;
                material=-1;
                name="neck";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
            };
            class HitHead: HitNeck
            {
                armor=1;
                material=-1;
                name="head";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
                depends="HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor=1;
                material=-1;
                name="pelvis";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=0.25;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitAbdomen: HitPelvis
            {
                armor=1;
                material=-1;
                name="spine1";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=0.25;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor=1;
                material=-1;
                name="spine2";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=2;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitChest: HitDiaphragm
            {
                armor=1;
                material=-1;
                name="spine3";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=2;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitBody: HitChest
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=0.1;
                radius=0.16;
                explosionShielding=2;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor=1;
                material=-1;
                name="arms";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=0.25;
                visual="injury_hands";
                minimalHit=0.0099999998;
            };
            class HitHands: HitArms
            {
                armor=1;
                material=-1;
                name="hands";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=0.25;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="HitArms";
            };
            class HitLegs
            {
                armor=1;
                material=-1;
                name="legs";
                passThrough=0.1;
                radius=0.12;
                explosionShielding=0.25;
                visual="injury_legs";
                minimalHit=0.0099999998;
            };
        };
    };

//FZ Test
	class 77_BDU_V_Base: OPTRE_UNSC_Soldier_Base
	{
		class EventHandlers;
	};
	class 77_BDU_V_GRAY: 77_BDU_V_Base
	{
		scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_SlimLeg"
		};
		hiddenSelectionsTextures[]=
		{
			"77_Armor\Data\Uniforms\77_BDU_GRAY_CO",
			"77_Armor\Data\Uniforms\77_BDU_GRAY_CO"
		};
		uniformclass="77_BDU_GRAY";
	};
		class  77_BDU_V_GRAY_Slim: 77_BDU_V_GRAY
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
		uniformclass="77_BDU_V_GRAY_Slim";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class 77_MC_Armor
		{
			list[]=
			{
				"77_MC_Armor"
			};
		};
	};
};
class cfgWeapons
{
    class ItemCore;
    class UniformItem;
    class HeadgearItem;
    class VestItem;
    class ItemInfo;
    
	/*
	#BDUSTART
	*/
	
//FZ Test
	class OPTRE_UNSC_Army_Uniform_OLI;
	class 77_BDU_GRAY: OPTRE_UNSC_Army_Uniform_OLI
	{
		dlc="77";
		scope=2;
		author="77 SMU/ODST";
		displayName="[77th] Combat Uniform (Gray)";
		picture="\optre_unsc_units\army\icons\odst_uniform.paa";
		CBRN_protection=1;
		class ItemInfo: UniformItem
		{
			containerClass="Supply100";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="77_BDU_V_GRAY";
		};
	};
	class 77_BDU_GRAY_Slim: 77_BDU_GRAY
	{
		scope=2;
		displayName="[77th] Combat Uniform (Gray) - Slim";
		class ItemInfo: ItemInfo
		{
			uniformClass="77_BDU_V_GRAY_Slim";
		};
	};
	
	/*
	#HELMETS
	*/
	
		#include "cfg77h.hpp"
	
	/*
	#ARMORS
	*/
	
	class OPTRE_UNSC_M52D_Armor;
    class 77th_ODST_Vest: OPTRE_UNSC_M52D_Armor
    {
        dlc="77";
		scope = 1;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Basic)";
        model = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
       hiddenSelections[] = {
		"camo",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		//"A_ChestArmor", // Full Metal Plate
		"A_Ghillie", // Ghilie
		//"A_KneesLeft", // Kneepad Left
		//"A_KneesRight", // Kneepad Right
		"A_KneesMarLeft", // Marine Kneepad Left
		"A_KneesMarRight", // Marine Kneepad Right
		//"A_ODST", // ODST Forearm Armor
		//"A_ShinArmorLeft", // ODST Shin Armor Left
		//"A_ShinArmorRight", // ODST Shin Armor Right
		"A_TacPad", // Left Arm Tacpad
		//"A_ThighArmorLeft", // Thigh Armor Left
		//"A_ThighArmorRight", // Thigh Armor Right
		//"AS_BaseLeft", // Soft Shoulder Left
		//"AS_BaseRight", // Soft Shoulder Right
		"AS_LargeLeft", // Large Marine Shoulder Left
		"AS_LargeRight", // Large Marine Shoulder Right
		"AS_MediumLeft", // Medium Marine Shoulder Left
		"AS_MediumRight", // Medium Marine Shoulder Right
		"AS_ODSTCQBLeft", // ODST CQB Shoulder Left
		"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		//"AS_ODSTLeft", // ODST Standard Shoulder Left
		//"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		"CustomKit_Scorch" //Knife on left shoulder blade
};
		hiddenSelectionsMaterials[]=
		{
			"\77_Armor\Data\Armor\77_odst_vest.rvmat",
			"\77_Armor\Data\Armor\77_odst_armor.rvmat",
			"\77_Armor\Data\Armor\77_odst_legs.rvmat",
			"",
			"\77_Armor\Data\Armor\77_odst.rvmat"
		};
          hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"\77_Armor\Data\Armor\77_odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_vest_co.paa"
		};
        class ItemInfo: VestItem
        {
            uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
            containerClass="Supply200";
            mass=80;
            passThrough=0.15000001;
            modelSides[]={6};
            hiddenSelections[] = {
		"camo",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		//"A_ChestArmor", // Full Metal Plate
		"A_Ghillie", // Ghilie
		//"A_KneesLeft", // Kneepad Left
		//"A_KneesRight", // Kneepad Right
		"A_KneesMarLeft", // Marine Kneepad Left
		"A_KneesMarRight", // Marine Kneepad Right
		//"A_ODST", // ODST Forearm Armor
		//"A_ShinArmorLeft", // ODST Shin Armor Left
		//"A_ShinArmorRight", // ODST Shin Armor Right
		"A_TacPad", // Left Arm Tacpad
		//"A_ThighArmorLeft", // Thigh Armor Left
		//"A_ThighArmorRight", // Thigh Armor Right
		//"AS_BaseLeft", // Soft Shoulder Left
		//"AS_BaseRight", // Soft Shoulder Right
		"AS_LargeLeft", // Large Marine Shoulder Left
		"AS_LargeRight", // Large Marine Shoulder Right
		"AS_MediumLeft", // Medium Marine Shoulder Left
		"AS_MediumRight", // Medium Marine Shoulder Right
		"AS_ODSTCQBLeft", // ODST CQB Shoulder Left
		"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		//"AS_ODSTLeft", // ODST Standard Shoulder Left
		//"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		"CustomKit_Scorch" //Knife on left shoulder blade
};
            class HitpointsProtectionInfo
            {
                class Arms
                {
                    hitpointName="HitArms";
                    armor=8;
                    passThrough=0.5;
                };
                class Chest
                {
                    hitpointName="HitChest";
                    armor=28;
                    passThrough=0.1;
                };
                class Diaphragm
                {
                    hitpointName="HitDiaphragm";
                    armor=28;
                    passThrough=0.1;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=28;
                    passThrough=0.1;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=28;
                    passThrough=0.1;
                };
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=8;
                    passThrough=0.5;
                };
            };
            vesttype="rebreather";
        };
    };	
	
	/*
	#CLEAN
	*/
		//STANDARD
		
	#include "cfg77ac.hpp"
	
		//MEDIC
		
	#include "cfg77am.hpp"
		
	/*
	#HARDENED
	*/
		//Standard
	
	#include "cfg77ah.hpp"
	
		//MEDIC
	
	#include "cfg77ahm.hpp"
	
};