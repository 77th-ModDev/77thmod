/*
#CLEANHELMETS
*/
	//STANDARD
	
	class OPTRE_UNSC_CH252D_Helmet;
	class 77th_ODST_Helmet: OPTRE_UNSC_CH252D_Helmet
    {
        author="77 SMU/ODST";
        scope = 2;
        displayName = "[77th] CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		picture="\optre_unsc_units\army\icons\odst_helmet.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[]=
		{
			"\77_Armor\Data\Helmet\77_odst_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_helmet_visor.rvmat",
		};
		hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_helmet_visor_co.paa"};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.36;
	};
		class OPTRE_UNSC_CH252D_Helmet_dp;
        class 77th_ODST_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        Scope=1;
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_helmet_visor_ca.paa"};
		hiddenSelectionsMaterials[]= {"\77_Armor\Data\Helmet\77_odst_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_helmet_visor_trans.rvmat"};
    };	
	
	//MEDIC
	
		class 77th_ODST_m_Helmet: OPTRE_UNSC_CH252D_Helmet
    {
        author="77 SMU/ODST";
        scope = 2;
        displayName = "[77th] CH252D Helmet (SARC)";
		optreVarietys[] = {"_dp","","_broken"};
		picture="\optre_unsc_units\army\icons\odst_helmet.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[]=
		{
			"\77_Armor\Data\Helmet\77_odst_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_helmet_visor.rvmat",
		};
		hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_m_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_helmet_visor_co.paa"};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.36;
	};
        class 77th_ODST_m_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        Scope=1;
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_m_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_helmet_visor_ca.paa"};
		hiddenSelectionsMaterials[]= {"\77_Armor\Data\Helmet\77_odst_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_helmet_visor_trans.rvmat"};
    };	
	
/*
#HARDENEDHELMETS
*/
		
	//STANDARD
	
		class 77th_ODST_h_Helmet: OPTRE_UNSC_CH252D_Helmet
    {
        author="77 SMU/ODST";
        scope = 2;
        displayName = "[77th] CH252D Helmet - Hardened";
		optreVarietys[] = {"_dp","","_broken"};
		picture="\optre_unsc_units\army\icons\odst_helmet.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[]=
		{
			"\77_Armor\Data\Helmet\77_odst_h_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_h_helmet_visor.rvmat",
		};
		hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_h_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_h_helmet_visor_co.paa"};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.36;
	};
        class 77th_ODST_h_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        Scope=1;
         hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_h_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_h_helmet_visor_ca.paa"};
		hiddenSelectionsMaterials[]= {"\77_Armor\Data\Helmet\77_odst_h_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_h_helmet_visor_trans.rvmat"};
    };	
	
	//MEDIC
	
		class 77th_ODST_hm_Helmet: OPTRE_UNSC_CH252D_Helmet
    {
        author="77 SMU/ODST";
        scope = 2;
        displayName = "[77th] CH252D Helmet (SARC) - Hardened";
		optreVarietys[] = {"_dp","","_broken"};
		picture="\optre_unsc_units\army\icons\odst_helmet.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[]=
		{
			"\77_Armor\Data\Helmet\77_odst_h_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_h_helmet_visor.rvmat",
		};
		hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_hm_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_h_helmet_visor_co.paa"};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.36;
	};
        class 77th_ODST_hm_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        Scope=1;
         hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\77_Armor\Data\Helmet\77_odst_hm_helmet_co.paa","\77_Armor\Data\Helmet\77_odst_h_helmet_visor_ca.paa"};
		hiddenSelectionsMaterials[]= {"\77_Armor\Data\Helmet\77_odst_h_helmet.rvmat","\77_Armor\Data\Helmet\77_odst_h_helmet_visor_trans.rvmat"};
    };	