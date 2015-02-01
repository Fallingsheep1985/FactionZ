scriptName "Functions\misc\fn_selfActions.sqf";
/***********************************************************
	ADD ACTIONS FOR SELF
	- Function
	- [] call fnc_usec_selfActions;
************************************************************/
private["_playerUID","_traderType","_cursorTarget","_typeOfCursorTarget","_menClose","_hasBandage","_hasEpi","_hasMorphine","_hasBlood","_vehicle","_inVehicle","_color","_part"];
//Traders

_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_bag = unitBackpack player;
_classbag = typeOf _bag;
_isWater = 		(surfaceIsWater (position player)) or dayz_isSwimming;
_hasAntiB = 	"ItemAntibiotic" in magazines player;
_hasFuelE = 	"ItemJerrycanEmpty" in magazines player;
//boiled Water
_hasbottleitem = "ItemWaterbottle" in magazines player;
_hastinitem = false;
_cursorTarget = cursorTarget;
_magazinesPlayer = magazines player;
_typeOfCursorTarget = typeOf _cursorTarget;
_traderType = _typeOfCursorTarget;
_playerUID = getPlayerUID player;
{
    if (_x in magazines player) then {
        _hastinitem = true;
    };

} forEach boil_tin_cans;


_hasKnife = 	"ItemKnife" in weapons player;
_hasToolbox = 	"ItemToolbox" in weapons player;
_hasMatches = "ItemMatchbox" in items player;
//_hasTent = 		"ItemTent" in weapons player;
_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
_nearLight = 	nearestObject [player,"LitObject"];
_canPickLight = false;

if (!isNull _nearLight) then {
	if (_nearLight distance player < 4) then {
		_canPickLight = isNull (_nearLight getVariable ["owner",objNull]);
	};
};
_canDo = (!r_drag_sqf and !r_player_unconscious and !_onLadder);

    // Krixes Self Bloodbag
    if ("ItemBloodbag" in _magazinesPlayer) then {
        hasBagItem = true;
    } else { hasBagItem = false;};
    if((speed player <= 1) && hasBagItem && _canDo) then {
        if (s_player_selfBloodbag < 0) then {
            s_player_selfBloodbag = player addaction[("<t color=""#c70000"">" + ("Self Bloodbag") +"</t>"),"sheep\player_selfbloodbag.sqf","",5,false,true,"", ""];
        };
    } else {
        player removeAction s_player_selfBloodbag;
        s_player_selfBloodbag = -1;
    };

/////////////////////////////////////////////////////////////////////////////////////////////////DEPLOY BIKE START////////////////////////////////////////////////////////////////////////////////////////////////////
//Only Allow if player has perk

		if((speed player <= 1) && cursorTarget isKindOf "TT650_Civ" && _canDo) then {
			if (s_player_deploybike4 < 0) then {
				s_player_deploybike4 = player addaction[("<t color=""#007ab7"">" + ("Re-Pack Motorcycle") +"</t>"),"sheep\spawnbike\bike4.sqf","",5,false,true,"", ""];
			};
		} else {
			
			player removeAction s_player_deploybike4;
			s_player_deploybike4 = -1;
		};
		if((speed player <= 1) && cursorTarget isKindOf "Old_bike_TK_CIV_EP1" && _canDo) then {
			if (s_player_deploybike3 < 0) then {
				s_player_deploybike3 = player addaction[("<t color=""#007ab7"">" + ("Upgrade to Motorcycle") +"</t>"),"sheep\spawnbike\bike3.sqf","",5,false,true,"", ""];
			};
		} else {
			player removeAction s_player_deploybike3;
			s_player_deploybike3 = -1;
		};
		if((speed player <= 1) && cursorTarget isKindOf "Old_bike_TK_CIV_EP1" && _canDo) then {
			if (s_player_deploybike2 < 0) then {
				s_player_deploybike2 = player addaction[("<t color=""#007ab7"">" + ("Re-Pack Bike") +"</t>"),"sheep\spawnbike\bike2.sqf","",5,false,true,"", ""];
			};
		} else {		
			player removeAction s_player_deploybike2;
			s_player_deploybike2 = -1;
		};
/////////////////////////////////////////////////////////////////////////////////////////////////DEPLOY BIKE END////////////////////////////////////////////////////////////////////////////////////////////////////

