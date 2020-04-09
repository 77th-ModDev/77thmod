class CfgPatches {
    class 77bn_ODST {
        units[] = {
            "77bn_ODST_CSO",
            "77bn_ODST_SARC",
            "77bn_ODST_CSNCO",
            "77bn_ODST_SOO",
            "7bn_ODST_OC",
            "77bn_ODST_EL",
            "77bn_ODST_OSNCO",
            "77bn_ODST_TC"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
        };
        author = "Capt M. Chiriboga";
        authors[] = {"Capt M. Chiriboga"};
    };
};

class CfgEditorCategories
{
	class 77_edcat // Category class, you point to it in editorCategory property
	{
		displayName = "77th SMU/ODST Bn."; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class 77_edcat_o
	{
		displayName = "Men (ODST-MSOC 771)";
	};
};

class CfgFactionClasses {
    class 77bn_ODST {
        displayName = "77bn";
        side = 1;
        flag = "\OPTRE_Core\Data\flag_UNSC_ca.paa";
        icon = "\OPTRE_Core\Data\flag_UNSC_ca.paa";
        priority = 0;
    };
};

class CBA_Extended_EventHandlers_base;
class CfgVehicles {

    class OPTRE_UNSC_ODST_Soldier_Rifleman_AR;
    class OPTRE_UNSC_ODST_Soldier_Rifleman_AR_OCimport_01 : OPTRE_UNSC_ODST_Soldier_Rifleman_AR { scope = 0; class EventHandlers; };
    class OPTRE_UNSC_ODST_Soldier_Rifleman_AR_OCimport_02 : OPTRE_UNSC_ODST_Soldier_Rifleman_AR_OCimport_01 { class EventHandlers; };


