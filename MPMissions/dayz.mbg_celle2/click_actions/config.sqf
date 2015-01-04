_playerUID = getPlayerUID player;
if (((_playerUID in AdminUidLoadout)&&(AdminPerk8))|| ((_playerUID in FactionLoadout1)&&(Faction1Perk8))|| ((_playerUID in FactionLoadout2)&&(Faction2Perk8))|| ((_playerUID in FactionLoadout3)&&(Faction3Perk8))|| ((_playerUID in FactionLoadout4)&&(Faction4Perk8))|| ((_playerUID in FactionLoadout5)&&(Faction5Perk8))|| ((_playerUID in FactionLoadout6)&&(Faction6Perk8))|| ((_playerUID in FactionLoadout7)&&(Faction7Perk8))|| ((_playerUID in FactionLoadout8)&&(Faction8Perk8))|| ((_playerUID in FactionLoadout9)&&(Faction9Perk8))|| ((_playerUID in FactionLoadout10)&&(Faction10Perk8)) || (!(_playerUID in AdminUidLoadout)&&(DefaultPerk8))) then {

	DEPLOY_BIKE = [
		["ItemToolbox","Deploy Bike","[] execVM 'sheep\spawnbike\deploy_init.sqf';","true"]
	];
} else {
	DEPLOY_BIKE = [];
};

CELLE_CLICK_ACTIONS = DEPLOY_BIKE;