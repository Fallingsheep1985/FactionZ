_playerUID = getPlayerUID player;

if ((player getVariable"humanity") >= Deploybike || (getPlayerUID player) in AdminList || (getPlayerUID player) in PRESESAONWINNERS) then {

	DEPLOY_BIKE = [
		["ItemToolbox","Deploy Bike","[] execVM 'sheep\spawnbike\deploy_init.sqf';","true"]
	];
} else {
	DEPLOY_BIKE = [];
};

CELLE_CLICK_ACTIONS = DEPLOY_BIKE;