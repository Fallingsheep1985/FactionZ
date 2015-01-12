if ((getPlayerUID player) in IsInAFaction) then{
	sleep 5;
	waitUntil {!dialog};
	systemChat ('Use your scroll wheel to select a spawn at your base!');
	cutText ["                 \nUse your scroll wheel to select a spawn at your base!","PLAIN"];
	execVM "newspawn\newspawn_main.sqf";
};
