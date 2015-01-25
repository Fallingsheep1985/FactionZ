//Custom hive write/read
//Variables

server_hiveReadWriteLocal = {
	private["_key","_resultArray","_data"];
	_key = _this;
	//diag_log ("ATTEMPT READ/WRITE: " + _key);
	_data = "HiveExt" callExtension _key;
	//diag_log ("READ/WRITE: " +str(_data));
	_resultArray = call compile format ["%1",_data];
	_resultArray
};

_key = "";
_playerUID = getPlayerUID player;



if (_playerUID in AdminUidLoadout) then{
	bankID = 0;
}; 
if (_playerUID in FactionLoadout1)  then{
	bankID = 1;
};
if (_playerUID in FactionLoadout2)  then{
	bankID = 2;
};
if (_playerUID in FactionLoadout3)  then{
	bankID = 3;
};
if (_playerUID in FactionLoadout4) then{
	bankID = 4;
}; 
if (_playerUID in FactionLoadout5) then{
	bankID = 5;
}; 
if (_playerUID in FactionLoadout6) then{
	bankID = 6;
}; 
if (_playerUID in FactionLoadout7) then{
	bankID = 7;
}; 
if (_playerUID in FactionLoadout8) then{
	bankID = 8;
}; 
if (_playerUID in FactionLoadout9) then{
	bankID = 9;
}; 
if (_playerUID in FactionLoadout10) then{
	bankID = 10;
};

//SQL from DB
_key = format ["CHILD:999: select 'banktotal' from 'bank_data' Where 'BankUID' = ?:[%1]:", bankID];

_result = _key call server_hiveReadWriteLocal;

 _status = _result select 0;
 if (_status == "CustomStreamStart") then {
     _val = _result select 1;
     diag_log format["BANK DEBUG: Bank Amount: %1 BankID: %2",_val,bankID];
};