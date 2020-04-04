class CfgPatches
{
	class 77_MC_Magazines
	{
		author="77 SMU/ODST";
		name="77th SMU/ODST Bn Mods";
		url="";
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag_NARQ",
			"OPTRE_4Rnd_145x114_Mag_NARQ",
		};
		ammo[]=
		{
			"NarqDart",
			"NarqDart_S",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"OPTRE_Weapons_Pistol",
			"A3_Weapons_F_EPA",
			"OPTRE_Weapons_Shotgun",
			"77_MC_Weapons",
			"A3Data"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class 77_MC_Magazines
		{
			list[]=
			{
				"77_MC_Magazines"
			};
		};
	};
};
class CfgAmmo
{
	
	class BulletBase;
	class NarqDart: BulletBase
	{
		hit=0.1;
		indirecthit=0;
		indirecthitrange=0;
		typicalspeed=100;
		timetolive=0.4;
		caliber=3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		class CamShakeHit
		{
			power=1000;
			duration="((round (1000^0.2))*0.2 max 0.2)";
			frequency=100;
			distance=150;
		};
	};
	class NarqDart_S: NarqDart
	{
		caliber=0.4;
	};
}; 
class CfgMagazines
{	
	class OPTRE_8Rnd_127x40_Mag;
	class OPTRE_12Rnd_127x40_Mag_NARQ: OPTRE_8Rnd_127x40_Mag
	{
		dlc="OPTRE";
		model="\OPTRE_Weapons\pistol\m6_Magazine.p3d";
		displayname="16Rnd 12.7x40mm NARQ Dart Magazine";
		displaynameshort="NARQ Darts";
		ammo="NarqDart";
		count=12;
		initspeed=100;
		picture="\OPTRE_weapons\pistol\icons\magazine.paa";
		descriptionshort="16 Round Magazine <br>12.7x40mm<br> Tranquilizers";
		mass=10;
		tracersEvery=1	
	};
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_4Rnd_145x114_Mag_NARQ: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		dlc="77";
		author="77 SMU/ODST";
		scope=2;
		scopeArsenal=2;
		ammo="NarqDart_S";
		displayname="4Rnd 14.5x114mm NARQ Dart Magazine";
		displaynameshort="NARQ Darts";
		descriptionshort="4 Round Magazine <br>14.5x114mm<br> Tranquilizers";
		tracersEvery=1
	};
};