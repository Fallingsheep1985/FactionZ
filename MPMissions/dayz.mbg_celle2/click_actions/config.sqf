_playerUID = getPlayerUID player;
PRESESAONWINNERS = ["","",];
if ((player getVariable"humanity") >= 5000 || (player getVariable"humanity") <= -5000 || (getPlayerUID player) in AdminList ) then {

	DEPLOY_BIKE = [
		["ItemToolbox","Deploy Bike","[] execVM 'sheep\spawnbike\deploy_init.sqf';","true"]
	];
} else {
	DEPLOY_BIKE = [];
};

CELLE_CLICK_ACTIONS = DEPLOY_BIKE;