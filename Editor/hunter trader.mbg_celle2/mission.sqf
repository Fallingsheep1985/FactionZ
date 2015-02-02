activateAddons [ 
  "map_eu"
];

activateAddons ["map_eu"];
initAmbientLife;

_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_unit_1 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["Asano_DZC", [7140.8608, 2133.1089, -0.2498024], [], 0, "CAN_COLLIDE"];
  _unit_1 = _this;
  _this setDir 334.32977;
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
};

_vehicle_0 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_stack_EP1", [7145.082, 2138.9329, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_0 = _this;
  _this setDir 51.294128;
  _this setPos [7145.082, 2138.9329, 3.8146973e-006];
};

_vehicle_1 = objNull;
if (true) then
{
  _this = createVehicle ["Land_cages_EP1", [7140.6401, 2130.7373, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_1 = _this;
  _this setDir 264.85663;
  _this setPos [7140.6401, 2130.7373, 5.7220459e-006];
};

_vehicle_4 = objNull;
if (true) then
{
  _this = createVehicle ["ClutterCutter_EP1", [7140.7417, 2135.9629, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_4 = _this;
  _this setDir 24.287319;
  _this setPos [7140.7417, 2135.9629, 5.7220459e-006];
};

_vehicle_5 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_EP1", [7144.9731, 2138.905, 0.19409423], [], 0, "CAN_COLLIDE"];
  _vehicle_5 = _this;
  _this setDir -125.15972;
  _this setPos [7144.9731, 2138.905, 0.19409423];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_big_EP1", [7141.5059, 2131.9524, 0.40778273], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setDir 152.27458;
  _this setPos [7141.5059, 2131.9524, 0.40778273];
};

_vehicle_8 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stand_meat_EP1", [7148.1167, 2129.7839, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_8 = _this;
  _this setDir 52.575035;
  _this setPos [7148.1167, 2129.7839, 6.6757202e-006];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stand_waterl_EP1", [7153.0928, 2137.2842, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setDir 76.626022;
  _this setPos [7153.0928, 2137.2842, 6.6757202e-006];
};

_vehicle_12 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [7153.6685, 2135.0889, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_12 = _this;
  _this setDir 122.72434;
  _this setPos [7153.6685, 2135.0889, 1.9073486e-006];
};

_vehicle_14 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [7153.3179, 2133.7539], [], 0, "CAN_COLLIDE"];
  _vehicle_14 = _this;
  _this setDir 150.35762;
  _this setPos [7153.3179, 2133.7539];
};

_vehicle_16 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [7148.2085, 2138.6238, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_16 = _this;
  _this setDir 122.72434;
  _this setPos [7148.2085, 2138.6238, 3.8146973e-006];
};

_vehicle_19 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_stack_EP1", [7146.6963, 2139.6589, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_19 = _this;
  _this setDir 122.71375;
  _this setPos [7146.6963, 2139.6589, 1.9073486e-006];
};

