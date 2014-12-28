if (count (dayzPlayerLogin) > 0) then {

	_msg = dayzPlayerLogin;
	_charID		= _msg select 0;
	_inventory	= _msg select 1;
	_backpack	= _msg select 2;
	_survival 	= _msg select 3;
	_isNew 		= _msg select 4;
	//_state 		= _msg select 5;
	_version	= _msg select 5;
	_model		= _msg select 6;
	_newPlayer = false;

	if (count _msg > 7) then {
		_newPlayer = _msg select 8;
	};
}:


_lastMeal = dayz_lastMeal;
_lastDrink = dayz_lastDrink;
_daysSurvied = dayz_skilllevel;
_isDead = r_player_dead; 	
_isUnconscious = r_player_unconscious;
_isInfected = r_player_infected;	
_isBleeding = r_player_injured; 	
_isInPain = r_player_inpain; 	
_isShortOfBreathe = r_player_cardiac; 	
_hasLowBlood = r_player_lowblood;	
_totalBlood = r_player_blood; 	

_Hunger = dayz_hunger;
_Thirst = dayz_thirst
_Temperature = dayz_temperatur;

_world = toUpper(worldName);
_nearestCity = nearestLocations [getPos player, [""NameCityCapital"",""NameCity"",""NameVillage"",""NameLocal""],1000];
_town = ""Wilderness"";

_kills =        player getVariable["zombieKills",0];
_killsH =       player getVariable["humanKills",0];
_killsB =       player getVariable["banditKills",0];
_humanity =     player getVariable["humanity",0];
_headShots =    player getVariable["headShots",0];
_FPS = round diag_FPS