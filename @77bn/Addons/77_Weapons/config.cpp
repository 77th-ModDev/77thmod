class CfgPatches
{
	class 77_MC_Weapons
	{
		author="77 SMU/ODST";
		name="77th SMU/ODST Bn Mods";
		url="";
		units[]={};
		weapons[]=
		{
			"OPTRE_M6C_NARQ",
			"OPTRE_SRS99D",
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"OPTRE_Weapons_Charges",
			"OPTRE_Weapons_SMG",
			"OPTRE_Weapons_Pistol"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class 77_MC_Weapons
		{
			list[]=
			{
				"77_MC_Weapons"
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
class OPTRE_M6C;
	class OPTRE_M6C_NARQ: OPTRE_M6C
	{
		dlc="77";
		author="77 SMU/ODST";
		scope=2;
		scopeArsenal=2;
		displayName="M6C/Narq-dart Pistol";
		baseWeapon="OPTRE_M6C_NARQ";
		//model="\OPTRE_Weapons\Pistol\M6C";
		magazines[]=
		{
			"OPTRE_12Rnd_127x40_Mag_NARQ"
		};
	};
class OPTRE_SRS99D
{
	magazines[]=
		{
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"OPTRE_4Rnd_145x114_HEDP_Mag",
			"OPTRE_4Rnd_145x114_Mag_NARQ",
		};
};
};
class Extended_PreInit_EventHandlers
{
	class 77_MC_Weapons
	{
		init="call compile preprocessFileLineNumbers '\77_Weapons\scripts\XEH_preInit.sqf'; ";
	};
};
class Extended_PreStart_EventHandlers
{
	class 77_MC_Weapons
	{
		init="call compile preprocessFileLineNumbers '\77_Weapons\scripts\XEH_preStart.sqf'; ";
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class 77_MC_Weapons
		{
			respawn="_this call CSW_fnc_TaserOnRespawn";
		};
	};
};
class Extended_Hit_EventHandlers
{
	class CAManBase
	{
		77_MC_Weapons="_this call CSW_fnc_TaserOnHit;";
	};
};