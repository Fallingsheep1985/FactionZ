//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemPainkiller";
if ((_wealth > Painkiller_Cost) && !(_trading)) then {
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),Painkiller_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_newwealth = _wealth - Painkiller_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave";
		//time between trades
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n Bought Painkillers."),Painkiller_Cost], "PLAIN DOWN"];	
	}else{
        titleText [format["  \n \n Not enough room!", Toolbox_Cost], "PLAIN DOWN"];
    };
} else {
	titleText [format[("  \n \n You need %1 vigils to buy this!"),Painkiller_Cost], "PLAIN DOWN"];
};

