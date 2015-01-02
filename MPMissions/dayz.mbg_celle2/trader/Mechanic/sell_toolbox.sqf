//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemToolbox";
if !(_trading) then {

if ( _item in Weapons Player)then{
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),Toolbox_Sell], "PLAIN DOWN"];
	player playActionNow "PutDown";
		player removeWeapon  _item;
		_newwealth = _wealth + Toolbox_Sell;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
			//time between trades
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n Sold Toolbox for %1."),Toolbox_Sell], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n You dont have a Toolbox!", _item], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n Trade already in progress."),Toolbox_Sell], "PLAIN DOWN"];
};