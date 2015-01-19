private ["_killer","_victim","_killType","_killCount"];
_killer = _this select 0;
_victim = _this select 1;
_killType = _this select 2;

_killCount = _killer getVariable [_killType,0];
_killer setVariable [_killType,(_killCount +1),true];

if (DZAI_humanityGain != 0) then {
	_humanity = _killer getVariable["humanity",0];
	_humanity = _humanity + DZAI_humanityGain;
	_killer setVariable["humanity",_humanity,true];
};

if (DZAI_vigilGain != 0) then {
		_wealth = player getVariable["cashMoney",0];
		_newwealth = _wealth + DZAI_vigilGain;
		_killer setVariable["cashMoney",_newwealth, true];
		_killer setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [_killer,(magazines _killer),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
};