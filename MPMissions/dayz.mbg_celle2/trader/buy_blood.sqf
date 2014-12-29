//Doctor items
_wealth = player getVariable["cashMoney",0];

_player = player;
if (_wealth > Bloodbag_Cost) then {
	_player addMagazine "ItemBloodbag";
	_newwealth = _wealth - Bloodbag_Cost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
} else {
	cutText [format[("You need %1 vigils to buy this!"),Bloodbag_Cost], "PLAIN DOWN"];
};

