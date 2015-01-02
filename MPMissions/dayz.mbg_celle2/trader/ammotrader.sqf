//Doctor Trader test
_vehicle_1000 = objNull;
if (true) then
{
  _this = createAgent ["CZ_Heavy2_DZC", [8899.4492, 2130.6995, 4.7683716], [], 0, "CAN_COLLIDE"];
  _vehicle_1000 = _this;
  _this setDir 84.416573;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};
