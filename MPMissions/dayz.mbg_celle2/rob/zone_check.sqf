private [_bankLoc];

_meters = player distance [7014.4897, 7645.3999, 1.6962879];

waitUntil (_meters >= 50) then {
	if (_robComplete == 1) exitWith {};
	if !(_robComplete == 1) exitWith {
		_failRob = 1;
		cutText [format["You are to far from the bank! Robbery Failed!"], "PLAIN DOWN"];
	};
};
