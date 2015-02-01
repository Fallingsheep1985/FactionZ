/*	
	INITILIZATION
*/
startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_instance = 35380;
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;
dayz_antihack = 0;
dayz_REsec = 0;
dayz_spawnselection = 0;
dayz_paraSpawn = false;
//Map size

//Base protection set up
canBuild = true;
//Load faction stuff
call compile preprocessFileLineNumbers "FactionControl.sqf";
call compile preprocessFileLineNumbers "TraderControl.sqf";
//Load in compiled functions
call compile preprocessFileLineNumbers "sheep\variables.sqf";				//Initilize the Variables (IMPORTANT: Must happen very early)
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "sheep\publicEH.sqf";				//Initilize the publicVariable event handlers
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";	//Functions used by CLIENT for medical
progressLoadingScreen 0.4;
call compile preprocessFileLineNumbers "ZSC\gold\ZSCinit.sqf";
progressLoadingScreen 0.7;
call compile preprocessFileLineNumbers "compiles.sqf";				//Compile regular functions
//Sheeps Tools
call compile preprocessFileLineNumbers "admintools\AdminList.sqf";
//Custom Right Click Actions
call compile preprocessFileLineNumbers "click_actions\init.sqf";
progressLoadingScreen 1.0;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

if ((!isServer) && (isNull player) ) then
{
waitUntil {!isNull player};
waitUntil {time > 3};
};

if ((!isServer) && (player != player)) then {
  waitUntil {player == player};
  waitUntil {time > 3};
};

if (isServer) then {
	_serverMonitor = 	[] execVM "\z\addons\dayz_server\system\server_monitor.sqf";

	//Load slot machine functions
	[]execVM "slotmachine\slots.sqf";
	//Sheeps Kill Pit
	//execVM "Custombases\sheepkillpit.sqf";
	//Bases
	execVM "Custombases\base1.sqf";
	execVM "Custombases\base2.sqf";
	execVM "Custombases\base3.sqf";
	execVM "Custombases\base4.sqf";
	execVM "Custombases\base5.sqf";
	execVM "Custombases\base6.sqf";
	execVM "Custombases\base7.sqf";
	execVM "Custombases\base8.sqf";
	execVM "Custombases\base9.sqf";
	execVM "Custombases\base10.sqf";
	execVM "Custombases\base11.sqf";
	//doctor trader
	execVM "trader\doctortraderCamp.sqf";// base around trader
	execVM "trader\doctortrader.sqf"; // the trader 
	//Hunter trader
	execVM "trader\huntertraderCamp.sqf";// base around trader
	execVM "trader\huntertrader.sqf"; // the trader
	//Mechanic Trader
	execVM "trader\mechanictraderCamp.sqf";
	execVM "trader\mechanictrader.sqf";
	//Gamble trader
	execVM "trader\gambletrader.sqf"; // the trader 
	//City Upgrade
	execVM "Custombases\CelleUpdate.sqf";
	//Lights
	axe_server_lampObjs =    compile preprocessFileLineNumbers "lights\fnc_returnLampWS.sqf";
    "axeLampObjects" addPublicVariableEventHandler {_id = (_this select 1) spawn axe_server_lampObjs};
	execVM "Custombases\extrastreetlights.sqf";
	
	//Ammo Trader
	//execVM "trader\ammotrader.sqf";
};

if (!isDedicated) then {
	//Conduct map operations
	0 fadeSound 0;
	waitUntil {!isNil "dayz_loadScreenMsg"};
	dayz_loadScreenMsg = (localize "STR_AUTHENTICATING");	
	//Run the player monitor
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = 	[] execVM "player_monitor.sqf";
	//Lights
	DZ_HouseLights = true;
	DZ_TowerLights = true;
	DZ_LightChance = 42;
	[] execVM "lights\local_lights_init.sqf";
	[] execVM "lights\street_lights.sqf";
};
//Custom Loadout
//[] execVM "CustomLoadout\Loadout.sqf"; //also call intro music so it only happens on new spawns
//Base Safe zones
execVM "custombases\CAGN\initiate.sqf";	
//Sheeps Tools
[] execVM "admintools\Activate.sqf";



