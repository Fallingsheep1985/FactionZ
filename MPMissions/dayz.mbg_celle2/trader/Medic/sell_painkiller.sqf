//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemPainkiller";
if !(_trading) then {
if ( _item in Magazines Player)then{
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),Painkiller_Sell], "PLAIN DOWN"];
	player playActionNow "PutDown";
		player removeMagazine _item;
		_newwealth = _wealth + Painkiller_Sell;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n Sold Painkiller for %1."),Painkiller_Sell], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n You dont have any Painkillers!", _item], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n Trade already in progress."),Painkiller_Sell], "PLAIN DOWN"];
};