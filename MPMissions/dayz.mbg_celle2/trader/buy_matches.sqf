//Hunter items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
if ((_wealth > Matches_Cost) && !(_trading)) then {
	_trading = true;
	cutText [format[("Trade in progress."),Matches_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_player addMagazine "ItemMatchbox";
	_newwealth = _wealth - Matches_Cost;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
		//time between trades
	sleep 1;
	_trading = false;
	cutText [format[("Bought Matches."),Matches_Cost], "PLAIN DOWN"];
} else {
	cutText [format[("You need %1 vigils to buy this!"),Matches_Cost], "PLAIN DOWN"];
};

