//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemHeatpack";
if ((_wealth > HeatPack_Cost)&& !(_trading)) then {
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),HeatPack_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
		_newwealth = _wealth - HeatPack_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave";
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n Bought a Heatpack."),HeatPack_Cost], "PLAIN DOWN"];
	}else{
        titleText [format["  \n \n Not enough room!", HeatPack_Cost], "PLAIN DOWN"];
    };
} else {
	titleText [format[("  \n \n You need %1 vigils to buy this!"),HeatPack_Cost], "PLAIN DOWN"];
};

