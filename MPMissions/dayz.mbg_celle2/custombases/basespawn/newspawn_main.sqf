pathtobasespawn = "custombases\basespawn\";
EXECscript1 = 'player execVM "'+pathtobasespawn+'%1"';
Basespawnselect =
[
	["",false],
	["Spawn at Base", [2], "", -5, [["expression", format[EXECscript1,"basespawn.sqf"]]], "1", "1"],
	["", [-1], "", -5, [["expression", ""]], "1", "0"],
	["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
];

showCommandingMenu "#USER:Basespawnselect";
