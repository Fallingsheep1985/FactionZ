//Custom hive write/read
DebugBanks = true;
//Variables
_key = "";
_playerUID = getPlayerUID player;

if (_playerUID in AdminUidLoadout) then{
	_bankID = 0;
}; 
if (_playerUID in FactionLoadout1)  then{
	_bankID = 1;
};
if (_playerUID in FactionLoadout2)  then{
	_bankID = 2;
};
if (_playerUID in FactionLoadout3)  then{
	_bankID = 3;
};
if (_playerUID in FactionLoadout4) then{
	_bankID = 4;
}; 
if (_playerUID in FactionLoadout5) then{
	_bankID = 5;
}; 
if (_playerUID in FactionLoadout6) then{
	_bankID = 6;
}; 
if (_playerUID in FactionLoadout7) then{
	_bankID = 7;
}; 
if (_playerUID in FactionLoadout8) then{
	_bankID = 8;
}; 
if (_playerUID in FactionLoadout9) then{
	_bankID = 9;
}; 
if (_playerUID in FactionLoadout10) then{
	_bankID = 10;
};

//SQL from DB
_key = format ["CHILD:999: select 'banktotal' from 'bank_data' Where 'BankUID' = ?:[%1]:", _bankID];

_result = _key call server_hiveReadWrite;

 _status = _result select 0;
 if (_status == "CustomStreamStart") then {
        _val = _result select 1;
        diag_log format["BANK DEBUG: Bank Amount: %1 BankID: %2",_val,_bankID];
    };