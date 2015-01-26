//Gamble Trader test
_vehicle_1001 = objNull;
if (true) then
{
  _this = createAgent ["CIV_Pilot1_DZC", [8926.4814, 2119.6824, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1001 = _this;
  _this setDir 84.416573;
  _this setVehicleInit "this allowDammage false; this disableAI 'FSM'; this disableAI 'MOVE'; this disableAI 'AUTOTARGET'; this disableAI 'TARGET'; this setBehaviour 'CARELESS'; this forceSpeed 0;";
  _this setUnitAbility 0.60000002;
_this allowDammage false; _this disableAI 'FSM'; _this disableAI 'MOVE'; _this disableAI 'AUTOTARGET'; _this disableAI 'TARGET'; _this setBehaviour 'CARELESS'; _this forceSpeed 0;_this enableSimulation false;
};
