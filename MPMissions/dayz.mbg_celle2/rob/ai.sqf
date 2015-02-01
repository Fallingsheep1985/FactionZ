//////////////////////////////////////////////////////////////
//New Bank AI by Spodermayt, for Darihon's Bank Raid Script.//
/////////////////////////15.10.2014///////////////////////////

private ["_squad1","_squad2","_squad3","_squad4","_squad5","_squad6","_squad7","_squad8","_squad9","_squad10","_squad11","_squad12","_squad13","_squad14","_squad15","_squad16","_squad17","_squad18","_squad19","_squad20","_squad21","_squad22","_squad23","_squad24","_squad25","_squadDriver","_squadGunner"];

sleep 0.5;


//Init (create center etc)
_CENTER = createCenter east; //Creates Center.
_aiGroup = createGroup east; //Creates a Group.
EAST setFriend [WEST,0]; //Sets West (Survivors) as hostile.
_target = [8910.88, 2671.77, 1.1120623]; //Waypoint to Bank.

//Spawn 25 AI's.
_squad1  = _aiGroup createUnit ["PrivateSec1_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad2  = _aiGroup createUnit ["PrivateSec1_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad3  = _aiGroup createUnit ["PrivateSec1_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad4  = _aiGroup createUnit ["PrivateSec3_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad5  = _aiGroup createUnit ["PrivateSec3_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad6  = _aiGroup createUnit ["PrivateSec3_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad7  = _aiGroup createUnit ["PrivateSec2_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad8  = _aiGroup createUnit ["PrivateSec2_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad9  = _aiGroup createUnit ["PrivateSec2_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];
_squad10 = _aiGroup createUnit ["PrivateSec1_DZC",[8955, 2682, 0], [], 10, "PRIVATE"];


//Add everyone to a "master" group.
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] joinSilent _unitGroup;

//Give everyone weapons.
_squad1 addWeapon "M4A3_CCO_EP1";
_squad1 addMagazine "30Rnd_556x45_Stanag";
_squad1 addMagazine "30Rnd_556x45_Stanag";
_squad2 addWeapon "M4A1_Aim";
_squad2 addMagazine "30Rnd_556x45_Stanag";
_squad2 addMagazine "30Rnd_556x45_Stanag";
_squad3 addWeapon "Remington870_lamp";
_squad3 addMagazine "8Rnd_B_Beneli_Pellets";
_squad3 addMagazine "8Rnd_B_Beneli_Pellets";
_squad4 addWeapon "Remington870_lamp";
_squad4 addMagazine "8Rnd_B_Beneli_Pellets";
_squad4 addMagazine "8Rnd_B_Beneli_Pellets";
_squad5 addWeapon "Remington870_lamp";
_squad5 addMagazine "8Rnd_B_Beneli_Pellets";
_squad5 addMagazine "8Rnd_B_Beneli_Pellets";
_squad6 addWeapon "M4A1_Aim";
_squad6 addMagazine "30Rnd_556x45_Stanag";
_squad6 addMagazine "30Rnd_556x45_Stanag";
_squad7 addWeapon "Remington870_lamp";
_squad7 addMagazine "8Rnd_B_Beneli_Pellets";
_squad7 addMagazine "8Rnd_B_Beneli_Pellets";
_squad8 addWeapon "Remington870_lamp";
_squad8 addMagazine "8Rnd_B_Beneli_Pellets";
_squad8 addMagazine "8Rnd_B_Beneli_Pellets";
_squad9 addWeapon "M4A3_CCO_EP1";
_squad9 addMagazine "30Rnd_556x45_Stanag";
_squad9 addMagazine "30Rnd_556x45_Stanag";
_squad10 addWeapon "Remington870_lamp";
_squad10 addMagazine "8Rnd_B_Beneli_Pellets";
_squad10 addMagazine "8Rnd_B_Beneli_Pellets";


//Set Skills.
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["aimingspeed", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["spotdistance", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["aimingaccuracy", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["aimingshake", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["spottime", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["spotdistance", 0.4];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["commanding", 0.4];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setSkill ["general", 0.5];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] enableAI "TARGET";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] enableAI "AUTOTARGET";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] enableAI "MOVE";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] enableAI "ANIM";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] enableAI "FSM";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setCombatMode "RED";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] setBehaviour "COMBAT";
//Move units to bank.
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10] moveTo _target;
