systemChat ("Custom Loadout - Started");
DebugLoadout = false;
//Clothing 10 is missing on purpose!!
SkinList = Clothing1 + Clothing2 + Clothing3 + Clothing4 + Clothing5 + Clothing6 + Clothing7 + Clothing8 + Clothing9 + Clothing11  + Clothing12  + Clothing13  + Clothing14  + Clothing15  + Clothing16  + Clothing17  + Clothing18  + Clothing19 + Clothing20 + Clothing21+ Clothing22+ Clothing23+ Clothing24+ Clothing25+ Clothing26+ Clothing27+ Clothing28;

sleep 20;
if (DebugLoadout) then {
	systemChat ("Custom Loadout - Phase 1");
};
//Variables
_myModel = typeOf player;
_mags = magazines player;
_weapons = weapons player;
_backpack = unitBackpack player;	
_isNew = false;


//Misc Items
_Medic = ["ItemAntibiotic","ItemBloodbag","ItemEpinephrine","ItemMorphine"];
_Tools = ["ItemMap","ItemFlashlight"];
_ToolBox = "ItemToolbox";
_Binocs = "Binocular";
_RangeFinder = "Binocular_Vector";
//_special = "ItemShed";
_special = "ItemTent";

dayz_playerUID = getPlayerUID player;
sleep 20;

_myModel = typeOf player; // check again to make sure

if !(_myModel in SkinList) then {
	_isNew = true;
	if (DebugLoadout) then {
		cutText [format[("Is New Player"),_mymodel], "PLAIN DOWN"];
	};
}else{
	_isNew = false;
	if (DebugLoadout) then {
		cutText [format[("Is Returning Player"),_mymodel], "PLAIN DOWN"];
	};
};
sleep 20;
//Check second time after load in
if !(_myModel in SkinList) then {
	_isNew = true;
			//play intro music for new spawn / respawn
		[] execVM "sheep\sheepintro.sqf";
	if (DebugLoadout) then {
		cutText [format[("Is New Player"),_mymodel], "PLAIN DOWN"];
	};
}else{
	_isNew = false;
	if (DebugLoadout) then {
		cutText [format[("Is Returning Player"),_mymodel], "PLAIN DOWN"];
	};
};
if (DebugLoadout) then {
	systemChat ("Custom Loadout - Phase 3");
};	
	//Spawn Fix
	if (_isNew) then {
		if (DebugLoadout) then {
			cutText [format[("Preparing Loadout"),_mymodel], "PLAIN DOWN"];
		};
 		
		//play intro music for new spawn / respawn
		[] execVM "sheep\sheepintro.sqf";
			
		if (dayz_playerUID in AdminUidLoadout) then {
			if (DebugLoadout) then {
				cutText [format[("Loading: Admin Loadout"),_mymodel], "PLAIN DOWN"];
			};
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
			
		};
		/////////////////////////////////////////////////////////////////////////////
		//					FACTION 1 - NAME OF FACTION HERE
		/////////////////////////////////////////////////////////////////////////////
		if (dayz_playerUID in FactionLoadout1) then {

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
			
		};
		/////////////////////////////////////////////////////////////////////////////
		//					FACTION 2 - NAME OF FACTION HERE
		/////////////////////////////////////////////////////////////////////////////
		if (dayz_playerUID in FactionLoadout2) then {

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
			
		};
		/////////////////////////////////////////////////////////////////////////////
		//					FACTION 3 - NAME OF FACTION HERE
		/////////////////////////////////////////////////////////////////////////////
		if (dayz_playerUID in FactionLoadout3) then {

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
			
		};
		/////////////////////////////////////////////////////////////////////////////
		//					FACTION 4 - NAME OF FACTION HERE
		/////////////////////////////////////////////////////////////////////////////
		if (dayz_playerUID in FactionLoadout4) then {

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
			
		};


		//Default Loadout for all other players
		if !(dayz_playerUID in AdminUidLoadout) then {

			
			//Loadout
			_primAdmin = "";
			_pistolAdmin = "";
			_pistolMagAdmin = "";

			_magsAdmin =["ItemBandage","ItemPainkiller"];
			_skin = "Survivor2_DZ";
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
			

		};
		if (DebugLoadout) then {
			systemChat ("Custom Loadout - Done loading!");
		};
	}else{
		if (DebugLoadout) then {	
			systemChat ("Custom Loadout - Already Geared!");
		};
	};