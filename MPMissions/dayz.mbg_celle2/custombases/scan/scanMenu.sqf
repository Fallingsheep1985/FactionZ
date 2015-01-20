_pathtosheep = "\custombases\scan\";
_EXECscript9 = 'player execVM "'+_pathtosheep+'%1"';

	ScanMenu =
	[
	["",true],
		["Scan 100m - 5 Vigils", [],"", -5, [["expression", format[_EXECscript9,"scan100.sqf"]]], "1", "1"],
		["Scan 500m - 10 Vigils", [],"", -5, [["expression", format[_EXECscript9,"scan500.sqf"]]], "1", "1"],
		["Scan 1000m - 15 Vigils", [],"", -5, [["expression", format[_EXECscript9,"scan1000.sqf"]]], "1", "1"],
		["Scan 1500m - 20 Vigils", [],"", -5, [["expression", format[_EXECscript9,"scan1500.sqf"]]], "1", "1"],
		["Scan 2000m - 25 Vigils", [],"", -5, [["expression", format[_EXECscript9,"scan2000.sqf"]]], "1", "1"],
		["", [], "", -5, [["expression", ""]], "1", "0"]
	];
showCommandingMenu "#USER:ScanMenu";