//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemCompass";
if !(_trading) then {

if ( _item in Weapons Player)then{
	_trading = true;
	titleText [format[("  \n \n \n Trade in progress."),Compass_Sell], "PLAIN DOWN"];
	player playActionNow "PutDown";
		player removeWeapon _item;
		_newwealth = _wealth + Compass_Sell;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n \n Sold Compass for %1."),Compass_Sell], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n \n You dont have a Compass!", _item], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n \n Trade already in progress."),Compass_Sell], "PLAIN DOWN"];
};