class 77th_ODST_H_VestR: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Rifleman) - Hardened";
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
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
		class 77th_ODST_H_VestB: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (CQB) - Hardened";
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
		//"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		//"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		//"APO_SMG", // Ammo SMG on Chest
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		//"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		//"APO_SMG", // Ammo SMG on Chest
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
	    class 77th_ODST_h_VestG: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Grenadier) - Hardened";
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
		//"AS_ODSTCQBLeft", // ODST CQB Shoulder Left
		//"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		//"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"AS_ODSTCQBLeft", // ODST CQB Shoulder Left
		//"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		//"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
		class 77th_ODST_h_VestE: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Engineer) - Hardened";
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		//"AS_SmallLeft", // Marine Security Shoulder Left
		//"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		//"AS_SmallLeft", // Marine Security Shoulder Left
		//"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
	    class 77th_ODST_h_VestAT: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (AA/AT) - Hardened";
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
		//"AS_LargeRight", // Large Marine Shoulder Right
		"AS_MediumLeft", // Medium Marine Shoulder Left
		"AS_MediumRight", // Medium Marine Shoulder Right
		"AS_ODSTCQBLeft", // ODST CQB Shoulder Left
		"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		//"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		//"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
		//"APO_SMG", // Ammo SMG on Chest
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"AS_LargeRight", // Large Marine Shoulder Right
		"AS_MediumLeft", // Medium Marine Shoulder Left
		"AS_MediumRight", // Medium Marine Shoulder Right
		"AS_ODSTCQBLeft", // ODST CQB Shoulder Left
		"AS_ODSTCQBRight", // ODST CQB Shoulder Right
		//"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		//"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
		//"APO_SMG", // Ammo SMG on Chest
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
	class 77th_ODST_h_VestAR: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Automatic Rifleman) - Hardened";
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
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
		//"APO_SMG", // Ammo SMG on Chest
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
		//"APO_SMG", // Ammo SMG on Chest
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
	class 77th_ODST_h_VestSn: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Sniper) - Hardened";
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
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		//"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		//"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		//"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		//"APO_Sniper", // Ammo Sniper on Chest, left and right waist
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		//"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		//"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		//"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		//"APO_Sniper", // Ammo Sniper on Chest, left and right waist
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
	class 77th_ODST_h_VestSnG: 77th_ODST_VestSn
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Sniper/Ghillie) - Hardened";
        model = "\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[] = {
		"camo",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		//"A_ChestArmor", // Full Metal Plate
		//"A_Ghillie", // Ghilie
		//"A_KneesLeft", // Kneepad Left
		//"A_KneesRight", // Kneepad Right
		"A_KneesMarLeft", // Marine Kneepad Left
		"A_KneesMarRight", // Marine Kneepad Right
		//"A_ODST", // ODST Forearm Armor
		//"A_ShinArmorLeft", // ODST Shin Armor Left
		//"A_ShinArmorRight", // ODST Shin Armor Right
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		//"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		//"APO_Sniper", // Ammo Sniper on Chest, left and right waist
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"A_Ghillie", // Ghilie
		//"A_KneesLeft", // Kneepad Left
		//"A_KneesRight", // Kneepad Right
		"A_KneesMarLeft", // Marine Kneepad Left
		"A_KneesMarRight", // Marine Kneepad Right
		//"A_ODST", // ODST Forearm Armor
		//"A_ShinArmorLeft", // ODST Shin Armor Left
		//"A_ShinArmorRight", // ODST Shin Armor Right
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		//"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		//"APO_Sniper", // Ammo Sniper on Chest, left and right waist
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
	    class 77th_ODST_h_VestSp: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Spotter) - Hardened";
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
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		//"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		//"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		//"CustomKit_Scorch" //Knife on left shoulder blade
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		//"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		//"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		//"CustomKit_Scorch" //Knife on left shoulder blade
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
	  class 77th_ODST_h_VestSpG: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (Spotter/Ghillie) - Hardened";
        model = "\OPTRE_UNSC_Units\Army\armor.p3d";
        hiddenSelections[] = {
		"camo",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		//"A_ChestArmor", // Full Metal Plate
		//"A_Ghillie", // Ghilie
		//"A_KneesLeft", // Kneepad Left
		//"A_KneesRight", // Kneepad Right
		"A_KneesMarLeft", // Marine Kneepad Left
		"A_KneesMarRight", // Marine Kneepad Right
		//"A_ODST", // ODST Forearm Armor
		//"A_ShinArmorLeft", // ODST Shin Armor Left
		//"A_ShinArmorRight", // ODST Shin Armor Right
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		//"CustomKit_Scorch" //Knife on left shoulder blade
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"A_Ghillie", // Ghilie
		//"A_KneesLeft", // Kneepad Left
		//"A_KneesRight", // Kneepad Right
		"A_KneesMarLeft", // Marine Kneepad Left
		"A_KneesMarRight", // Marine Kneepad Right
		//"A_ODST", // ODST Forearm Armor
		//"A_ShinArmorLeft", // ODST Shin Armor Left
		//"A_ShinArmorRight", // ODST Shin Armor Right
		//"A_TacPad", // Left Arm Tacpad
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		"APO_AR", // Ammo AR on Chest, left and right waist
		//"APO_BR", // Ammo BR on Chest, left and right waist
		"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		//"CustomKit_Scorch" //Knife on left shoulder blade
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
	class 77th_ODST_h_VestM: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (SARC) - Hardened";
        model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelectionsMaterials[]=
		{
			"\77_Armor\Data\Armor\77_odst_vest.rvmat",
			"\77_Armor\Data\Armor\77_odst_armor.rvmat",
			"\77_Armor\Data\Armor\77_odst_legs.rvmat",
			"",
			"\77_Armor\Data\Armor\77_odst.rvmat"
		};        
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
		"APO_SMG", // Ammo SMG on Chest
		"APO_Sniper", // Ammo Sniper on Chest, left and right waist
		"CustomKit_Scorch" //Knife on left shoulder blade
}; 	
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		"AS_ODSTLeft", // ODST Standard Shoulder Left
		"AS_ODSTRight", // ODST Standard Shoulder Right
		"AS_ODSTSniperLeft", // ODST Sniper Shoulder Left
		"AS_ODSTSniperRight", // ODST Sniper Shoulder Right
		"AS_SmallLeft", // Marine Security Shoulder Left
		"AS_SmallRight", // Marine Security Shoulder Right
		"AP_AR", // Small ammo pouches on abdominal armor
		"AP_BR", // Long ammo pouches on abdominal armor
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		"AP_Knife", // Knife sheated on left shoulder
		//"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		"AP_Frag", // Grenades on clipped on right waist
		"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
		"APO_BR", // Ammo BR on Chest, left and right waist
		//"APO_Knife", // Knife sheathed in sacrem
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
	 class 77th_ODST_h_VestEL: 77th_ODST_Vest
    {
        dlc="77";
		scope = 2;
        author="77 SMU/ODST";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        displayName="[77th] M52D Body Armor (EL/TL) - Hardened";
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
		//"A_TacPad", // Left Arm Tacpad
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
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		//"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
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
			"\77_Armor\Data\Armor\77_odst_h_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"\77_Armor\Data\Armor\77_odst_h_vest_co.paa"
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
		//"A_TacPad", // Left Arm Tacpad
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
		//"AP_Canteen", // Canteen on belt
		"AP_GL", // M203 ammo belt across waist
		//"AP_Knife", // Knife sheated on left shoulder
		"AP_MGThigh", // Ammo pouch on right leg
		"AP_Pack", // Ammo pouch on chest
		//"AP_Pistol", // Pitol ammo pouch on right waist
		"AP_Rounds", // Sniper rounds on left pauldron
		"AP_SG", // Shotgun shells on right chestplate
		"AP_SMG", // Ammo pouches on chestplate
		"AP_Sniper", // Sniper ammo pouches on abdominal armor
		//"AP_Thigh", // Ammo pouch on left leg
		//"AP_Frag", // Grenades on clipped on right waist
		//"AP_Smoke", // Smoke grenades on clipped on left waist
		//"APO_AR", // Ammo AR on Chest, left and right waist
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