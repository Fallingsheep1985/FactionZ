//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "PartGlass";
if !(_trading) then {

if ( _item in Magazines Player)then{
	_trading = true;
	titleText [format[("  \n \n \n Trade in progress."),Glass_Sell], "PLAIN DOWN"];
	player playActionNow "PutDown";
		player removeMagazine _item;
		_newwealth = _wealth + Glass_Sell;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n \n Sold Glass for %1."),Glass_Sell], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n \n You dont have any Glass!", _item], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n \n Trade already in progress."),Glass_Sell], "PLAIN DOWN"];
};