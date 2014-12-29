//Doctor items
_wealth = player getVariable["cashMoney",0];

_player = player;
if (_wealth > Epipen_Cost) then {
	_player addMagazine "ItemEpinephrine";
	_newwealth = _wealth - Epipen_Cost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
} else {
	cutText [format[("You need %1 vigils to buy this!"),Epipen_Cost], "PLAIN DOWN"];
};

