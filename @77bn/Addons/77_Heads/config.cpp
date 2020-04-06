class CfgPatches
{
	class 77_Heads
	{
		author="77 SMU/ODST";
		hideName=0;
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_beta",
			"A3_Characters_F_epa",
			"A3_Characters_F_epb",
			"A3_Characters_F_epc",
			"A3_Characters_F_exp"
		};
	};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default;
		class WhiteHead_01;
		class AfricanHead_01;
		class AsianHead_A3_01;
		class GreekHead_A3_01;
		class TanoanHead_A3_01;
		class 77_marco_A3: WhiteHead_01
		{
			displayname="Chiriboga";
			texture="\77_heads\data\marco\marco_co.paa";
			head="NATOHead_A3";
			identityTypes[]=
			{
				"Head_Euro"
			};
			author="77 SMU/ODST";
			material="\77_heads\data\marco\marco.rvmat";
			disabled=0;
			materialWounded1="A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			materialWounded2="A3\characters_F_EPB\Heads\Data\m_IG_leader_injury.rvmat";
			textureHL="\77_heads\data\marco\hl_marco_co.paa";
			materialHL="\77_heads\data\marco\hl_marco.rvmat";
			textureHL2="\77_heads\data\marco\hl_marco_co.paa";
			materialHL2="\77_heads\data\marco\hl_marco.rvmat";
		};
	};
};