    class 77bn_ODST_CSO : OPTRE_UNSC_ODST_Soldier_Rifleman_AR_OCimport_02 {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Critical Skills Operator";
        side = 1;
        faction = "77bn_ODST";
		editorSubcategory = "77_edcat_o";
		editorPreview = "\77_Units\data\77bn_ODST_CSO.jpg";
		icon = "iconMan"

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestR","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestR","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA5B","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5B","","","OPTRE_MA5_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1}}},{"77th_ODST_VestR",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_60Rnd_762x51_Mag_Tracer",5,60}}},{"OPTRE_ILCS_Rucksack_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 77bn_ODST_SARC : 77bn_ODST_CSO {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "SARC";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\77bn_ODST_SARC.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconManMedic";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_m_VestR","77th_ODST_m_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_m_VestR","77th_ODST_m_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_M7","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_M7","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_60Rnd_5x23mm_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_60Rnd_5x23mm_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ILCS_Rucksack_Medical";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M7","OPTRE_M7_silencer","OPTRE_M7_Laser","OPTRE_M7_Sight",{"OPTRE_60Rnd_5x23mm_Mag",60},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",5},{"OPTRE_60Rnd_5x23mm_Mag",3,60}}},{"77th_ODST_m_VestR",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_60Rnd_5x23mm_Mag_tracer",5,60}}},{"OPTRE_ILCS_Rucksack_Medical",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_m_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 77bn_ODST_CSNCO : 77bn_ODST_CSO {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Communications SNCO ";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\77bn_ODST_CSNCO.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconMan";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestB","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestB","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_BR55HB","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_BR55HB","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_36Rnd_95x40_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_36Rnd_95x40_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ANPRC_521_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_BR55HB","OPTRE_MA5Suppressor","","OPTRE_BR55HB_Scope",{"OPTRE_36Rnd_95x40_Mag",36},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",7},{"OPTRE_36Rnd_95x40_Mag",3,36}}},{"77th_ODST_VestB",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_36Rnd_95x40_Mag_Tracer",5,36}}},{"OPTRE_ANPRC_521_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 77bn_ODST_SOO : 77bn_ODST_CSO {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Special Operations Officer";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\77bn_ODST_SOO.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconManOfficer";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestSK","77th_ODST_Helmet","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestSK","77th_ODST_Helmet","ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA5B","OPTRE_M6C","ACE_VectorDay"};
        respawnWeapons[] = {"OPTRE_MA5B","OPTRE_M6C","ACE_VectorDay"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA5B","OPTRE_MA5Suppressor","","OPTRE_MA5_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",6},{"ACE_DAGR",1}}},{"77th_ODST_VestSK",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_60Rnd_762x51_Mag_Tracer",5,60}}},{"OPTRE_ILCS_Rucksack_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"ACE_VectorDay","","","",{},{},""},{"ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 7bn_ODST_OC : 77bn_ODST_CSO {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operations Chief";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\7bn_ODST_OC.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconManLeader";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_M295_BMR","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M295_BMR","","","OPTRE_BMR_Scope",{"OPTRE_25Rnd_762x51_Mag",25},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",6},{"OPTRE_25Rnd_762x51_Mag",3,25}}},{"77th_ODST_VestEL",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_25Rnd_762x51_Mag_Tracer",5,25}}},{"OPTRE_ILCS_Rucksack_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 77bn_ODST_EL : 77bn_ODST_CSO {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Element Leader";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\77bn_ODST_EL.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconManLeader";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_M45ATAC","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_M45ATAC","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45ATAC","","","OPTRE_M7_Sight",{"OPTRE_12Rnd_8Gauge_Pellets",12},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",5},{"OPTRE_12Rnd_8Gauge_Pellets",3,12}}},{"77th_ODST_VestEL",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_12Rnd_8Gauge_Pellets",5,12}}},{"OPTRE_ILCS_Rucksack_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 77bn_ODST_OSNCO : 7bn_ODST_OC {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operations SNCO";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\77bn_ODST_OSNCO.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconManLeader";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_M295_BMR","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_25Rnd_762x51_Mag","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M295_BMR","","","OPTRE_BMR_Scope",{"OPTRE_25Rnd_762x51_Mag",25},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",6},{"OPTRE_25Rnd_762x51_Mag",3,25}}},{"77th_ODST_VestEL",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_25Rnd_762x51_Mag_Tracer",5,25}}},{"OPTRE_ILCS_Rucksack_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class 77bn_ODST_TC : 77bn_ODST_EL {
        author = "Capt M. Chiriboga";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Chief";
        side = 1;
        faction = "77bn_ODST";
		editorPreview = "\77_Units\data\77bn_ODST_TC.jpg";
		editorSubcategory = "77_edcat_o";
		icon = "iconManLeader";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","NoGlasses"};

        uniformClass = "77_BDU_GRAY_Slim";

        linkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};
        respawnlinkedItems[] = {"77th_ODST_VestEL","77th_ODST_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"};

        weapons[] = {"OPTRE_M45ATAC","OPTRE_M6C","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_M45ATAC","OPTRE_M6C","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries","OPTRE_12Rnd_8Gauge_Pellets","OPTRE_12Rnd_127x40_Mag","Laserbatteries"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45ATAC","","","OPTRE_M7_Sight",{"OPTRE_12Rnd_8Gauge_Pellets",12},{},""},{},{"OPTRE_M6C","OPTRE_M6C_compensator","OPTRE_M6C_Laser","OPTRE_M6C_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"77_BDU_GRAY_Slim",{{"ACE_MapTools",1},{"ACE_Flashlight_MX991",1},{"ACE_microDAGR",1},{"ItemcTabHCam",1},{"ACE_RangeCard",1},{"ACE_EarPlugs",5},{"OPTRE_12Rnd_8Gauge_Pellets",3,12}}},{"77th_ODST_VestEL",{{"ACE_Clacker",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_epinephrine",2},{"ACE_morphine",2},{"OPTRE_16Rnd_127x40_Mag_Tracer",5,16},{"OPTRE_M9_Frag",2,1},{"OPTRE_12Rnd_8Gauge_Pellets",5,12}}},{"OPTRE_ILCS_Rucksack_Black",{{"ACE_elasticBandage",10},{"ACE_packingBandage",8},{"ACE_salineIV",1},{"ACE_splint",4},{"ACE_tourniquet",4},{"DemoCharge_Remote_Mag",2,1}}},"77th_ODST_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","tf_microdagr","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class WEST {

        class 77bn_ODST {
            name = "77bn";

            class Infantry {
                name = "Infantry";

                class 77bn_G_MSOTHQ {
                    name = "Team HQ";
                    side = 1;
                    faction = "77bn_ODST";
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "77bn_ODST_SOO";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "77bn_ODST_TC";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "77bn_ODST_OSNCO";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "77bn_ODST_CSNCO";
                    };
                };

                class 77bn_G_MSOCHQ {
                    name = "Company HQ";
                    side = 1;
                    faction = "77bn_ODST";
                    icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "MAJOR";
                        side = 1;
                        vehicle = "77bn_ODST_SOO";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "77bn_ODST_SOO";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "77bn_ODST_TC";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7bn_ODST_OC";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "77bn_ODST_CSNCO";
                    };
                };

                class 77bn_G_MSOTE {
                    name = "Tactical Element";
                    side = 1;
                    faction = "77bn_ODST";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "77bn_ODST_EL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "77bn_ODST_CSO";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "77bn_ODST_CSO";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "77bn_ODST_CSO";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "77bn_ODST_CSO";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "77bn_ODST_SARC";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};