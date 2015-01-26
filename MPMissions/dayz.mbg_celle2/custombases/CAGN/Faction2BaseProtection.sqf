/*
 * Safezone Commander Script by AlienX
 * www.opendayz.net
 * Thanks to everyone who has provided other scripts of the same format, without you I would not have been able to make this.
 */
 
Private ["_EH_Fired", "_ehID", "_fix","_inVehicle","_inVehicleLast","_EH_Fired_Vehicle","_inVehicleDamage","_antiBackpackThread","_antiBackpackThread2"];

//ANTI SPAM GODMODE
AGN_safeZoneAntispam = true;								// puts a time limit on God mode when trying to leave and enter a safe zone rapidly
AGN_safeZone_Players_RemoveZombies = true;                	// delete zombies near  safe zone			
AGN_safeZoneGodmode = true; 								//Should safezone God mode be enabled?
LAC_safeZone_Vehicle_God = true;                            //Vehicle Godmode
disableSerialization;

waitUntil {!isNil "dayz_animalCheck"};


AGN_enteredSafezone = false; //default value

_inVehicle = objNull;
_inVehicleLast = objNull;
_thePlayer = player;
_playerUID = getPlayerUID player;

while {true} do {
if (Faction2BaseGodmode) then {
	if ((_playerUID in FactionLoadout2)||(_playerUID in AdminUidLoadout)) then{
		waitUntil { !canBuild };
		Faction2AtBase = true;
		_inSafezoneFinished = false;
		if ( AGN_safeZoneGodmode ) then{
			if (AGN_safeZoneAntispam )then{
				if (AGN_enteredSafezone) then{
systemChat ("[AGN] Antispam - Please wait before re-entering!"); 
				}else{
					AGN_enteredSafezone = true;//player has entered safezone
systemChat ("[AGN] Entering Base Area - God Mode Enabled");
systemChat ("[AGN] Antispam - You must wait 2 minutes for god mode to become active once you leave!");
					player_zombieCheck = {};
					fnc_usec_damageHandler = {};
					_thePlayer removeAllEventHandlers "handleDamage";
					_thePlayer addEventHandler ["handleDamage", {false}];
					_thePlayer allowDamage false;
				};
			};		
		};
	If ( LAC_safeZone_Vehicle_God) then{
		fnc_usec_damageVehicle ={};
		vehicle_handleDamage ={};
		vehicle_handleKilled ={};
		_inVehicleLast removeAllEventHandlers "handleDamage";
		_inVehicleLast addEventHandler ["handleDamage", {false}];
		_inVehicleLast allowDamage false;
	};
		//Remove Zombies
		if ( AGN_safeZone_Players_RemoveZombies ) then{
			_anti_zombie = [] spawn {
			private ["_entity_array"];
				while {!canBuild} do
				{
					_entity_array = (getPos player) nearEntities ["CAManBase",110];
					{
						if (_x isKindof "zZombie_Base") then {
							deletevehicle _x;
						};
					} forEach _entity_array;
					sleep 4;
				};
			};
		};	
		waitUntil { canBuild };
systemChat ("[AGN] Exiting Base Area");
		if ( AGN_safeZoneGodmode ) then{
			player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
			fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
			_thePlayer addEventHandler ["handleDamage", {true}];
			_thePlayer removeAllEventHandlers "handleDamage";
			_thePlayer allowDamage true;
			if (AGN_safeZoneAntispam )then{
				if (AGN_enteredSafezone) then{
					[] execVM "custombases\CAGN\agn_timer.sqf";
				};
			};
		};
		If ( LAC_safeZone_Vehicle_God) then{
			fnc_usec_damageVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerVehicle.sqf";
			vehicle_handleDamage = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleDamage.sqf";
			vehicle_handleKilled = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleKilled.sqf";
			_inVehicleLast removeAllEventHandlers "handleDamage";
			_inVehicleLast addEventHandler ["handleDamage", {_this select 2}];
			_inVehicleLast allowDamage true;
		};
	_inSafezoneFinished = true;
	};
	};
};