//Grab Flare
if (_canPickLight and !dayz_hasLight) then {
	if (s_player_grabflare < 0) then {
		_text = getText (configFile >> "CfgAmmo" >> (typeOf _nearLight) >> "displayName");
		s_player_grabflare = player addAction [format[localize "str_actions_medical_15",_text], "\z\addons\dayz_code\actions\flare_pickup.sqf",_nearLight, 1, false, true, "", ""];
		s_player_removeflare = player addAction [format[localize "str_actions_medical_17",_text], "\z\addons\dayz_code\actions\flare_remove.sqf",_nearLight, 1, false, true, "", ""];
	};
} else {
	player removeAction s_player_grabflare;
	player removeAction s_player_removeflare;
	s_player_grabflare = -1;
	s_player_removeflare = -1;
};

if (!isNull cursorTarget and !_inVehicle and (player distance cursorTarget < 4)) then {	//Has some kind of target
	_isHarvested = cursorTarget getVariable["meatHarvested",false];
	_isVehicle = cursorTarget isKindOf "AllVehicles";
	_isVehicletype = typeOf cursorTarget in ["ATV_US_EP1","ATV_CZ_EP1"];
	
	
		
	_isMan = cursorTarget isKindOf "Man";
	_ownerID = cursorTarget getVariable ["characterID","0"];
	_isAnimal = cursorTarget isKindOf "Animal";
	_isDog =  (cursorTarget isKindOf "DZ_Pastor" || cursorTarget isKindOf "DZ_Fin");
	_isZombie = cursorTarget isKindOf "zZombie_base";
	_isDestructable = cursorTarget isKindOf "BuiltItems";
	_isTent = cursorTarget isKindOf "TentStorage";
	_isnewstorage = cursorTarget isKindOf "StorageShed_DZ";
	_isFuel = false;
	_isAlive = alive cursorTarget;
	_canmove = canmove cursorTarget;
	_text = getText (configFile >> "CfgVehicles" >> typeOf cursorTarget >> "displayName");
	
	
	_rawmeat = meatraw;
	_hasRawMeat = false;
		{
			if (_x in magazines player) then {
				_hasRawMeat = true;
			};
		} forEach _rawmeat; 
	
	
	if (_hasFuelE) then {
		_isFuel = (cursorTarget isKindOf "Land_Ind_TankSmall") or (cursorTarget isKindOf "Land_fuel_tank_big") or (cursorTarget isKindOf "Land_fuel_tank_stairs") or (cursorTarget isKindOf "Land_wagon_tanker");
	};
	//diag_log ("OWNERID = " + _ownerID + " CHARID = " + dayz_characterID + " " + str(_ownerID == dayz_characterID));
	
	//Allow player to delete objects
	if(_isDestructable and _hasToolbox and _canDo) then {
		if (s_player_deleteBuild < 0) then {
			s_player_deleteBuild = player addAction [format[localize "str_actions_delete",_text], "\z\addons\dayz_code\actions\remove.sqf",cursorTarget, 1, true, true, "", ""];
		};
	} else {
		player removeAction s_player_deleteBuild;
		s_player_deleteBuild = -1;
	};

	
	/*
	//Allow player to force save
	if((_isVehicle or _isTent) and _canDo and !_isMan) then {
		if (s_player_forceSave < 0) then {
			s_player_forceSave = player addAction [format[localize "str_actions_save",_text], "\z\addons\dayz_code\actions\forcesave.sqf",cursorTarget, 1, true, true, "", ""];
		};
	} else {
		player removeAction s_player_forceSave;
		s_player_forceSave = -1;
	};
	*/
	//flip vehicle
	if ((_isVehicletype) and !_canmove and _isAlive and (player distance cursorTarget >= 2) and (count (crew cursorTarget))== 0 and ((vectorUp cursorTarget) select 2) < 0.5) then {
		if (s_player_flipveh  < 0) then {
			s_player_flipveh = player addAction [format[localize "str_actions_flipveh",_text], "\z\addons\dayz_code\actions\player_flipvehicle.sqf",cursorTarget, 1, true, true, "", ""];		
		};	
	} else {
		player removeAction s_player_flipveh;
		s_player_flipveh = -1;
	};
	
	if((_isVehicle || _isTent || _isnewstorage) && _isAlive && !_isMan) then {
		if (s_player_checkGear < 0) then {
			s_player_checkGear = player addAction [("<t color=""#007ab7"">" + ("Cargo Check") +"</t>"), "sheep\cargocheck.sqf",_cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_checkGear;
		s_player_checkGear = -1;
	};
	//Allow player to fill jerrycan
	if(_hasFuelE and _isFuel and _canDo) then {
		if (s_player_fillfuel < 0) then {
			s_player_fillfuel = player addAction [localize "str_actions_self_10", "\z\addons\dayz_code\actions\jerry_fill.sqf",[], 1, false, true, "", ""];
		};
	} else {
		player removeAction s_player_fillfuel;
		s_player_fillfuel = -1;
	};
	
	if (!alive cursorTarget and _isAnimal and _hasKnife and !_isHarvested and _canDo) then {
		if (s_player_butcher < 0) then {
			s_player_butcher = player addAction [localize "str_actions_self_04", "\z\addons\dayz_code\actions\gather_meat.sqf",cursorTarget, 3, true, true, "", ""];
		};
	} else {
		player removeAction s_player_butcher;
		s_player_butcher = -1;
	};
	
	//Fireplace Actions check
	if (inflamed cursorTarget and _hasRawMeat and _canDo) then {
		if (s_player_cook < 0) then {
			s_player_cook = player addAction [localize "str_actions_self_05", "\z\addons\dayz_code\actions\cook.sqf",cursorTarget, 3, true, true, "", ""];
		};
	} else {
		player removeAction s_player_cook;
		s_player_cook = -1;
	};
	if (inflamed cursorTarget and (_hasbottleitem and _hastinitem) and _canDo) then {
		if (s_player_boil < 0) then {
			s_player_boil = player addAction [localize "str_actions_boilwater", "\z\addons\dayz_code\actions\boil.sqf",cursorTarget, 3, true, true, "", ""];
		};
	} else {
		player removeAction s_player_boil;
		s_player_boil = -1;
	};
	
	if(cursorTarget == dayz_hasFire and _canDo) then {
		if ((s_player_fireout < 0) and !(inflamed cursorTarget) and (player distance cursorTarget < 3)) then {
			s_player_fireout = player addAction [localize "str_actions_self_06", "\z\addons\dayz_code\actions\fire_pack.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_fireout;
		s_player_fireout = -1;
	};
	  //Allow player to set tent on fire
    if(_isTent and _hasMatches and _canDo and !_isMan) then {
        if (s_player_igniteTent < 0) then {
            s_player_igniteTent = player addAction [format["Burn down Tent."], "sheep\tent_ignite.sqf",cursorTarget, 1, true, true, "", ""];
        };
    } else {
        player removeAction s_player_igniteTent;
        s_player_igniteTent = -1;
    };
	//Packing my tent
	if(cursorTarget isKindOf "TentStorage" and _canDo and _ownerID == dayz_characterID) then {
		if ((s_player_packtent < 0) and (player distance cursorTarget < 3)) then {
			s_player_packtent = player addAction [localize "str_actions_self_07", "\z\addons\dayz_code\actions\tent_pack.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_packtent;
		s_player_packtent = -1;
		};
	
	//Sleep
	if(cursorTarget isKindOf "TentStorage" and _canDo and _ownerID == dayz_characterID) then {
		if ((s_player_sleep < 0) and (player distance cursorTarget < 3)) then {
			s_player_sleep = player addAction [localize "str_actions_self_sleep", "\z\addons\dayz_code\actions\player_sleep.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_sleep;
		s_player_sleep = -1;
	};
	
		// Remove Parts from Vehicles - By SilverShot.
	if( !_isMan and _canDo and _hasToolbox and (dayz_myCursorTarget != cursorTarget) and cursorTarget isKindOf "AllVehicles" and (getDammage cursorTarget < 0.95) ) then {
		_vehicle = cursorTarget;
		_invalidVehicle = (_vehicle isKindOf "Motorcycle") || (_vehicle isKindOf "Tractor") || (_vehicle isKindOf "Old_bike_TK_CIV_EP1"); //or (_vehicle isKindOf "ATV_US_EP1") or (_vehicle isKindOf "ATV_CZ_EP1"); 
		if( !_invalidVehicle ) then {
			{dayz_myCursorTarget removeAction _x} forEach s_player_removeActions;
			s_player_removeActions = [];
			dayz_myCursorTarget = _vehicle;

			_hitpoints = _vehicle call vehicle_getHitpoints;

			{
				_damage = [_vehicle,_x] call object_getHit;

				if( _damage < 0.15 ) then {

					//change "HitPart" to " - Part" rather than complicated string replace
					_cmpt = toArray (_x);
					_cmpt set [0,20];
					_cmpt set [1,toArray ("-") select 0];
					_cmpt set [2,20];
					_cmpt = toString _cmpt;

					_skip = true;
					if( _skip and _x == "HitFuel" ) then { _skip = false; _part = "PartFueltank"; _cmpt = _cmpt + "tank"};
					if( _skip and _x == "HitEngine" ) then { _skip = false; _part = "PartEngine"; };
					if( _skip and _x == "HitLFWheel" ) then { _skip = false; _part = "PartWheel"; };
					if( _skip and _x == "HitRFWheel" ) then { _skip = false; _part = "PartWheel"; };
					if( _skip and _x == "HitLBWheel" ) then { _skip = false; _part = "PartWheel"; };
					if( _skip and _x == "HitRBWheel" ) then { _skip = false; _part = "PartWheel"; };
					if( _skip and _x == "HitGlass1" ) then { _skip = false; _part = "PartGlass"; };
					if( _skip and _x == "HitGlass2" ) then { _skip = false; _part = "PartGlass"; };
					if( _skip and _x == "HitGlass3" ) then { _skip = false; _part = "PartGlass"; };
					if( _skip and _x == "HitGlass4" ) then { _skip = false; _part = "PartGlass"; };
					if( _skip and _x == "HitGlass5" ) then { _skip = false; _part = "PartGlass"; };
					if( _skip and _x == "HitGlass6" ) then { _skip = false; _part = "PartGlass"; };
					if( _skip and _x == "HitHRotor" ) then { _skip = false; _part = "PartVRotor"; };

					if (!_skip ) then {
						_string = format["<t color='#0096ff'>Remove%1</t>",_cmpt,_color]; //Remove - Part
						_handle = dayz_myCursorTarget addAction [_string, "sheep\ss_remove.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
						s_player_removeActions set [count s_player_removeActions,_handle];
					};
				};

			} forEach _hitpoints;
		};
	};
	//Repairing Vehicles
	if ((dayz_myCursorTarget != cursorTarget) and _isVehicle and !_isMan and _hasToolbox and (damage cursorTarget < 1)) then {
		_vehicle = cursorTarget;
		{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;
		s_player_repairActions = [];
		dayz_myCursorTarget = _vehicle;

		_allFixed = true;
		_hitpoints = _vehicle call vehicle_getHitpoints;
		
		{
			_damage = [_vehicle,_x] call object_getHit;
			_part = "PartGeneric";
			
			//change "HitPart" to " - Part" rather than complicated string replace
			_cmpt = toArray (_x);
			_cmpt set [0,20];
			_cmpt set [1,toArray ("-") select 0];
			_cmpt set [2,20];
			_cmpt = toString _cmpt;
				
			if(["Engine",_x,false] call fnc_inString) then {
				_part = "PartEngine";
			};
					
			if(["HRotor",_x,false] call fnc_inString) then {
				_part = "PartVRotor"; //yes you need PartVRotor to fix HRotor LOL
			};

			if(["Fuel",_x,false] call fnc_inString) then {
				_part = "PartFueltank";
			};
			
			if(["Wheel",_x,false] call fnc_inString) then {
				_part = "PartWheel";

			};
					
			if(["Glass",_x,false] call fnc_inString) then {
				_part = "PartGlass";
			};

			// get every damaged part no matter how tiny damage is!
			if (_damage > 0) then {
				
				_allFixed = false;
				_color = "color='#ffff00'"; //yellow
				if (_damage >= 0.5) then {_color = "color='#ff8800'";}; //orange
				if (_damage >= 0.9) then {_color = "color='#ff0000'";}; //red

				_string = format["<t %2>Repair%1</t>",_cmpt,_color]; //Repair - Part
				_handle = dayz_myCursorTarget addAction [_string, "\z\addons\dayz_code\actions\repair.sqf",[_vehicle,_part,_x], 0, false, true, "",""];
				s_player_repairActions set [count s_player_repairActions,_handle];

			};
					
		} forEach _hitpoints;
		if (_allFixed) then {
			_vehicle setDamage 0;
		};
	};

	if (_isMan and !_isAlive and !_isZombie) then {
		if (s_player_studybody < 0) then {
			s_player_studybody = player addAction [localize "str_action_studybody", "\z\addons\dayz_code\actions\study_body.sqf",cursorTarget, 0, false, true, "",""];
		};
		if (s_player_studybody2 < 0) then {
			s_player_studybody2 = player addAction [("<t color=""#FF0000"">"+("Check Wallet") + "</t>"), "ZSC\actions\check_wallet.sqf",cursorTarget, 0, false, true, "",""];
		};
	} else {
		player removeAction s_player_studybody;
		s_player_studybody = -1;
		player removeAction s_player_studybody2;
		s_player_studybody2 = -1;
	};
	if (_isMan && _isAlive && !_isZombie && !_isAnimal && !(_traderType in DoctorTrader) && !(_traderType in HunterTrader)&& !(_traderType in MechanicTrader)&& !(_traderType in AmmoTrader) && (player distance cursorTarget < 5)) then {
		if (s_givemoney_dialog < 0) then {
			s_givemoney_dialog = player addAction [format["Give Money to %1", (name cursorTarget)], "ZSC\actions\give_player_dialog.sqf",cursorTarget, 3, true, true, "", ""];
		};
	} else {
		player removeAction s_givemoney_dialog;
		s_givemoney_dialog = -1;
	};
	
	if(typeOf CursorTarget in ZSC_MoneyStorage && (player distance cursorTarget < 5)) then {
		if (s_bank_dialog < 0) then {
				s_bank_dialog = player addAction ["Money Storage", "ZSC\actions\bank_dialog.sqf",cursorTarget, 3, true, true, "", ""];	
		};
	} else {
     	player removeAction s_bank_dialog;
		s_bank_dialog = -1;
	};

	// cars 
	if( _isVehicle && !_isMan && _isAlive && !(cursorTarget isKindOf "Bicycle") && (player distance cursorTarget < 5)) then {		
		if (s_bank_dialog2 < 0) then {
			s_bank_dialog2 = player addAction ["Money Storage", "ZSC\actions\bank_dialog.sqf",cursorTarget, 3, true, true, "", ""];
		};			
	} else {		
		player removeAction s_bank_dialog2;
		s_bank_dialog2 = -1;
	};
	
	// START OF CLOTHES
    if (_isMan and !_isAlive and !_isZombie) then {
    if (s_clothes < 0) then {
            s_clothes = player addAction ["Take Clothes", "sheep\clothes.sqf",cursorTarget, 0, false, true, "",""];
        };
    } else {
        player removeAction s_clothes;
        s_clothes = -1;
    };
    // END OF CLOTHES 

	//Traders
	//Hunter menu
		if (_isMan and _isAlive and !_isZombie and !_isAnimal and (_traderType in HunterTrader)) then {
		if (s_player_buy1 < 0) then {
			s_player_buy1 = player addAction [format[("<t color=""#007ab7"">" + ("Trade") +"</t>"),Bloodbag_Cost], "trader\Hunter\open_dialog.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy1;
		s_player_buy1 = -1;
	};
	//Doctor menu
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and (_traderType in DoctorTrader)) then {
		if (s_player_buy2 < 0) then {
			s_player_buy2 = player addAction [format[("<t color=""#007ab7"">" + ("Trade") +"</t>"),Bloodbag_Cost], "trader\Medic\open_dialog.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy2;
		s_player_buy2 = -1;
	};
	//Mechanic menu
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and (_traderType in MechanicTrader)) then {
		if (s_player_buy3 < 0) then {
			s_player_buy3 = player addAction [format[("<t color=""#007ab7"">" + ("Trade") +"</t>"),Bloodbag_Cost], "trader\Mechanic\open_dialog.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy3;
		s_player_buy3 = -1;
	};
	//Ammo menu
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and (_traderType in AmmoTrader)) then {
		if (s_player_buy4 < 0) then {
			s_player_buy4 = player addAction [format[("<t color=""#007ab7"">" + ("Trade") +"</t>"),Bloodbag_Cost], "trader\ammo\open_dialog1.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy4;
		s_player_buy4 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and (_traderType in GambleTrader)) then {
		if (s_player_gamble < 0) then {
            s_player_gamble = player addAction [("<t color='#c30000'>")+("Play Slots")+("</t>"), "slotmachine\open_dialog.sqf","",5,false,true,"",""];
		};
	}else{
		player removeAction s_player_gamble;
		s_player_gamble = -1;
	};
	// Bank Robbery
_bankrobbery = cursorTarget isKindOf "Laptop_EP1";
    if ((speed player <= 1) && _bankrobbery && (player distance cursorTarget < 5)) then {
        if (s_player_bankrob < 0) then {
            s_player_bankrob = player addAction ["Rob the bank","rob\robbank.sqf",cursorTarget, 0, false, true, "",""];
        };
    } else {
        player removeAction s_player_bankrob;
        s_player_bankrob = -1;
    };
//Pay for healing
if (_isMan and _isAlive and !_isZombie and !_isAnimal and (_traderType in NurseTrader)) then {	
		if (s_fast_med_dialog1 < 0) then {
			s_fast_med_dialog1 = player addAction ["<t color='#0059FF'>Heal</t>", "sheep\payheal.sqf",_cursorTarget, 3, true, true, "", ""];
		};
	} else {		
		player removeAction s_fast_med_dialog1;
		s_fast_med_dialog1 = -1;
	};
//////////////////////////////////////
//		FLAGPOLE					//
//////////////////////////////////////

	if ((canscan) &&(AdminPerk9 || Faction1Perk9 || Faction2Perk9 || Faction3Perk9 || Faction4Perk9 || Faction5Perk9 || Faction6Perk9 || Faction7Perk9 || Faction8Perk9 || Faction9Perk9 || Faction10Perk9))then {
		if (s_player_flag < 0) then {
			s_player_flag = player addAction [("<t color=""#c30000"">" + ("Scan Area") +"</t>"), "custombases\scan\scanMenu.sqf", cursorTarget, 1, true, true, "", ""];
		};	
	} else {	
		player removeAction s_player_flag;
		s_player_flag = -1;
	};
	
/////////////////////////////////////

	//Dog
	if (_isDog and _isAlive and (_hasRawMeat) and _canDo and _ownerID == "0" and player getVariable ["dogID", 0] == 0) then {
		if (s_player_tamedog < 0) then {
			s_player_tamedog = player addAction [localize "str_actions_tamedog", "\z\addons\dayz_code\actions\tame_dog.sqf", cursorTarget, 1, false, true, "", ""];
		};
	} else {
		player removeAction s_player_tamedog;
		s_player_tamedog = -1;
	};
	
	if (_isDog and _ownerID == dayz_characterID and _isAlive and _canDo) then {
		_dogHandle = player getVariable ["dogID", 0];
		if (s_player_feeddog < 0 and _hasRawMeat) then {
			s_player_feeddog = player addAction [localize "str_actions_feeddog","\z\addons\dayz_code\actions\dog\feed.sqf",[_dogHandle,0], 0, false, true,"",""];
		};
		if (s_player_waterdog < 0 and "ItemWaterbottle" in magazines player) then {
			s_player_waterdog = player addAction [localize "str_actions_waterdog","\z\addons\dayz_code\actions\dog\feed.sqf",[_dogHandle,1], 0, false, true,"",""];
		};
		if (s_player_staydog < 0) then {
			_lieDown = _dogHandle getFSMVariable "_actionLieDown";
			if (_lieDown) then { _text = "str_actions_liedog"; } else { _text = "str_actions_sitdog"; };
			s_player_staydog = player addAction [localize _text,"\z\addons\dayz_code\actions\dog\stay.sqf", _dogHandle, 5, false, true,"",""];
		};
		if (s_player_trackdog < 0) then {
			s_player_trackdog = player addAction [localize "str_actions_trackdog","\z\addons\dayz_code\actions\dog\track.sqf", _dogHandle, 4, false, true,"",""];
		};
		if (s_player_barkdog < 0) then {
			s_player_barkdog = player addAction [localize "str_actions_barkdog","\z\addons\dayz_code\actions\dog\speak.sqf", cursorTarget, 3, false, true,"",""];
		};
		if (s_player_warndog < 0) then {
			_warn = _dogHandle getFSMVariable "_watchDog";
			if (_warn) then { _text = "Quiet"; _warn = false; } else { _text = "Alert"; _warn = true; };
			s_player_warndog = player addAction [format[localize "str_actions_warndog",_text],"\z\addons\dayz_code\actions\dog\warn.sqf",[_dogHandle, _warn], 2, false, true,"",""];		
		};
		if (s_player_followdog < 0) then {
			s_player_followdog = player addAction [localize "str_actions_followdog","\z\addons\dayz_code\actions\dog\follow.sqf",[_dogHandle,true], 6, false, true,"",""];
		};
	} else {
		player removeAction s_player_feeddog;
		s_player_feeddog = -1;
		player removeAction s_player_waterdog;
		s_player_waterdog = -1;
		player removeAction s_player_staydog;
		s_player_staydog = -1;
		player removeAction s_player_trackdog;
		s_player_trackdog = -1;
		player removeAction s_player_barkdog;
		s_player_barkdog = -1;
		player removeAction s_player_warndog;
		s_player_warndog = -1;
		player removeAction s_player_followdog;
		s_player_followdog = -1;
	};
} else {
	//Engineering
		//Remove Parts
	{silver_myCursorTarget removeAction _x} forEach s_player_removeActions;s_player_removeActions = [];
	silver_myCursorTarget = objNull;

	{dayz_myCursorTarget removeAction _x} forEach s_player_repairActions;s_player_repairActions = [];
	player removeAction s_player_repair_crtl;
	s_player_repair_crtl = -1;
	dayz_myCursorTarget = objNull;
	//Others
	player removeAction s_player_forceSave;
	s_player_forceSave = -1;
	player removeAction s_player_flipveh;
	s_player_flipveh = -1;
	player removeAction s_player_sleep;
	s_player_sleep = -1;
	player removeAction s_player_deleteBuild;
	s_player_deleteBuild = -1;
	player removeAction s_player_butcher;
	s_player_butcher = -1;
	player removeAction s_player_cook;
	s_player_cook = -1;
	player removeAction s_player_boil;
	s_player_boil = -1;
	player removeAction s_player_fireout;
	s_player_fireout = -1;
	player removeAction s_player_packtent;
	s_player_packtent = -1;
	player removeAction s_player_fillfuel;
	s_player_fillfuel = -1;
	player removeAction s_player_studybody;
	s_player_studybody = -1;
	//Dog
	player removeAction s_player_tamedog;
	s_player_tamedog = -1;
	player removeAction s_player_feeddog;
	s_player_feeddog = -1;
	player removeAction s_player_waterdog;
	s_player_waterdog = -1;
	player removeAction s_player_staydog;
	s_player_staydog = -1;
	player removeAction s_player_trackdog;
	s_player_trackdog = -1;
	player removeAction s_player_barkdog;
	s_player_barkdog = -1;
	player removeAction s_player_warndog;
	s_player_warndog = -1;
	player removeAction s_player_followdog;
	s_player_followdog = -1;

		//Misc
	player removeAction s_player_deploybike1;
	s_player_deploybike1 = 	-1;
	player removeAction s_player_deploybike2;
	s_player_deploybike2 = 	-1;
	player removeAction s_player_deploybike3;
	s_player_deploybike3 = 	-1;
	player removeAction s_player_deploybike4;
	s_player_deploybike4 = 	-1;
	
	player removeAction s_player_checkGear;
	s_player_checkGear = -1;
	
	player removeAction s_clothes;
    s_clothes = -1;
	player removeAction s_givemoney_dialog;
	s_givemoney_dialog = -1;
	player removeAction s_bank_dialog;
	s_bank_dialog = -1;
	player removeAction s_bank_dialog2;
	s_bank_dialog2 = -1;
	player removeAction s_player_studybody2;
	s_player_studybody2 = -1;		
	player removeAction s_player_buy1;
	s_player_buy1 = -1;
	player removeAction s_player_buy2;
	s_player_buy2 = -1;
	player removeAction s_player_buy3;
	s_player_buy3 = -1;
	player removeAction s_player_buy4;
	s_player_buy4 = -1;
	player removeAction s_player_igniteTent;
	s_player_igniteTent = -1;
	player removeAction s_player_flag;
	s_player_flag = -1;
	player removeAction s_player_gamble;
	s_player_gamble = -1;
	player removeAction s_player_selfBloodbag;
    s_player_selfBloodbag = -1;
	player removeAction s_fast_med_dialog1;
	s_fast_med_dialog1 = -1;
	player removeAction s_player_bankrob;
    s_player_bankrob = -1;
	
};

// ----------------------------- / Drink water \ ----------------------
private["_playerPos","_canDrink","_isPond","_isWell","_pondPos","_objectsWell","_objectsPond","_display"];
_canDrink = false;// spawn fix
_playerPos = getPosATL player;
_canDrink = count nearestObjects [_playerPos, ["Land_pumpa","Land_water_tank"], 4] > 0;
_isPond = false;
_isWell = false;
_pondPos = [];
_objectsWell = [];
_maxheight = 1;

 if ((getPos (player) select 2) > _maxheight) then {
	_canDrink = false;
    };
 
 if (!_canDrink) then {
	 if (_isWater)then{
		_canDrink = true;
	 };
 };
if (!_canDrink) then {
    _objectsWell = nearestObjects [_playerPos, [], 4];
    {
        //Check for Well
        _isWell = ["_well",str(_x),false] call fnc_inString;
        if (_isWell) then {
			_canDrink = true;
		};
    } forEach _objectsWell;
};
 
if (!_canDrink) then {
    _objectsPond = nearestObjects [_playerPos, [], 50];
    {
        //Check for pond
        _isPond = ["pond",str(_x),false] call fnc_inString;
        if (_isPond) then {
            _pondPos = (_x worldToModel _playerPos) select 2;
            if (_pondPos < 0) then {
                _canDrink = true;
            };
        };
    } forEach _objectsPond;
};
 
if (_canDrink) then {
        if (s_player_drinkWater < 0) then {
            s_player_drinkWater = player addaction[("<t color=""#0000c7"">" + (localize "STR_action_drink") +"</t>"),"sheep\drink_water\drink_water.sqf"];
        };
    } else {
        player removeAction s_player_drinkWater;
        s_player_drinkWater = -1;
    };
// ----------------------------- / Drink water \ ----------------------
//Dog actions on player self
_dogHandle = player getVariable ["dogID", 0];
if (_dogHandle > 0) then {
	_dog = _dogHandle getFSMVariable "_dog";
	_ownerID = "0";
	if (!isNull cursorTarget) then { _ownerID = cursorTarget getVariable ["characterID","0"]; };
	if (_canDo and !_inVehicle and alive _dog and _ownerID != dayz_characterID) then {
		if (s_player_movedog < 0) then {
			s_player_movedog = player addAction [localize "str_actions_movedog", "\z\addons\dayz_code\actions\dog\move.sqf", player getVariable ["dogID", 0], 1, false, true, "", ""];
		};
		if (s_player_speeddog < 0) then {
			_text = "Walk";
			_speed = 0;
			if (_dog getVariable ["currentSpeed",1] == 0) then { _speed = 1; _text = "Run"; };
			s_player_speeddog = player addAction [format[localize "str_actions_speeddog", _text], "\z\addons\dayz_code\actions\dog\speed.sqf",[player getVariable ["dogID", 0],_speed], 0, false, true, "", ""];
		};
		if (s_player_calldog < 0) then {
			s_player_calldog = player addAction [localize "str_actions_calldog", "\z\addons\dayz_code\actions\dog\follow.sqf", [player getVariable ["dogID", 0], true], 2, false, true, "", ""];
		};
	};
} else {
	player removeAction s_player_movedog;		
	s_player_movedog =		-1;
	player removeAction s_player_speeddog;
	s_player_speeddog =		-1;
	player removeAction s_player_calldog;
	s_player_calldog = 		-1;
};
