//Vigil Doctor Trader 
_Doctor = cursorTarget isKindOf "Dr_Hladik_EP1";
_Mechanic = cursorTarget isKindOf "Ins_Lopotev";
_Hunter = cursorTarget isKindOf "Worker4";
_vehicle = vehicle player;
_inVehicle = (_vehicle != player);
_isMan = cursorTarget isKindOf "Man";
_isAnimal = cursorTarget isKindOf "Animal";
_isZombie = cursorTarget isKindOf "zZombie_base";
_isAlive = alive cursorTarget;

//Medical costs
Morphine_Cost = 150;
Bloodbag_Cost = 250;
Epipen_Cost = 20;
Bandage_Cost = 10;
HeatPack_Cost = 15;
Antibiotic_Cost = 175;
Painkiller_Cost = 25;

if (!isNull cursorTarget and !_inVehicle and (player distance cursorTarget < 4)) then {
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy1 < 0) then {
			s_player_buy1 = player addAction [("<t color=""#007ab7"">" + ("Buy Morphine - 150") +"</t>"), "trader\buy_morph.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy1;
		s_player_buy1 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy2 < 0) then {
			s_player_buy2 = player addAction [("<t color=""#007ab7"">" + ("Buy Bloodbag - 250 ") +"</t>"), "trader\buy_blood.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy2;
		s_player_buy2 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy3 < 0) then {
			s_player_buy3 = player addAction [("<t color=""#007ab7"">" + ("Buy Bandage - 10") +"</t>"), "trader\buy_bandage.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy3;
		s_player_buy3 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy4 < 0) then {
			s_player_buy4 = player addAction [("<t color=""#007ab7"">" + ("Buy Epipen - 20") +"</t>"), "trader\buy_epinephrine.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy4;
		s_player_buy4 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy5 < 0) then {
			s_player_buy5 = player addAction [("<t color=""#007ab7"">" + ("Buy Heatpack - 15") +"</t>"), "trader\buy_heatpack.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy5;
		s_player_buy5 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy6 < 0) then {
			s_player_buy6 = player addAction [("<t color=""#007ab7"">" + ("Buy Painkillers - 25") +"</t>"), "trader\buy_painkiller.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy6;
		s_player_buy6 = -1;
	};
	if (_isMan and _isAlive and !_isZombie and !_isAnimal and _Doctor) then {
		if (s_player_buy7 < 0) then {
			s_player_buy7 = player addAction [("<t color=""#007ab7"">" + ("Buy Antibiotics - 175") +"</t>"), "trader\buy_antibiotic.sqf", cursorTarget, 1, true, true, "", ""];
		};
	} else {	
		player removeAction s_player_buy7;
		s_player_buy7 = -1;
	};

};