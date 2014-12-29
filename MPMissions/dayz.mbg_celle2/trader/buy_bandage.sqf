//Doctor items
_wealth = player getVariable["cashMoney",0];

_player = player;
if (_wealth > Bandage_Cost) then {
	_player addMagazine "ItemBandage";
	_newwealth = _wealth - Bandage_Cost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
} else {
	cutText [format[("You need %1 vigils to buy this!"),Bandage_Cost], "PLAIN DOWN"];
};

