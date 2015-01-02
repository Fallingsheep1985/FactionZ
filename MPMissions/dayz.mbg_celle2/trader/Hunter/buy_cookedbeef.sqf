//Hunter items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "FoodSteakCooked";
if ((_wealth > Cooked_Beef) && !(_trading)) then {
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),Cooked_Beef], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
	_newwealth = _wealth - Cooked_Beef;
	_player setVariable["cashMoney",_newwealth, true];
	_player setVariable ["moneychanged",1,true]; 
	dayzPlayerSave = [_player,(magazines _player),true,true] ;
	publicVariableServer "dayzPlayerSave"; 
		//time between trades
	sleep 1;
	_trading = false;
	titleText [format[("  \n \n Bought Cooked Beef."),Cooked_Beef], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n Not enough room!", Cooked_Beef], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n You need %1 vigils to buy this!"),Cooked_Beef], "PLAIN DOWN"];
};

