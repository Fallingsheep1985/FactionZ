_playerUID = getPlayerUID player;
if ((_playerUID in FactionLoadout3)||(_playerUID in AdminUidLoadout)) exitWith { 
titleText ["Welcome home.", "PLAIN DOWN", 3]; //or,\\ titleText [format ["Welcome, %1", name player], "PLAIN DOWN"]; // welcomes you with your name
};
// What happens if unauthorized players get into the dome
titleText ["You are entering restricted area, leave.", "PLAIN DOWN", 3];
sleep 5;
titleText ["Are you blind? GET OUT", "PLAIN DOWN", 3];
sleep 5;
titleText ["Still not listening, huh?", "PLAIN DOWN", 3];
sleep 5;
titleText ["You have 5 seconds left", "PLAIN DOWN", 3];
sleep 5;
titleText ["You were warned!.", "PLAIN DOWN", 3];
sleep 2;
player setDamage 1;