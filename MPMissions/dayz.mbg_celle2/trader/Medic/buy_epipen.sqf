//Doctor items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "ItemEpinephrine";
if ((_wealth > Epipen_Cost)&& !(_trading)) then {
	_trading = true;
	titleText [format[("  \n \n Trade in progress."),Epipen_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
	_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
		_newwealth = _wealth - Epipen_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave";
		sleep 1;
		_trading = false;
		titleText [format[("  \n \n Bought a Epipen."),Epipen_Cost], "PLAIN DOWN"];	
	}else{
        titleText [format["  \n \n Not enough room!", Epipen_Cost], "PLAIN DOWN"];
    };	
} else {
	titleText [format[("  \n \n You need %1 vigils to buy this!"),Epipen_Cost], "PLAIN DOWN"];
};

