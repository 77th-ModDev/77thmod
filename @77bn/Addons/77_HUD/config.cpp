class cfgPatches
{
    class 77_HUD
    {
		units[] = {};
		weapons[] = {};
        requiredVersion = 0.1;
		version = 0.2;
		requiredAddons[] = {
			"OPTRE_Core",
			"OPTRE_FunctionsLibrary",
			"OPTRE_UNSC_Units_Army"
			};
		author = "Chiriobga & A2";
		fileName = "77_HUD.pbo";
    };
};
class cfgFunctions
{
	class OPTRE
	{
		class HUDMonitors
		{
			file = "77_HUD\Functions\HUDMonitors";
			class HudLoad_MarrineEyeDisplay1{};
			class HudLoad_MarrineGlass1{};
			class HudLoad_ODST1{};
		};
	};
};