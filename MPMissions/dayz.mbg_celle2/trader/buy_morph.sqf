//Doctor items
_wealth = player getVariable["cashMoney",0];

_player = player;
if (_wealth > Morphine_Cost) then {
	_player addMagazine "ItemMorphine";
	_newwealth = _wealth - Morphine_Cost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
} else {
	cutText [format[("You need %1 vigils to buy this!"),Morphine_Cost], "PLAIN DOWN"];
};

