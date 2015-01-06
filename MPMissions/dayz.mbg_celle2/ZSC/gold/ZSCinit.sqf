#include "ZSCconfig.sqf"


BIS_fnc_numberDigits = compile preprocessFileLineNumbers "ZSC\compiles\numberDigits.sqf";
BIS_fnc_numberText = compile preprocessFileLineNumbers "ZSC\compiles\numberText.sqf"; 
SC_fnc_removeCoins = compile preprocessFileLineNumbers "ZSC\compiles\SC_fnc_removeCoins.sqf";
SC_fnc_addCoins = compile preprocessFileLineNumbers "ZSC\compiles\SC_fnc_addCoins.sqf";

player_gearSet	=	compile preprocessFileLineNumbers "ZSC\compiles\player_gearSet.sqf";
//This overwrite must happen, or change the files in your version of it. I Don't know any mod that changes this file tbh.


/*end overwrites*/

BankDialogTransferAmount = 13000;
BankDialogPlayerBalance = 13001;
BankDialogBankBalance = 13002;
SCTraderDialogCatList = 32000;
SCTraderDialogItemList = 32001;
SCTraderDialogBuyPrice = 32002;
SCTraderDialogSellPrice = 32003;
GivePlayerDialogTransferAmount = 14000;
GivePlayerDialogPlayerBalance = 14001;

BankDialogUpdateAmounts = {
	_vehicleType = typeOf ZSC_CurrentStorage; 
	if(isClass(configFile >> "CfgVehicles" >> _vehicleType ))then{									
		_vehicleMagazines = getNumber (configFile >> "CfgVehicles" >> _vehicleType >> "transportMaxMagazines");
		_displayName = getText  (configFile >> "CfgVehicles" >> _vehicleType >> "displayName");		
		_sizeOfMoney = _vehicleMagazines * ZSC_MaxMoneyInStorageMultiplier;		
		ctrlSetText [2701, format["%1", _displayName]];
		ctrlSetText [BankDialogPlayerBalance, format["%1 %2", [player getVariable ['cashMoney', 0]], CurrencyName]];
		ctrlSetText [BankDialogBankBalance, format["%1 / %3 %2", [ZSC_CurrentStorage getVariable ['bankMoney', 0]], CurrencyName, [_sizeOfMoney]]];
	}else{
		ctrlSetText [BankDialogPlayerBalance, format["Can not get vehicle capacity!","test"]];
		ctrlSetText [BankDialogBankBalance, format["Can not get vehicle capacity!","test"]];
	};
	
};

GivePlayerDialogAmounts = {
	ctrlSetText [GivePlayerDialogPlayerBalance, format["%1 %2", [player getVariable ['cashMoney', 0]], CurrencyName]];
	ctrlSetText [14003, format["%1", (name ZSC_GiveMoneyTarget)]];
};

BankDialogWithdrawAmount = {
	private ["_amount","_bank","_wealth"];
	
	_amount = parseNumber (_this select 0);	
	_bank = ZSC_CurrentStorage getVariable ["bankMoney", 0];
	_wealth = player getVariable["cashMoney",0];
	_vehicleType = typeOf ZSC_CurrentStorage; 
	_displayName = getText  (configFile >> "CfgVehicles" >> _vehicleType >> "displayName");		

	if (_amount < 1 or _amount > _bank) exitWith {
		cutText [format["You can not withdraw more than is in the %1.",_displayName], "PLAIN DOWN"];
	};

	player setVariable["cashMoney",(_wealth + _amount),true];
	ZSC_CurrentStorage setVariable["bankMoney",(_bank - _amount),true];

	dayzPlayerSave = [player,(magazines player),true,true] ;
	publicVariableServer "dayzPlayerSave";
	
	PVDZE_veh_Update = [ZSC_CurrentStorage,"gear"];
	publicVariableServer "PVDZE_veh_Update";

	cutText [format["You have withdrawn %1 %2 out of the %3", [_amount], CurrencyName,_displayName], "PLAIN DOWN"];
};

BankDialogDepositAmount = {
	private ["_amount","_bank","_wealth"];	
	_vehicleType = typeOf ZSC_CurrentStorage; 	
	_maxCap = 0;	
	_displayName = "Storage";
	if(isClass(configFile >> "CfgVehicles" >> _vehicleType ))then{	
		_displayName = getText  (configFile >> "CfgVehicles" >> _vehicleType >> "displayName");		
		_vehicleMagazines = getNumber (configFile >> "CfgVehicles" >> _vehicleType >> "transportMaxMagazines");		
		_maxCap = _vehicleMagazines * ZSC_MaxMoneyInStorageMultiplier;	
	}else{		
		_displayName = "Unknown";
	};

	_amount = parseNumber (_this select 0);
	_bank = ZSC_CurrentStorage getVariable ["bankMoney", 0];
	_wealth = player getVariable["cashMoney",0];
	
	if (_amount < 1 or _amount > _wealth) exitWith {
		cutText ["You can not deposit more than you have.", "PLAIN DOWN"];
	};

	if( ((_bank + _amount ) >  _maxCap)) then{		
			cutText [format["You can only store a max of %1 %2 in this %3.", [_maxCap],CurrencyName,_displayName], "PLAIN DOWN"];
	}else{	
		player setVariable["cashMoney",(_wealth - _amount),true];
		ZSC_CurrentStorage setVariable["bankMoney",(_bank + _amount),true];
		cutText [format["You have deposited %1 %2 in the %3.", [_amount], CurrencyName,_displayName], "PLAIN DOWN"];
	};
	dayzPlayerSave = [player,(magazines player),true,true] ;
	publicVariableServer "dayzPlayerSave";
	
	PVDZE_veh_Update = [ZSC_CurrentStorage,"gear"];
	publicVariableServer "PVDZE_veh_Update";
};

GivePlayerAmount = {
	private ["_amount","_target","_wealth"];
	
	_amount = parseNumber (_this select 0);
	_target = ZSC_GiveMoneyTarget;
	_wealth = player getVariable["cashMoney",0];
	_twealth = _target getVariable["cashMoney",0];

	if (_amount < 1 or _amount > _wealth) exitWith {
		cutText ["You can not give more than you currently have.", "PLAIN DOWN"];
    };

	if (!(isPlayer ZSC_GiveMoneyTarget)) exitWith {
		cutText ["You can only give money to a player", "PLAIN DOWN"];
	};

	player setVariable["cashMoney",_wealth - _amount, true];

	_target setVariable["cashMoney",_twealth + _amount, true];

	dayzPlayerSave = [player,(magazines player),true,true] ;
	publicVariableServer "dayzPlayerSave";
	dayzPlayerSave = [_target,(magazines _target),true,true] ;
	publicVariableServer "dayzPlayerSave";

	cutText [format["You gave %1 %2.", _amount, CurrencyName], "PLAIN DOWN"];
};
