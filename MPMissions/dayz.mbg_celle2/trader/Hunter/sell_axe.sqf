//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemHatchet";
if !(_trading) then {

if ( _item in Magazines Player)then{
	_trading = true;
	titleText [format[(" \n \n \n Trade in progress."),Axe_Sell], "PLAIN DOWN"];
	player playActionNow "PutDown";
		player removeMagazine _item;
		_newwealth = _wealth + Axe_Sell;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		titleText [format[(" \n \n \n Sold Axe for %1."),Axe_Sell], "PLAIN DOWN"];
	}else{
        titleText [format[" \n \n \n You dont have an Axe!",_item ], "PLAIN DOWN"];
    };	
} else {
	titleText [format[(" \n \n \n Trade already in progress."),Axe_Sell], "PLAIN DOWN"];
};