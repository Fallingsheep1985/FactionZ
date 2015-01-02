//Hunter items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "RH_13Rnd_9x19_bhp";
if ((_wealth > RH_13Rnd_9x19_bhp_Cost) && !(_trading)) then {
	_trading = true;
	titleText [format[(" \n \n \n Trade in progress."),RH_13Rnd_9x19_bhp_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
		_newwealth = _wealth - RH_13Rnd_9x19_bhp_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
		sleep 1;
		_trading = false;
		titleText [format[(" \n \n \n Bought RH_13Rnd_9x19_bhp Ammo."),RH_13Rnd_9x19_bhp_Cost], "PLAIN DOWN"];
	}else{
        titleText [format[" \n \n \n Not enough room!", RH_13Rnd_9x19_bhp_Cost], "PLAIN DOWN"];
    };	
} else {
	titleText [format[(" \n \n \n You need %1 vigils to buy this!"),RH_13Rnd_9x19_bhp_Cost], "PLAIN DOWN"];
};

