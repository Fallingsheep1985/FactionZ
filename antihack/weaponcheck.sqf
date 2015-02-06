//Sheeps banned weapons check
while {true} do {
	_KILLPLAYER = true; //change to false to delete item only
	
	//to remove a item just put // infront of it
	_badweps = [
	//launchers
	"Igla"
	,"MetisLauncher"
	,"RPG18"
	,"RPG7V"
	,"Strela"
	,"Stinger"
	,"Javelin"
	,"SMAW"
	,"M136"
	,"BAF_NLAW_Launcher"
	,"LRTV_ACR"
	//thermal scopes
	,"BAF_AS50_TWS"	
	// add new weapons as new line above this comment like so  ,"WEAPON CLASSNAME"
	];
	if (_KILLPLAYER) then{
		if ({player hasweapon _x} count _badweps > 0) then {
			removeWeapon _x; // delete the offending  weapon
		};
		//kill player
		player setDamage 1;
	}else{
		if ({player hasweapon _x} count _badweps > 0) then {
			removeWeapon _x; // delete the offending  weapon
		};
	};

};