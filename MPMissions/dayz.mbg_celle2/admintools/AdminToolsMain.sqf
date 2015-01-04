
_pathtosheep = "admintools\sheep\";
_EXECscript9 = 'player execVM "'+_pathtosheep+'%1"';


if ((getPlayerUID player) in AdminList) then { // Admins
	epochmenustart = [
	["",true],
		["Sheep Menu >>", [], "#USER:SheepsMenu", -5, [["expression", ""]], "1", "1"],
		["", [], "", -5, [["expression", ""]], "1", "0"],
			["Main Menu", [20], "#USER:epochmenustart", -5, [["expression", ""]], "1", "1"]
	];

};

SheepsMenu =
[
["",true],
	["Show Position", [],"", -5, [["expression", format[_EXECscript9,"showpostion.sqf"]]], "1", "1"],
	["Add 10 Vigils", [],"", -5, [["expression", format[_EXECscript9,"10vigilis.sqf"]]], "1", "1"],
	["Add 100 Vigils", [],"", -5, [["expression", format[_EXECscript9,"100vigilis.sqf"]]], "1", "1"],
	["Add 250 Vigils", [],"", -5, [["expression", format[_EXECscript9,"250vigilis.sqf"]]], "1", "1"],
	["Spawn DB - Pickup PK GUE", [2], "", -5, [["expression", '["Pickup_PK_GUE"] execVM "admintools\tools\malvehiclespawn.sqf"']], "1", "1"],	
	["", [], "", -5, [["expression", ""]], "1", "0"],
		["Main Menu", [20], "#USER:epochmenustart", -5, [["expression", ""]], "1", "1"]
];
showCommandingMenu "#USER:epochmenustart";