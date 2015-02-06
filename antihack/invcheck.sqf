//Sheeps banned item check
while {true} do {
	_KILLPLAYER = true;
	
	
	//to remove a item just put // infront of it
	_badmags = [
	//these could be classed as weapons???
	"Kostey_notebook"
	,"Kostey_map_case"
	,"CDF_dogtags"
	,"PMC_documents"
	,"Moscow_Bombing_File"
	,"Kostey_photos"
	,"EvPhoto"
	,"EvMoscow"
	,"EvMoney"
	,"EvMap"
	,"EvKobalt"
	,"EvDogTags"
	,"Cobalt_File"
	//Misc items
	,"Laserbatteries"
	 // maybe classed as weapon not mag???
	,"Laserdesignator"
	//Missles/RPG
	,"M_Javelin_AT"
	,"M_Stinger_AA"
	,"R_M136_AT"
	,"R_SMAW_HEDP"
	,"R_SMAW_HEAA"
	,"M_Strela_AA"
	,"R_PG7V_AT"
	,"R_PG7VL_AT"
	,"R_PG7VR_AT"
	,"R_OG7_AT"
	,"R_RPG18_AT"
	,"M_AT13_AT"
	,"M_Igla_AA"
	//Explosives
	,"TimeBomb"
	,"PipeBomb"
	,"Mine"
	,"MineE"
	,"JAVELIN"
	,"STINGER"
	// add new mags as new line above this comment like so  ,"MAG CLASSNAME"
	];
	if (_KILLPLAYER) then{
		if ({_x in player magazines} count _badmags > 0) then {
			player removeMagazine _x; // delete the offending  item
		};
		//kill player
		player setDamage 1;
	}else{
		if ({_x in player magazines} count _badmags > 0) then {
			player removeMagazine _x; // delete the offending  item
		};
	};
};