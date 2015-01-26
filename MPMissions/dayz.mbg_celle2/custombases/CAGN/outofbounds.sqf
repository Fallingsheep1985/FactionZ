private["_debug","_distance"];
while {alive player} do {
_character = player;
_charPos =            getPosATL (vehicle player);
_nearSpawnPos = ((dayz_spawnPos distance _charPos) < 100);
_xCoord = _charPos select 0;
_yCoord = _charPos select 1;

	if ((_xCoord > 12290 or _xCoord < 0 or _yCoord > 12290 or _yCoord < 0) && !_nearSpawnPos) then {	
		systemChat ("OUTOFBOUNDS: You are OUTOFBOUNDS! \n  You have 10 seconds to go back or die!"); 
		sleep 5;
		systemChat ("OUTOFBOUNDS: 5 seconds to go back!"); 
		sleep 5;
		_character allowDamage true;
		_character setDamage 1;
		systemChat ("OUTOFBOUNDS: Killing Player"); 
	};

};
