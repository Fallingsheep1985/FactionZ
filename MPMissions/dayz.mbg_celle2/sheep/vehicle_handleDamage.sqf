private["_selection","_state","_strH","_total","_unit"];


//***Zupa Config ****//


_godmodeVechilesEverywhere = false; // Godmode on all locked vehicles
_onlyLockedVehicles = false; //Plotarea: Godmode for Only locked vehicles (true) or locked and unlocked(false)
_onlyVehicleWithoutGear = false; // Only godmode on vehicles that hold no gear.
_safeZoneGodVehicle = true; // Godmode vehicles in safezones. (or specific zone's)


// donator plotpole only works with PLOT FOR LIFE, set FALSE if you dont have it.
_donatorsPlots = false; // True = only godmode vehicles for donaters in the list, False = godmode for every guy.
_plotDonators = ["76561198101253426","505"]; // PUID's of poeple who donated for plotpole


// celle safezone area's - change these to other coordinates for other maps. ( You can also add specific locations on the map.
_safezones = [ 
[[1692, 530],100,"Base1"]
,[[212, 1769],100,"Base2"]
,[[860, 5239],100,"Base3"]
,[[1136, 8885],100,"Base4"]
,[[2969, 9162],100,"Base5"]
//,[[4299, 10447],100,"Base6"]
,[[6459, 9037],100,"Base7"]
,[[8699, 10175],100,"Base8"]
,[[9172, 11553],100,"Base9"]
//,[[10796, 9112],100,"Base10"]
,[[11169, 7757],100,"Base11"] // [[x,y],distance,"just name"]
];


//***END Config ****//


_unit = _this select 0;
_selection = _this select 1;
_total = _this select 2;
_state = true;


_HPBefore = -1;


if (_selection != "") then {
_strH = "hit_" + _selection;
_HPBefore = [_unit,_strH] call object_getHit; 


} else {
_strH = "totalDmg";
_HPBefore = getDammage _unit;




};


if(_total > _HPBefore)then{


if((locked _unit && _godmodeVechilesEverywhere  && (count (crew _unit)) < 1))then{_state = false;
};


if(_state)then{
if(_safeZoneGodVehicle )then{
{if ((_unit distance (_x select 0)) < (_x select 1)) then {_state = false;
};} forEach _safezones;
};
};




if(_state)then{
_gearCount = 0;
if(_onlyVehicleWithoutGear)then{
//_weaps = count(getWeaponCargo _unit);
//_mags = count(getMagazineCargo _unit);
//_backs = count(getBackpackCargo _unit);
//_gearCount = _gearCount + _weaps + _mags + _backs;
};
_plots = nearestObjects [_unit, ["Plastic_Pole_EP1_DZ"], DZE_PlotPole select 0];	
if((count(_plots) > 0))then{		
	_thePlot = _plots select 0;
	_plotOwner = _thePlot getVariable ["ownerPUID",0];
if ( (_gearCount == 0) &&(locked _unit || !(_onlyLockedVehicles) ) && (count (crew _unit)) < 1 && (  !(_donatorsPlots) || (_plotOwner in _plotDonators))) then {_state = false;

};
};
};

}; //fix
if(_state)then{


if (_total >= 0.98) then {
        _total = 1.0;
};


if (local _unit) then {
if (_total > 0) then {


_unit setVariable [_strH, _total, true];
_unit setHit [_selection, _total];


if (isServer) then {
[_unit, "damage"] call server_updateObject;
} else {
PVDZE_veh_Update = [_unit,"damage"];
publicVariableServer "PVDZE_veh_Update";
};
};
} else {
// vehicle is not local to this client, ask the client which vehicle is local to set damage
/* PVS/PVC - Skaronator */
PVDZE_send = [_unit,"VehHandleDam",_this];
publicVariableServer "PVDZE_send";
};


}else{
_total = _HPBefore;
};
// all "HandleDamage event" functions should return the effective damage that the engine will record for that part


_total