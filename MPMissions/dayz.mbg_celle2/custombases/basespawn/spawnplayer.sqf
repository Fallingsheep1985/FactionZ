private ["_incombat","_timeout"];
_wealth = player getVariable["cashMoney",0];
_timeout = player getVariable["combattimeout", 0];
_inCombat = if (_timeout >= diag_tickTime) then { true } else { false };

if (_inCombat) then {
	titleText ["You can't select a spawn point while in combat.", "PLAIN DOWN", 3];
	sleep 5;
	titleFadeOut 1;
} else {

	if (_wealth > basespawn_cost) then {
		titleText ["Spawning at base", "PLAIN DOWN", 3];
		player setPosATL factionspawnlocation;
		showCommandingMenu '';
		sleep 2;	
		_newwealth = _wealth - basespawn_cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
		titleText ["Spawned!", "PLAIN DOWN", 3];
		sleep 2;
		titleFadeOut 1;
	}else{
		titleText [format[("You need %1 vigils to spawn at your base!"),basespawn_cost], "PLAIN DOWN"];
		sleep 5;
		titleFadeOut 1;
	};
};