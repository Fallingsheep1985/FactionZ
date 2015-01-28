donn_nitroOn = false;
donn_speedometer = false;
donn_nitroCars = [
	"car_sedan",
	"car_sedan_DZE1",
	"car_sedan_DZE2",
	"car_sedan_DZE3",
	"car_sedan_DZE4",
	"VWGold",
	"VWGold_DZE1",
	"VWGold_DZE2",
	"VWGold_DZE3",
	"VWGold_DZE4",
	"car_hatchback",
	"car_hatchback_DZE1",
	"car_hatchback_DZE2",
	"car_hatchback_DZE3",
	"car_hatchback_DZE4",
	"datsun1_civil_1_open",
	"datsun1_civil_1_open_DZE1",
	"datsun1_civil_1_open_DZE2",
	"datsun1_civil_1_open_DZE3",
	"datsun1_civil_1_open_DZE4",
	"SUV_Camo",
	"SUV_Camo_DZE1",
	"SUV_Camo_DZE2",
	"SUV_Camo_DZE3",
	"SUV_Camo_DZE4",
	"datsun1_civil_3_open",
	"datsun1_civil_3_open_DZE1",
	"datsun1_civil_3_open_DZE2",
	"datsun1_civil_3_open_DZE3",
	"datsun1_civil_3_open_DZE4",
	"GLT_M300_ST",
	"HMMWV_DZ"
];
kDownFunc = {
	private ["_theCar","_keyDown"];
	_keyDown = _this;
	if (_keyDown == 42 && donn_nitroOn) then {
		_theCar = vehicle player;
		if (isEngineOn _theCar && ((getPosATL _theCar) select 2) < 0.1 && speed _theCar >= 50) then {
			private ["_vel","_dir"];
			_dir = direction _theCar;
			_vel = velocity _theCar;
			_theCar setVelocity [
				(_vel select 0) + (sin _dir * 0.1),
				(_vel select 1) + (cos _dir * 0.1),
				(_vel select 2)
			];
			_theCar setFuel ((fuel _theCar) - 0.000035);
			if ((diag_tickTime - donn_airStarted) >= donn_airWait) then {
				[nil,_theCar, rSAY,["suction", 100]] call RE;		
				if (donn_airWait == 3.5) then {
					[nil,_theCar, rSAY,["exhaustor", 100]] call RE;
					donn_airStarted = diag_tickTime;
					donn_airWait = 3;
					donn_problem = true;
					[] spawn {
						private ["_theCar","_vel","_calcDir","_magnitude","_dir","_intensity"];
						_theCar = vehicle player;
						for "_x" from 1 to 200 do {
							if (vehicle player == _theCar && isEngineOn _theCar && ((getPosATL _theCar) select 2) < 0.1 && speed _theCar >= 50) then {
								_vel = velocity _theCar;
								_dir = direction _theCar;
								_magnitude = sqrt((_vel select 0)^2 + (_vel select 1)^2);
								if ((_vel select 0) < 0) then {_calcDir = 360 - aCos ((_vel select 1)/_magnitude);} else {_calcDir = aCos ((_vel select 1)/_magnitude);};
								if (abs(_dir-_calcDir) <= 5) then {
									_theCar setVelocity [(_vel select 0) * 1.01, (_vel select 1) * 1.01, (_vel select 2)];
								};
							};
							uiSleep 0.01;
							if (!donn_problem) exitWith {};
						};
					};
				} else {
					donn_airStarted = diag_tickTime;
					donn_airWait = random 3.5;
					if (donn_airWait > 3) then {donn_airWait = 3.5;};
				};
			};
		};
	};
};
kUpFunc = {
	private ["_keyUp"];
	_keyUp = _this;
	if (_keyUp == 41) then {
		donn_problem = false;
	};
	if (_keyUp == 57) then {
		if (donn_nitroOn) then {
			donn_nitroOn = false;
			systemChat ("Nitro Off!");
		} else {
			donn_nitroOn = true;
			systemChat ("Nitro On!");
			if (donn_speedometer) then {
				[] spawn {
					while {donn_nitroOn} do {
						cutText [format ["Speed in Km/h: %1", round (speed (vehicle player))], "PLAIN"];
						uiSleep 0.5;
					};
				};			
			};
		};
	};
};
[] spawn {
	while {true} do {
		//WAIT TO BE IN VEHICLE
		waitUntil {sleep 0.25; vehicle player != player && (driver (vehicle player)) == player};
		if ((typeOf (vehicle player)) in donn_nitroCars) then {
			donn_nosOk = true;
			donn_airStarted = diag_tickTime;
			donn_airWait = 1.5;
			donn_problem = false;
			[nil, (vehicle player), rSAY, ["nitro", 100]] call RE;
			[player,25,true,(getPosATL player)] spawn player_alertZombies;
			systemChat ("Press Space Bar to turn Nitro On/OFF!");
			nosKeyDown = (findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call kDownFunc; false;"];
			nosKeyUp = (findDisplay 46) displayAddEventHandler ["KeyUp","_this select 1 call kUpFunc; false;"];
		} else {
			donn_nosOk = false;
		};
		//WAIT TO BE OUT OF THE VEHICLE
		waitUntil {sleep 0.25; vehicle player == player || (driver (vehicle player)) != player};
		if (donn_nosOk) then {
			donn_nitroOn = false;
			donn_airStarted = nil;
			donn_airWait = nil;
			donn_problem = nil;
			(findDisplay 46) displayRemoveEventHandler ["KeyDown", nosKeyDown];
			(findDisplay 46) displayRemoveEventHandler ["KeyUp", nosKeyUp];
		};
	};
};