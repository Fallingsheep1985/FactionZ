private ["_loot","_robbing"];

_player = player;
_wealth = player getVariable["cashMoney",0];
bankloot1 = 100;
bankloot2 = 250;
bankloot3 = 500;
bankloot4 = 750;
bankloot5 = 1000;
bankloot6 = 1250;
// Checks if script is active, thanks Halvhjearne <3
if(isNil "script_in_progress")then{
        script_in_progress = false;
};
//script can only happen every 10min
if(script_in_progress)exitwith{
        cutText [format["The bank was recently robbed, There is nothing left!"], "PLAIN DOWN"];
		sleep 600;
		script_in_progress = false;
};
script_in_progress = true;
// End Checks if Script is active

	execVM "rob\zone_check.sqf";

	cutText [format["You are robbing the bank! Police have been alerted."], "PLAIN DOWN"];
	systemChat "The Bank is getting robbed!";
	sleep 30;
	execVM "rob\ai.sqf";

	sleep 30;
	cutText [format["4 minutes left..."], "PLAIN DOWN"];
	sleep 60;
	cutText [format["3 minutes left..."], "PLAIN DOWN"];
	sleep 60;
	cutText [format["2 minutes left..."], "PLAIN DOWN"];
	sleep 60;
	cutText [format["1 minute left..."], "PLAIN DOWN"];
	sleep 60;
	player playActionNow "Medic";
	sleep 8;
	if (failRob == 1)exitWith{
	titleText [format[("You failed to rob the bank!"),bankloot1], "PLAIN DOWN"];
	} else {
	_robComplete = 1;
	};

if (_robComplete == 1) then {


	_loot=floor(random 6);
		if (_loot == 0) then {
			titleText [format[("You stole some change, %1 Vigils!"),bankloot1], "PLAIN DOWN"];
			_newwealth = _wealth + bankloot1;
			_player setVariable["cashMoney",_newwealth, true];
			_player setVariable ["moneychanged",1,true]; 
			dayzPlayerSave = [_player,(magazines _player),true,true] ;
			publicVariableServer "dayzPlayerSave"; 
		};
		if (_loot == 1) then {
		titleText [format[("You stole a small amount, %1 Vigils!"),bankloot2], "PLAIN DOWN"];
			_newwealth = _wealth + bankloot2;
			_player setVariable["cashMoney",_newwealth, true];
			_player setVariable ["moneychanged",1,true]; 
			dayzPlayerSave = [_player,(magazines _player),true,true] ;
			publicVariableServer "dayzPlayerSave"; 
		};	
		if (_loot == 2) then {
		titleText [format[("You stole %1 Vigils!"),bankloot3], "PLAIN DOWN"];
			_newwealth = _wealth + bankloot3;
			_player setVariable["cashMoney",_newwealth, true];
			_player setVariable ["moneychanged",1,true]; 
			dayzPlayerSave = [_player,(magazines _player),true,true] ;
			publicVariableServer "dayzPlayerSave"; 
		};
		if (_loot == 3) then {
		titleText [format[("You stole a fair amount, %1 Vigils!"),bankloot4], "PLAIN DOWN"];
			_newwealth = _wealth + bankloot4;
			_player setVariable["cashMoney",_newwealth, true];
			_player setVariable ["moneychanged",1,true]; 
			dayzPlayerSave = [_player,(magazines _player),true,true] ;
			publicVariableServer "dayzPlayerSave"; 
		};		
		if (_loot == 4) then {
		titleText [format[("You stole a large amount, %1 Vigils!"),bankloot5], "PLAIN DOWN"];
			_newwealth = _wealth + bankloot5;
			_player setVariable["cashMoney",_newwealth, true];
			_player setVariable ["moneychanged",1,true]; 
			dayzPlayerSave = [_player,(magazines _player),true,true] ;
			publicVariableServer "dayzPlayerSave"; 
		};
		if (_loot == 5) then {
		titleText [format[("You stole the jackpot! %1 Vigils"),bankloot6], "PLAIN DOWN"];
			_newwealth = _wealth + bankloot6;
			_player setVariable["cashMoney",_newwealth, true];
			_player setVariable ["moneychanged",1,true]; 
			dayzPlayerSave = [_player,(magazines _player),true,true] ;
			publicVariableServer "dayzPlayerSave"; 
		};
	};
