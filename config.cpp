class CfgPatches
{
	class azw_Timer
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class azw_TimerScripts
	{
		dir = "azw_Timer\Scripts";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "azw_Timer";
		credits = "Time";
		author = "AndreZ";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"azw_Timer/Scripts/4_World"};
			};
		};
	};
};
