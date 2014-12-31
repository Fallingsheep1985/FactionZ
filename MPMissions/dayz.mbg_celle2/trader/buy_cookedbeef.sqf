//Hunter items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
if ((_wealth > Cooked_Beef) && !(_trading)) then {
	_trading = true;
	cutText [format[("Trade in progress."),Cooked_Beef], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_player addMagazine "FoodSteakCooked";
	_newwealth = _wealth - Cooked_Beef;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
		//time between trades
	sleep 1;
	_trading = false;
	cutText [format[("Bought Cooked Beef."),Cooked_Beef], "PLAIN DOWN"];
} else {
	cutText [format[("You need %1 vigils to buy this!"),Cooked_Beef], "PLAIN DOWN"];
};

