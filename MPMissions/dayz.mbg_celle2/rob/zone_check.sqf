
_meters = player distance [8923.1104, 2669.0432, 1.6962879];

waitUntil (_meters > 40) then {
	if (robComplete == 1) exitWith {};
	if !(robComplete == 1) exitWith {
		failRob = 1;
		cutText [format["You are to far from the bank! Robbery Failed!"], "PLAIN DOWN"];
	};
};
