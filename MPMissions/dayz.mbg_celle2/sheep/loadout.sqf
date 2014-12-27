systemChat ("Custom Loadout - Started");
sleep 10;
_playerUID = getPlayerUID player;
_myModel = typeOf player;


//Misc Items
_Medic = ["ItemAntibiotic","ItemBloodbag","ItemEpinephrine","ItemMorphine"];
_Tools = ["ItemMap","ItemFlashlight"];
_ToolBox = "ItemToolbox";
_Binocs = "Binocular";
_RangeFinder = "Binocular_Vector";
_special = "ItemShed";


//Admin Loadout
AdminUidLoadout = ["76561197960475835","76561198046457653","76561198087015545","0"];
	AdminPerk1 = true; //Binocs
	AdminPerk2 = true; //Rangefinder
	AdminPerk3 = true; //Pistol
	AdminPerk4 = true; //Tools
	AdminPerk5 = true; // medical supplies in backpack
	AdminPerk6 = true; //backpack
	AdminPerk7 = true; //Toolbox
	AdminPerk8 = true; //Deploy Bike
//FACTION 1 - NAME OF FACTION HERE
FactionLoadout1 =["","","",""];
	Faction1Perk1 = true; //Binocs
	Faction1Perk2 = false; //Rangefinder
	Faction1Perk3 = true; //Pistol
	Faction1Perk4 = false; //Tools
	Faction1Perk5 = false; // medical supplies in backpack
	Faction1Perk6 = true; //backpack
	Faction1Perk7 = true; // Toolbox
	Faction1Perk8 = false; //Deploy Bike
//FACTION 2 - NAME OF FACTION HERE
FactionLoadout2 =["","","",""];
	Faction2Perk1 = true; //Binocs
	Faction2Perk2 = false; //Rangefinder
	Faction2Perk3 = true; //Pistol
	Faction2Perk4 = false; //Tools
	Faction2Perk5 = false; // medical supplies in backpack
	Faction2Perk6 = true; //backpack
	Faction2Perk7 = true; // Toolbox
	Faction2Perk8 = false; //Deploy Bike
//FACTION 3 - NAME OF FACTION HERE
FactionLoadout3 =["","","",""];
	Faction3Perk1 = true; //Binocs
	Faction3Perk2 = false; //Rangefinder
	Faction3Perk3 = true; //Pistol
	Faction3Perk4 = false; //Tools
	Faction3Perk5 = false; // medical supplies in backpack
	Faction3Perk6 = true; //backpack
	Faction3Perk7 = true; // Toolbox
	Faction3Perk8 = false; //Deploybike
//FACTION 4 - NAME OF FACTION HERE
FactionLoadout4 =["","","",""];
	Faction4Perk1 = true; //Binocs
	Faction4Perk2 = false; //Rangefinder
	Faction4Perk3 = true; //Pistol
	Faction4Perk4 = false; //Tools
	Faction4Perk5 = false; // medical supplies in backpack
	Faction4Perk6 = true; //backpack
	Faction4Perk7 = true; // Toolbox
	Faction4Perk8 = false; // DeployBike

//Default Perks
	DefaultPerk1 = false; //Binocs
	DefaultPerk2 = false; //Rangefinder
	DefaultPerk3 = true; //Pistol
	DefaultPerk4 = false; //Tools
	DefaultPerk5 = false; // medical supplies in backpack
	DefaultPerk6 = false; //backpack
	DefaultPerk7 = true; // Toolbox
	DefaultPerk8 = true; // DeployBike