_vehicle_22 = objNull;
if (true) then
{
  _this = createVehicle ["Land_transport_cart_EP1", [7141.5459, 2140.4905, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_22 = _this;
  _this setDir 44.878738;
  _this setPos [7141.5459, 2140.4905, 5.7220459e-006];
};

_vehicle_23 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_EP1", [7145.6045, 2140.7773, 2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_23 = _this;
  _this setDir 105.70416;
  _this setPos [7145.6045, 2140.7773, 2.8610229e-006];
};

_vehicle_25 = objNull;
if (true) then
{
  _this = createVehicle ["Land_stand_meat_EP1", [7149.8892, 2132.0332, 8.5830688e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_25 = _this;
  _this setDir 34.078655;
  _this setPos [7149.8892, 2132.0332, 8.5830688e-006];
};

_vehicle_28 = objNull;
if (true) then
{
  _this = createVehicle ["FoldTable", [7147.4385, 2133.0952, -0.023427216], [], 0, "CAN_COLLIDE"];
  _vehicle_28 = _this;
  _this setDir -52.861351;
  _this setPos [7147.4385, 2133.0952, -0.023427216];
};

_vehicle_29 = objNull;
if (true) then
{
  _this = createVehicle ["SmallTable", [7140.5068, 2133.6736, -0.049774155], [], 0, "CAN_COLLIDE"];
  _vehicle_29 = _this;
  _this setDir -42.077789;
  _this setPos [7140.5068, 2133.6736, -0.049774155];
};

_vehicle_32 = objNull;
if (true) then
{
  _this = createVehicle ["WeaponHolder_ItemJerrycanSide", [7147.1147, 2137.5715, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_32 = _this;
  _this setDir 24.287319;
  _this setPos [7147.1147, 2137.5715, 7.6293945e-006];
};

_vehicle_33 = objNull;
if (true) then
{
  _this = createVehicle ["WeaponHolder_ItemJerrycan", [7147.8086, 2137.947, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_33 = _this;
  _this setDir -50.257088;
  _this setPos [7147.8086, 2137.947, 1.9073486e-006];
};

_vehicle_34 = objNull;
if (true) then
{
  _this = createVehicle ["TentStorage", [7144.8203, 2131.1638, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_34 = _this;
  _this setDir 154.57848;
  _this setPos [7144.8203, 2131.1638, -9.5367432e-007];
};

_vehicle_35 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Campfire_burning", [7144.3921, 2135.3362, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_35 = _this;
  _this setDir 24.287319;
  _this setPos [7144.3921, 2135.3362, 6.4849854e-005];
};

_vehicle_37 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [7152.1816, 2140.0479, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_37 = _this;
  _this setDir -278.03925;
  _this setPos [7152.1816, 2140.0479, 4.7683716e-006];
};

_vehicle_38 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_can", [7139.6396, 2132.6675, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_38 = _this;
  _this setDir 24.287319;
  _this setPos [7139.6396, 2132.6675, 1.9073486e-006];
};

_vehicle_45 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7151.1348, 2140.95, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_45 = _this;
  _this setDir 197.96944;
  _this setPos [7151.1348, 2140.95, 5.7220459e-006];
};

_vehicle_47 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7146.4014, 2142.5139, -2.8610229e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_47 = _this;
  _this setDir 197.96944;
  _this setPos [7146.4014, 2142.5139, -2.8610229e-006];
};

_vehicle_49 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7154.4448, 2137.8743, 6.6757202e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_49 = _this;
  _this setDir 248.77263;
  _this setPos [7154.4448, 2137.8743, 6.6757202e-006];
};

_vehicle_51 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7154.7354, 2133.1309, -9.5367432e-007], [], 0, "CAN_COLLIDE"];
  _vehicle_51 = _this;
  _this setDir 284.27469;
  _this setPos [7154.7354, 2133.1309, -9.5367432e-007];
};

_vehicle_53 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7151.9297, 2129.5161, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_53 = _this;
  _this setDir 331.14355;
  _this setPos [7151.9297, 2129.5161, 3.8146973e-006];
};

_vehicle_55 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7147.3433, 2127.7246, -2.0980835e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_55 = _this;
  _this setDir 346.42572;
  _this setPos [7147.3433, 2127.7246, -2.0980835e-005];
};

_vehicle_57 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7142.5923, 2128.0164, 4.7683716e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_57 = _this;
  _this setDir 380.31644;
  _this setPos [7142.5923, 2128.0164, 4.7683716e-006];
};

_vehicle_59 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7138.667, 2130.7507, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_59 = _this;
  _this setDir 409.58157;
  _this setPos [7138.667, 2130.7507, 5.7220459e-006];
};

_vehicle_61 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7141.6157, 2143.0088, 2.4795532e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_61 = _this;
  _this setDir 173.71318;
  _this setPos [7141.6157, 2143.0088, 2.4795532e-005];
};

_vehicle_63 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7137.814, 2140.668, 1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_63 = _this;
  _this setDir 123.09575;
  _this setPos [7137.814, 2140.668, 1.9073486e-006];
};

_vehicle_66 = objNull;
if (true) then
{
  _this = createVehicle ["Land_cages_EP1", [7142.2817, 2131.4343, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_66 = _this;
  _this setDir 224.73978;
  _this setPos [7142.2817, 2131.4343, 7.6293945e-006];
};

_vehicle_69 = objNull;
if (true) then
{
  _this = createVehicle ["Land_bags_stack_EP1", [7152.0347, 2135.0261, 9.5367432e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_69 = _this;
  _this setDir 51.294128;
  _this setPos [7152.0347, 2135.0261, 9.5367432e-006];
};

_vehicle_72 = objNull;
if (true) then
{
  _this = createVehicle ["Land_covering_hut_EP1", [7152.8271, 2134.5813, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_72 = _this;
  _this setDir -73.769753;
  _this setPos [7152.8271, 2134.5813, -1.9073486e-006];
};

_vehicle_79 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Gate_Wood1", [7136.3184, 2137.9124, -1.9073486e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_79 = _this;
  _this setDir 101.47314;
  _this setPos [7136.3184, 2137.9124, -1.9073486e-006];
};

_vehicle_81 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Wall_Wood1_5", [7136.6035, 2135.0664, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_81 = _this;
  _this setDir 80.921074;
  _this setPos [7136.6035, 2135.0664, 3.8146973e-006];
};

_unit_4 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["CDF_Soldier_AR", [8926.4814, 2119.6824, 5.7220459e-006], [], 0, "CAN_COLLIDE"];
  _unit_4 = _this;
  _this setDir 123.1735;
  _this setUnitAbility 0.60000002;
  if (false) then {_group_0 selectLeader _this;};
  if (true) then {setPlayable _this;};
};

processInitCommands;
runInitScript;
finishMissionInit;
