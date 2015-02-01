//Hunter Trader test
_vehicle_1001 = objNull;
if (true) then
{
  _this = createAgent ["Soldier3_SL_DZC", [2085.1157, 7641.7979, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_1001 = _this;
  _this setDir -149.49876;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};