//Spawn Fix
if(_model == "Survivor2_DZ")then {
	systemChat ("Custom Loadout - Already Geared!");
 //Do nothing player is not new spawn
}else{
	systemChat ("Custom Loadout - Loading...in 20 seconds.");
	//wait for player to be in game
	sleep 10;
	systemChat ("Custom Loadout - Loading...in 10 seconds.");
	sleep 10;
	//play intro music for new spawn / respawn
	[] execVM "sheep\sheepintro.sqf";
	
	if (_playerUID in AdminUidLoadout) then {

		//Loadout
		_primAdmin = "LeeEnfield";
		_pistolAdmin = "glock17_EP1";
		_pistolMagAdmin = "17Rnd_9x19_glock17";

		_magsAdmin =["ItemBandage","10x_303","ItemPainkiller","10x_303"];
		_skin = "Sniper1_DZC";
		_packAdmin = "DZ_Assault_Pack_EP1";

		//clear gear
		removeAllWeapons player;	
		removeAllItems player;
		removeBackpack player;

		//Set skin
		if (_skin != _myModel) then {
			[dayz_playerUID,dayz_characterID,_skin] spawn player_humanityMorph;
			waitUntil {typeOf player != _myModel};
			//no ammo fix
			uiSleep 1;
		};
		
		//Special
		player addMagazine _special; //Special storage test
		
		//Add primary Weapon
		player addWeapon _primAdmin;
		//Add Magazines
		{player addMagazine _x;_qty=1;} count _magsAdmin;
		//Backpack
		if (AdminPerk6)then {
			//Add backpack
			player addBackpack _packAdmin;
			dayz_myBackpack = unitBackpack player;
		};
		//Binoculars
		if (AdminPerk1)then {
			//Add binocs
			player addWeapon _Binocs;
		};
		//RangeFinder
		if (AdminPerk2)then {
			//Add _RangeFinder
			player addWeapon _RangeFinder;
		};
		//Pistol
		if (AdminPerk3)then {
			//Add Mags
			player addWeapon _pistolAdmin;
			player addMagazine _pistolMagAdmin;
		};
		// Tools
		if (AdminPerk4)then {
			//Add Tools
			{player addWeapon _x;_qty=1;} count _Tools;
		};
		//Backpack Medic Items
		if (AdminPerk5)then {
			if (!isNull dayz_myBackpack) then {
				{dayz_myBackpack addMagazineCargoGlobal [_x, 1];_qty=1;} count (_Medic);
			};
		};
		if (AdminPerk7)then {
			//Add Tool box
			player addWeapon _Toolbox;
		};
		
		
		//switch to primary weapon on spawn
		player selectWeapon _primAdmin;
		//reload player to make sure he is ready to go
		reload player;
		
		systemChat ("Custom Loadout - Done loading!");
	};
	/////////////////////////////////////////////////////////////////////////////
	//					FACTION 1 - NAME OF FACTION HERE
	/////////////////////////////////////////////////////////////////////////////
	if (_playerUID in FactionLoadout1) then {

		//Loadout
		_primAdmin = "";
		_pistolAdmin = "glock17_EP1";
		_pistolMagAdmin = "17Rnd_9x19_glock17";

		_magsAdmin =["ItemBandage","ItemPainkiller"];
		_skin = "Sniper1_DZC";
		_packAdmin = "DZ_Assault_Pack_EP1";

		//clear gear
		removeAllWeapons player;	
		removeAllItems player;
		removeBackpack player;

		//Set skin
		if (_skin != _myModel) then {
			[dayz_playerUID,dayz_characterID,_skin] spawn player_humanityMorph;
			waitUntil {typeOf player != _myModel};
			//no ammo fix
			uiSleep 1;
		};

		//Add primary Weapon
		player addWeapon _primAdmin;
		//Add Magazines
		{player addMagazine _x;_qty=1;} count _magsAdmin;
		//Backpack
		if (Faction1Perk6)then {
			//Add backpack
			player addBackpack _packAdmin;
			dayz_myBackpack = unitBackpack player;
		};
		//Binoculars
		if (Faction1Perk1)then {
			//Add binocs
			player addWeapon _Binocs;
		};
		//RangeFinder
		if (Faction1Perk2)then {
			//Add _RangeFinder
			player addWeapon _RangeFinder;
		};
		//Pistol
		if (Faction1Perk3)then {
			//Add Mags
			player addWeapon _pistolAdmin;
			player addMagazine _pistolMagAdmin;
		};
		// Tools
		if (Faction1Perk4)then {
			//Add Tools
			{player addWeapon _x;_qty=1;} count _Tools;
		};
		//Backpack Medic Items
		if (Faction1Perk5)then {
			if (!isNull dayz_myBackpack) then {
				{dayz_myBackpack addMagazineCargoGlobal [_x, 1];_qty=1;} count (_Medic);
			};
		};
		if (Faction1Perk7)then {
			//Add Tool box
			player addWeapon _Toolbox;
		};

		//switch to primary weapon on spawn
		player selectWeapon _primAdmin;
		//reload player to make sure he is ready to go
		reload player;
		
		systemChat ("Custom Loadout - Done loading!");
	};
	/////////////////////////////////////////////////////////////////////////////
	//					FACTION 2 - NAME OF FACTION HERE
	/////////////////////////////////////////////////////////////////////////////
	if (_playerUID in FactionLoadout2) then {

		//Loadout
		_primAdmin = "";
		_pistolAdmin = "glock17_EP1";
		_pistolMagAdmin = "17Rnd_9x19_glock17";

		_magsAdmin =["ItemBandage","ItemPainkiller"];
		_skin = "Sniper1_DZC";
		_packAdmin = "DZ_Assault_Pack_EP1";

		//clear gear
		removeAllWeapons player;	
		removeAllItems player;
		removeBackpack player;

		//Set skin
		if (_skin != _myModel) then {
			[dayz_playerUID,dayz_characterID,_skin] spawn player_humanityMorph;
			waitUntil {typeOf player != _myModel};
			//no ammo fix
			uiSleep 1;
		};

		//Add primary Weapon
		player addWeapon _primAdmin;
		//Add Magazines
		{player addMagazine _x;_qty=1;} count _magsAdmin;
		//Backpack
		if (Faction2Perk6)then {
			//Add backpack
			player addBackpack _packAdmin;
			dayz_myBackpack = unitBackpack player;
		};
		//Binoculars
		if (Faction2Perk1)then {
			//Add binocs
			player addWeapon _Binocs;
		};
		//RangeFinder
		if (Faction2Perk2)then {
			//Add _RangeFinder
			player addWeapon _RangeFinder;
		};
		//Pistol
		if (Faction2Perk3)then {
			//Add Mags
			player addWeapon _pistolAdmin;
			player addMagazine _pistolMagAdmin;
		};
		// Tools
		if (Faction2Perk4)then {
			//Add Tools
			{player addWeapon _x;_qty=1;} count _Tools;
		};
		//Backpack Medic Items
		if (Faction2Perk5)then {
			if (!isNull dayz_myBackpack) then {
				{dayz_myBackpack addMagazineCargoGlobal [_x, 1];_qty=1;} count (_Medic);
			};
		};
		if (Faction2Perk7)then {
			//Add Tool box
			player addWeapon _Toolbox;
		};

		//switch to primary weapon on spawn
		player selectWeapon _primAdmin;
		//reload player to make sure he is ready to go
		reload player;
		
		systemChat ("Custom Loadout - Done loading!");
	};
	/////////////////////////////////////////////////////////////////////////////
	//					FACTION 3 - NAME OF FACTION HERE
	/////////////////////////////////////////////////////////////////////////////
	if (_playerUID in FactionLoadout1) then {

		//Loadout
		_primAdmin = "";
		_pistolAdmin = "glock17_EP1";
		_pistolMagAdmin = "17Rnd_9x19_glock17";

		_magsAdmin =["ItemBandage","ItemPainkiller"];
		_skin = "Sniper1_DZC";
		_packAdmin = "DZ_Assault_Pack_EP1";

		//clear gear
		removeAllWeapons player;	
		removeAllItems player;
		removeBackpack player;

		//Set skin
		if (_skin != _myModel) then {
			[dayz_playerUID,dayz_characterID,_skin] spawn player_humanityMorph;
			waitUntil {typeOf player != _myModel};
			//no ammo fix
			uiSleep 1;
		};

		//Add primary Weapon
		player addWeapon _primAdmin;
		//Add Magazines
		{player addMagazine _x;_qty=1;} count _magsAdmin;
		//Backpack
		if (Faction3Perk6)then {
			//Add backpack
			player addBackpack _packAdmin;
			dayz_myBackpack = unitBackpack player;
		};
		//Binoculars
		if (Faction3Perk1)then {
			//Add binocs
			player addWeapon _Binocs;
		};
		//RangeFinder
		if (Faction3Perk2)then {
			//Add _RangeFinder
			player addWeapon _RangeFinder;
		};
		//Pistol
		if (Faction3Perk3)then {
			//Add Mags
			player addWeapon _pistolAdmin;
			player addMagazine _pistolMagAdmin;
		};
		// Tools
		if (Faction3Perk4)then {
			//Add Tools
			{player addWeapon _x;_qty=1;} count _Tools;
		};
		//Backpack Medic Items
		if (Faction3Perk5)then {
			if (!isNull dayz_myBackpack) then {
				{dayz_myBackpack addMagazineCargoGlobal [_x, 1];_qty=1;} count (_Medic);
			};
		};
		if (Faction3Perk7)then {
			//Add Tool box
			player addWeapon _Toolbox;
		};

		//switch to primary weapon on spawn
		player selectWeapon _primAdmin;
		//reload player to make sure he is ready to go
		reload player;
		
		systemChat ("Custom Loadout - Done loading!");
	};
	/////////////////////////////////////////////////////////////////////////////
	//					FACTION 4 - NAME OF FACTION HERE
	/////////////////////////////////////////////////////////////////////////////
	if (_playerUID in FactionLoadout1) then {

		//Loadout
		_primAdmin = "";
		_pistolAdmin = "glock17_EP1";
		_pistolMagAdmin = "17Rnd_9x19_glock17";

		_magsAdmin =["ItemBandage","ItemPainkiller"];
		_skin = "Sniper1_DZC";
		_packAdmin = "DZ_Assault_Pack_EP1";

		//clear gear
		removeAllWeapons player;	
		removeAllItems player;
		removeBackpack player;

		//Set skin
		if (_skin != _myModel) then {
			[dayz_playerUID,dayz_characterID,_skin] spawn player_humanityMorph;
			waitUntil {typeOf player != _myModel};
			//no ammo fix
			uiSleep 1;
		};

		//Add primary Weapon
		player addWeapon _primAdmin;
		//Add Magazines
		{player addMagazine _x;_qty=1;} count _magsAdmin;
		//Backpack
		if (Faction4Perk6)then {
			//Add backpack
			player addBackpack _packAdmin;
			dayz_myBackpack = unitBackpack player;
		};
		//Binoculars
		if (Faction4Perk1)then {
			//Add binocs
			player addWeapon _Binocs;
		};
		//RangeFinder
		if (Faction4Perk2)then {
			//Add _RangeFinder
			player addWeapon _RangeFinder;
		};
		//Pistol
		if (Faction4Perk3)then {
			//Add Mags
			player addWeapon _pistolAdmin;
			player addMagazine _pistolMagAdmin;
		};
		// Tools
		if (Faction4Perk4)then {
			//Add Tools
			{player addWeapon _x;_qty=1;} count _Tools;
		};
		//Backpack Medic Items
		if (Faction4Perk5)then {
			if (!isNull dayz_myBackpack) then {
				{dayz_myBackpack addMagazineCargoGlobal [_x, 1];_qty=1;} count (_Medic);
			};
		};
		if (Faction4Perk7)then {
			//Add Tool box
			player addWeapon _Toolbox;
		};

		//switch to primary weapon on spawn
		player selectWeapon _primAdmin;
		//reload player to make sure he is ready to go
		reload player;
		
		systemChat ("Custom Loadout - Done loading!");
	};


	//Default Loadout for all other players
	if !(_playerUID in AdminUidLoadout) then {

		
		//Loadout
		_primAdmin = "";
		_pistolAdmin = "";
		_pistolMagAdmin = "";

		_magsAdmin =["ItemBandage","ItemPainkiller"];
		_skin = "Sniper1_DZC";
		_packAdmin = "DZ_Patrol_Pack_EP1";

		//clear gear
		removeAllWeapons player;	
		removeAllItems player;
		removeBackpack player;

		//Set skin
		if (_skin != _myModel) then {
			[dayz_playerUID,dayz_characterID,_skin] spawn player_humanityMorph;
			waitUntil {typeOf player != _myModel};
			//no ammo fix
			uiSleep 1;
		};

		//Add primary Weapon
		player addWeapon _primAdmin;
		//Add Magazines
		{player addMagazine _x;_qty=1;} count _magsAdmin;
		//Backpack
		if (DefaultPerk6)then {
			//Add backpack
			player addBackpack _packAdmin;
			dayz_myBackpack = unitBackpack player;
		};
		//Binoculars
		if (DefaultPerk1)then {
			//Add binocs
			player addWeapon _Binocs;
		};
		//RangeFinder
		if (DefaultPerk2)then {
			//Add _RangeFinder
			player addWeapon _RangeFinder;
		};
		//Pistol
		if (DefaultPerk3)then {
			//Add Mags
			player addWeapon _pistolAdmin;
			player addMagazine _pistolMagAdmin;
		};
		// Tools
		if (DefaultPerk4)then {
			//Add Tools
			{player addWeapon _x;_qty=1;} count _Tools;
		};
		//Backpack Items
		if (DefaultPerk5)then {
			if (!isNull dayz_myBackpack) then {
				{dayz_myBackpack addMagazineCargoGlobal [_x, 1];_qty=1;} count (_Medic);
			};
		};
		if (DefaultPerk7)then {
			//Add Tool box
			player addWeapon _Toolbox;
		};

		//switch to primary weapon on spawn
		player selectWeapon _primAdmin;
		//reload player to make sure he is ready to go
		reload player;
		
		systemChat ("Custom Loadout - Done loading!");
	};
};