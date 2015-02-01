//Hunter Trader test
_vehicle_1001 = objNull;
if (true) then
{
  _this = createAgent ["HazmatVest_Red_DZC", [9150.39, 2149.45, 0], [], 0, "CAN_COLLIDE"];
  _vehicle_1001 = _this;
  _this setDir 239;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};
