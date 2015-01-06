// heightcheck.sqf by Beerkan 1.20

_maxheight = _this select 0;
if !(isServer) exitwith{};
sleep 1;

while {alive player} do 
    {
        if ((getPos (player) select 2) > _maxheight) then {
	canDrink = false;
            };
    };