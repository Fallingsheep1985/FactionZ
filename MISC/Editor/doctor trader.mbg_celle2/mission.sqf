activateAddons [
];

activateAddons [];
initAmbientLife;

_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_unit_0 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["Asano_DZC", [8899.4492, 2131.6995, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _unit_0 = _this;
  _this setDir 84.416573;
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
  if (true) then {setPlayable _this;};
};

_this = createMarker ["TraderTest", [8900.3662, 2131.6316, 4.7683716e-006]];
_this setMarkerText "Trader";
_this setMarkerShape "ELLIPSE";
_this setMarkerType "Dot";
_this setMarkerColor "ColorRed";
_this setMarkerBrush "Solid";
_marker_0 = _this;

processInitCommands;
runInitScript;
finishMissionInit;
