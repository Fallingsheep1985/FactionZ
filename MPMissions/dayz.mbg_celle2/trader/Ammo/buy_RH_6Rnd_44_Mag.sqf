//Hunter items
_wealth = player getVariable["cashMoney",0];
_trading = false;
_player = player;
_item = "RH_6Rnd_44_Mag";
if (_wealth > RH_6Rnd_44_Mag_Cost) then {
	_trading = true;
	titleText [format[(" \n \n Trade in progress."),RH_6Rnd_44_Mag_Cost], "PLAIN DOWN"];
	player playActionNow "PutDown";
_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
		_player addMagazine _item;
		_newwealth = _wealth - RH_6Rnd_44_Mag_Cost;
		_player setVariable["cashMoney",_newwealth, true];
		_player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_player,(magazines _player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
		sleep 1;
		_trading = false;
		titleText [format[(" \n \n Bought RH_6Rnd_44_Mag Ammo."),RH_6Rnd_44_Mag_Cost], "PLAIN DOWN"];
	}else{
        titleText [format[" \n \n Not enough room!", RH_6Rnd_44_Mag_Cost], "PLAIN DOWN"];
    };	
} else {
	titleText [format[(" \n \n You need %1 vigils to buy this!"),RH_6Rnd_44_Mag_Cost], "PLAIN DOWN"];
};

