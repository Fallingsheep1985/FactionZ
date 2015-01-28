//////////////////////////////////////////////////////////////
//New Bank AI by Spodermayt, for Darihon's Bank Raid Script.//
/////////////////////////15.10.2014///////////////////////////

private ["_squad1","_squad2","_squad3","_squad4","_squad5","_squad6","_squad7","_squad8","_squad9","_squad10","_squad11","_squad12","_squad13","_squad14","_squad15","_squad16","_squad17","_squad18","_squad19","_squad20","_squad21","_squad22","_squad23","_squad24","_squad25","_squadDriver","_squadGunner"];

execVM "rob\bank_config.sqf";
sleep 0.5;


//Init (create center etc)
_CENTER = createCenter east; //Creates Center.
_aiGroup = createGroup east; //Creates a Group.
EAST setFriend [WEST,0]; //Sets West (Survivors) as hostile.
_target = [7019.1758, 7635.146, 1.1120623]; //Waypoint to Bank.

//Spawn 25 AI's.
_squad1 = _aiGroup createUnit ["Policeman",[7117.0615, 7682.4253, -3.0517578e-005], [], 10, "PRIVATE"];
_squad2 = _aiGroup createUnit ["Policeman",[7116.8257, 7683.9414, 3.0517578e-005], [], 10, "PRIVATE"];
_squad3 = _aiGroup createUnit ["Policeman",[7065.1577, 7668.9253, 3.0517578e-005], [], 10, "PRIVATE"];
_squad4 = _aiGroup createUnit ["Policeman",[7065.2744, 7667.1851, 0.00012207031], [], 10, "PRIVATE"];
_squad5 = _aiGroup createUnit ["Policeman",[7035.9312, 7683.7476, 6.1035156e-005], [], 10, "PRIVATE"];
_squad6 = _aiGroup createUnit ["Policeman",[7036.8037, 7683.9746, 3.0517578e-005], [], 10, "PRIVATE"];
_squad7 = _aiGroup createUnit ["Policeman",[7020.5835, 7697.4673, 6.1035156e-005], [], 10, "PRIVATE"];
_squad8 = _aiGroup createUnit ["Policeman",[7018.9585, 7696.4248, -3.0517578e-005], [], 10, "PRIVATE"];
_squad9 = _aiGroup createUnit ["Policeman",[7002.9878, 7681.5625, 3.0517578e-005], [], 10, "PRIVATE"];
_squad10 = _aiGroup createUnit ["Policeman",[7001.709, 7682.1987, 3.0517578e-005], [], 10, "PRIVATE"];
_squad11 = _aiGroup createUnit ["Policeman",[6954.3481, 7704.5303, 3.0517578e-005], [], 10, "PRIVATE"];
_squad12 = _aiGroup createUnit ["Policeman",[6953.354, 7705.8223, 3.0517578e-005], [], 10, "PRIVATE"];
_squad13 = _aiGroup createUnit ["Policeman",[6951.3467, 7756.7314, 9.1552734e-005], [], 10, "PRIVATE"];
_squad14 = _aiGroup createUnit ["Policeman",[6950.1733, 7758.5913, 9.1552734e-005], [], 10, "PRIVATE"];
_squad15 = _aiGroup createUnit ["Policeman",[6950.2402, 7756.0337, 3.0517578e-005], [], 10, "PRIVATE"];


if(_debugBank == 1) then {
	systemChat "[DEBUG AI] Units Created.";
};

//Add everyone to a "master" group.
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] joinSilent _unitGroup;

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
_squad11 addWeapon "M4A3_CCO_EP1";
_squad11 addMagazine "30Rnd_556x45_Stanag";
_squad11 addMagazine "30Rnd_556x45_Stanag";
_squad12 addWeapon "M4A1_Aim";
_squad12 addMagazine "30Rnd_556x45_Stanag";
_squad12 addMagazine "30Rnd_556x45_Stanag";
_squad13 addWeapon "Remington870_lamp";
_squad13 addMagazine "8Rnd_B_Beneli_Pellets";
_squad13 addMagazine "8Rnd_B_Beneli_Pellets";
_squad14 addWeapon "M4A3_CCO_EP1";
_squad14 addMagazine "30Rnd_556x45_Stanag";
_squad14 addMagazine "30Rnd_556x45_Stanag";
_squad15 addWeapon "M4A1_Aim";
_squad15 addMagazine "30Rnd_556x45_Stanag";
_squad15 addMagazine "30Rnd_556x45_Stanag";

//Set Skills.
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["aimingspeed", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["spotdistance", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["aimingaccuracy", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["aimingshake", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["spottime", 0.3];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["spotdistance", 0.4];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["commanding", 0.4];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setSkill ["general", 0.5];
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] enableAI "TARGET";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] enableAI "AUTOTARGET";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] enableAI "MOVE";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] enableAI "ANIM";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] enableAI "FSM";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setCombatMode "RED";
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] setBehaviour "COMBAT";
//Move units to bank.
[_squad1,_squad2,_squad3,_squad4,_squad5,_squad6,_squad7,_squad8,_squad9,_squad10,_squad11,_squad12,_squad13,_squad14,_squad15] moveTo _target;
