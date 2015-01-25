
_pathtosheep = "admintools\sheep\";
_EXECscript9 = 'player execVM "'+_pathtosheep+'%1"';


if ((getPlayerUID player) in AdminList) then { // Admins
	SheepsMenu =
	[
	["",true],
		["Show Position", [],"", -5, [["expression", format[_EXECscript9,"showpostion.sqf"]]], "1", "1"],
		["Add 10 Vigils", [],"", -5, [["expression", format[_EXECscript9,"10vigils.sqf"]]], "1", "1"],
		["Add 100 Vigils", [],"", -5, [["expression", format[_EXECscript9,"100vigils.sqf"]]], "1", "1"],
		["Add 250 Vigils", [],"", -5, [["expression", format[_EXECscript9,"250vigils.sqf"]]], "1", "1"],
		["Add Tent", [],"", -5, [["expression", format[_EXECscript9,"addTent.sqf"]]], "1", "1"],
		["", [], "", -5, [["expression", ""]], "1", "0"]
	];
};
showCommandingMenu "#USER:SheepsMenu";