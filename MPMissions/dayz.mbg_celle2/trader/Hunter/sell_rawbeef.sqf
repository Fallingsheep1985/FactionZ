//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "FoodSteakRaw";
if !(_trading) then {

if ( _item in Magazines Player)then{
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),Rawbeef_Sell], "PLAIN DOWN"];
	player playActionNow "PutDown";
		player removeMagazine _item;
		_newwealth = _wealth + Rawbeef_Sell;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n Sold Raw Beef for %1."),Rawbeef_Sell], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n You dont have any Raw Beef!", _item], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n Trade already in progress."),Rawbeef_Sell], "PLAIN DOWN"];
};