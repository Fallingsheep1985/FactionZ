private["_playerPos","_canDrink","_isPond","_isWell","_pondPos","_objectsWell","_objectsPond","_display","_stagnant_water_rates"];

// --------------------------
// Configuration
// --------------------------

_stagnant_water_rates = 25; // percent chance of having infected water (default = 25)

disableSerialization;
 
	if ((floor (random 100) < _stagnant_water_rates)) then {
	
		player playActionNow "PutDown";
		_nul = [objNull, player, rSAY, "drink_water"] call RE;
		r_player_infected = true;
		player setVariable["USEC_infected",true,true];
		player setVariable ["messing",[dayz_hunger,dayz_thirst],true];

		dayz_lastDrink = time;
		dayz_thirst = 0;

		//Ensure Control is visible
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		(_display displayCtrl 1302) ctrlShow true;
		cutText [(localize "STR_drink_stagnant_water"), "PLAIN DOWN"];
		
	} else {
		
		player playActionNow "PutDown";
		_nul = [objNull, player, rSAY, "drink_water"] call RE;
		dayz_lastDrink = time;
		dayz_thirst = 0;

		//Ensure Control is visible
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		(_display displayCtrl 1302) ctrlShow true;
		cutText [(localize "STR_drink_fresh_water"), "PLAIN DOWN"];
	};