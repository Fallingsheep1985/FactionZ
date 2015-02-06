activateAddons [ 
  "bw_cj187_bus",
  "kpfs_lada",
  "map_eu"
];

activateAddons ["bw_cj187_bus", "kpfs_lada", "map_eu"];
initAmbientLife;

_this = createCenter west;
_center_0 = _this;

_group_0 = createGroup _center_0;

_unit_0 = objNull;
if (true) then
{
  _this = _group_0 createUnit ["Asano_DZC", [2087.1538, 7642.292, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _unit_0 = _this;
  _this setDir -145.49876;
  _this setUnitAbility 0.60000002;
  if (true) then {_group_0 selectLeader _this;};
  if (true) then {selectPlayer _this;};
  if (true) then {setPlayable _this;};
};

_vehicle_3 = objNull;
if (true) then
{
  _this = createVehicle ["as_su25_wreck", [2113.3455, 7593.8066], [], 0, "CAN_COLLIDE"];
  _vehicle_3 = _this;
  _this setDir -40.486572;
  _this setPos [2113.3455, 7593.8066];
};

_vehicle_5 = objNull;
if (true) then
{
  _this = createVehicle ["as_an2_wreck", [2099.5093, 7589.9434, -0.17187114], [], 0, "CAN_COLLIDE"];
  _vehicle_5 = _this;
  _this setDir 152.19615;
  _this setPos [2099.5093, 7589.9434, -0.17187114];
};

_vehicle_6 = objNull;
if (true) then
{
  _this = createVehicle ["as_ah64_wreck", [2108.5461, 7587.7168, -0.97443593], [], 0, "CAN_COLLIDE"];
  _vehicle_6 = _this;
  _this setDir 206.0466;
  _this setPos [2108.5461, 7587.7168, -0.97443593];
};

_vehicle_7 = objNull;
if (true) then
{
  _this = createVehicle ["as_ch47_wreck", [2099.9907, 7609.7246, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_7 = _this;
  _this setPos [2099.9907, 7609.7246, 7.6293945e-005];
};

_vehicle_9 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [2091.1414, 7648.7671], [], 0, "CAN_COLLIDE"];
  _vehicle_9 = _this;
  _this setDir 61.375515;
  _this setPos [2091.1414, 7648.7671];
};

_vehicle_10 = objNull;
if (true) then
{
  _this = createVehicle ["BMP2Wreck", [2098.3655, 7634.9722, -1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_10 = _this;
  _this setDir 58.88393;
  _this setPos [2098.3655, 7634.9722, -1.5258789e-005];
};

_vehicle_11 = objNull;
if (true) then
{
  _this = createVehicle ["BRDMWreck", [2102.3481, 7625.2339, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_11 = _this;
  _this setDir 74.957672;
  _this setPos [2102.3481, 7625.2339, 0.00012207031];
};

_vehicle_12 = objNull;
if (true) then
{
  _this = createVehicle ["HMMWVWreck", [2092.4849, 7646.1011, -7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_12 = _this;
  _this setDir 62.530087;
  _this setPos [2092.4849, 7646.1011, -7.6293945e-006];
};

_vehicle_13 = objNull;
if (true) then
{
  _this = createVehicle ["hiluxWreck", [2093.4473, 7642.7241], [], 0, "CAN_COLLIDE"];
  _vehicle_13 = _this;
  _this setDir 70.02906;
  _this setPos [2093.4473, 7642.7241];
};

_vehicle_17 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [2081.0015, 7626.2822], [], 0, "CAN_COLLIDE"];
  _vehicle_17 = _this;
  _this setDir 231.16135;
  _this setPos [2081.0015, 7626.2822];
};

_vehicle_20 = objNull;
if (true) then
{
  _this = createVehicle ["LADAWreck", [2079.3997, 7628.0742, -1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_20 = _this;
  _this setDir 233.55832;
  _this setPos [2079.3997, 7628.0742, -1.9073486e-005];
};

_vehicle_23 = objNull;
if (true) then
{
  _this = createVehicle ["UAZWreck", [2114.4646, 7607.6387, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_23 = _this;
  _this setDir 66.750214;
  _this setPos [2114.4646, 7607.6387, 7.6293945e-006];
};

_vehicle_24 = objNull;
if (true) then
{
  _this = createVehicle ["T72Wreck", [2111.7266, 7611.9639, 1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_24 = _this;
  _this setDir 82.231155;
  _this setPos [2111.7266, 7611.9639, 1.1444092e-005];
};

_vehicle_27 = objNull;
if (true) then
{
  _this = createVehicle ["datsun02Wreck", [2109.7913, 7616.0264], [], 0, "CAN_COLLIDE"];
  _vehicle_27 = _this;
  _this setDir 52.724842;
  _this setPos [2109.7913, 7616.0264];
};

_vehicle_32 = objNull;
if (true) then
{
  _this = createVehicle ["UralWreck", [2085.9561, 7617.9063, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_32 = _this;
  _this setDir -111.46486;
  _this setPos [2085.9561, 7617.9063, 3.8146973e-006];
};

_vehicle_35 = objNull;
if (true) then
{
  _this = createVehicle ["UH1Wreck", [2091.9551, 7608.1797, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_35 = _this;
  _this setDir 120.92124;
  _this setPos [2091.9551, 7608.1797, 7.6293945e-006];
};

_vehicle_37 = objNull;
if (true) then
{
  _this = createVehicle ["SKODAWreck", [2098.594, 7631.7319, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_37 = _this;
  _this setDir 428.71423;
  _this setPos [2098.594, 7631.7319, 3.0517578e-005];
};

_vehicle_39 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Barricade", [2081.4998, 7645.4585, 0.1435826], [], 0, "CAN_COLLIDE"];
  _vehicle_39 = _this;
  _this setDir 153.03073;
  _this setPos [2081.4998, 7645.4585, 0.1435826];
};

_vehicle_41 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Square_EP1", [2080.5493, 7638.2358, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_41 = _this;
  _this setPos [2080.5493, 7638.2358, 3.8146973e-005];
};

_vehicle_42 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Heap_EP1", [2087.4951, 7613.9766, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_42 = _this;
  _this setPos [2087.4951, 7613.9766, 3.8146973e-005];
};

_vehicle_43 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_4_EP1", [2101.2136, 7604.7769, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_43 = _this;
  _this setPos [2101.2136, 7604.7769, 3.8146973e-006];
};

_vehicle_44 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Rubble_EP1", [2120.6011, 7590.4937, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_44 = _this;
  _this setDir -30.213306;
  _this setPos [2120.6011, 7590.4937, 2.6702881e-005];
};

_vehicle_45 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Shed_M01_EP1", [2084.7993, 7643.6792, -1.1444092e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_45 = _this;
  _this setDir -23.832361;
  _this setPos [2084.7993, 7643.6792, -1.1444092e-005];
};

_vehicle_46 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2087.762, 7632.3296, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_46 = _this;
  _this setDir 45.040638;
  _this setPos [2087.762, 7632.3296, 1.5258789e-005];
};

_vehicle_47 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [2082.2515, 7641.9829], [], 0, "CAN_COLLIDE"];
  _vehicle_47 = _this;
  _this setDir -52.748852;
  _this setPos [2082.2515, 7641.9829];
};

_vehicle_48 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Coil_EP1", [2109.3818, 7607.5386, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_48 = _this;
  _this setPos [2109.3818, 7607.5386, 7.6293945e-005];
};

_vehicle_49 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2079.1104, 7641.9146, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_49 = _this;
  _this setPos [2079.1104, 7641.9146, 7.6293945e-006];
};

_vehicle_50 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2087.083, 7645.3267, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_50 = _this;
  _this setPos [2087.083, 7645.3267, 8.0108643e-005];
};

_vehicle_51 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2087.0916, 7643.7773, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_51 = _this;
  _this setDir -22.865049;
  _this setPos [2087.0916, 7643.7773, 4.196167e-005];
};

_vehicle_53 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2089.5398, 7630.6196], [], 0, "CAN_COLLIDE"];
  _vehicle_53 = _this;
  _this setDir -33.577625;
  _this setPos [2089.5398, 7630.6196];
};

_vehicle_55 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2089.718, 7632.8003, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_55 = _this;
  _this setPos [2089.718, 7632.8003, 3.4332275e-005];
};

_vehicle_56 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Garage01_EP1", [2071.6804, 7630.7007, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_56 = _this;
  _this setDir 154.87839;
  _this setPos [2071.6804, 7630.7007, 2.6702881e-005];
};

_vehicle_57 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo1Ao_EP1", [2095.7402, 7599.2788, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_57 = _this;
  _this setDir 211.56949;
  _this setPos [2095.7402, 7599.2788, 1.5258789e-005];
};

_vehicle_58 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo1Bo_EP1", [2064.0769, 7624.5146, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_58 = _this;
  _this setDir 150.64398;
  _this setPos [2064.0769, 7624.5146, 3.8146973e-005];
};

_vehicle_59 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_CargoMarket1a_EP1", [2095.6741, 7637.5977, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_59 = _this;
  _this setDir 65.359192;
  _this setPos [2095.6741, 7637.5977, 2.2888184e-005];
};

_vehicle_62 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Cargo2A_EP1", [2076.4741, 7647.8311, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_62 = _this;
  _this setDir 59.219849;
  _this setPos [2076.4741, 7647.8311, 1.5258789e-005];
};

_vehicle_65 = objNull;
if (true) then
{
  _this = createVehicle ["BW_Ikarus2", [2102.6323, 7621.5713, 0.0001411438], [], 0, "CAN_COLLIDE"];
  _vehicle_65 = _this;
  _this setDir -115.60014;
  _this setPos [2102.6323, 7621.5713, 0.0001411438];
};

_vehicle_66 = objNull;
if (true) then
{
  _this = createVehicle ["BW_Ikarus1", [2105.572, 7618.7554], [], 0, "CAN_COLLIDE"];
  _vehicle_66 = _this;
  _this setDir -116.2699;
  _this setPos [2105.572, 7618.7554];
};

_vehicle_68 = objNull;
if (true) then
{
  _this = createVehicle ["Volha_1_TK_CIV_EP1", [2102.5674, 7628.4976], [], 0, "CAN_COLLIDE"];
  _vehicle_68 = _this;
  _this setDir -114.14458;
  _this setPos [2102.5674, 7628.4976];
};

_vehicle_69 = objNull;
if (true) then
{
  _this = createVehicle ["SkodaGreen", [2101.4404, 7630.8936, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_69 = _this;
  _this setDir -113.17673;
  _this setPos [2101.4404, 7630.8936, 7.6293945e-006];
};

_vehicle_70 = objNull;
if (true) then
{
  _this = createVehicle ["Lada2_GDR", [2077.1296, 7630.8804, 2.6702881e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_70 = _this;
  _this setDir 66.37635;
  _this setPos [2077.1296, 7630.8804, 2.6702881e-005];
};

_vehicle_74 = objNull;
if (true) then
{
  _this = createVehicle ["datsun1_civil_3_open", [2098.6814, 7597.8135, 6.4849854e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_74 = _this;
  _this setDir 33.042;
  _this setPos [2098.6814, 7597.8135, 6.4849854e-005];
};

_vehicle_75 = objNull;
if (true) then
{
  _this = createVehicle ["UralCivil2", [2083.5129, 7620.9326, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_75 = _this;
  _this setDir 66.748955;
  _this setPos [2083.5129, 7620.9326, 6.8664551e-005];
};

_vehicle_76 = objNull;
if (true) then
{
  _this = createVehicle ["V3S_Civ", [2082.0388, 7623.8638], [], 0, "CAN_COLLIDE"];
  _vehicle_76 = _this;
  _this setDir 65.626152;
  _this setPos [2082.0388, 7623.8638];
};

_vehicle_77 = objNull;
if (true) then
{
  _this = createVehicle ["UAZ_CDF", [2092.8081, 7639.5547, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_77 = _this;
  _this setDir -110.67268;
  _this setPos [2092.8081, 7639.5547, 6.8664551e-005];
};

_vehicle_78 = objNull;
if (true) then
{
  _this = createVehicle ["car_sedan", [2102.3293, 7596.3345, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_78 = _this;
  _this setDir 0.32338336;
  _this setPos [2102.3293, 7596.3345, 7.6293945e-005];
};

_vehicle_79 = objNull;
if (true) then
{
  _this = createVehicle ["Old_moto_TK_Civ_EP1", [2074.6768, 7627.4097, -0.12956984], [], 0, "CAN_COLLIDE"];
  _vehicle_79 = _this;
  _this setDir 68.332329;
  _this setPos [2074.6768, 7627.4097, -0.12956984];
};

_vehicle_80 = objNull;
if (true) then
{
  _this = createVehicle ["VWGolf", [2095.897, 7599.6606, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_80 = _this;
  _this setDir 31.263969;
  _this setPos [2095.897, 7599.6606, 0.00011444092];
};

_vehicle_90 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Ind_Workshop01_box", [2073.7427, 7630.2427, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_90 = _this;
  _this setDir -295.04254;
  _this setPos [2073.7427, 7630.2427, 7.6293945e-006];
};

_vehicle_91 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_SeaCrate", [2115.2163, 7586.8223, 0.0001373291], [], 0, "CAN_COLLIDE"];
  _vehicle_91 = _this;
  _this setDir -125.2631;
  _this setPos [2115.2163, 7586.8223, 0.0001373291];
};

_vehicle_95 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Ind_TankSmall", [2075.7158, 7622.7368, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_95 = _this;
  _this setDir -23.222528;
  _this setPos [2075.7158, 7622.7368, 3.0517578e-005];
};

_vehicle_96 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_Ind_TankSmall2", [2068.2288, 7628.1108, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_96 = _this;
  _this setDir 64.804924;
  _this setPos [2068.2288, 7628.1108, 7.6293945e-005];
};

_vehicle_99 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_water_tank", [2116.5789, 7595.5425, -1.0705572], [], 0, "CAN_COLLIDE"];
  _vehicle_99 = _this;
  _this setDir -117.84143;
  _this setPos [2116.5789, 7595.5425, -1.0705572];
};

_vehicle_104 = objNull;
if (true) then
{
  _this = createVehicle ["Land_psi_bouda", [2080.7412, 7641.874, 9.1552734e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_104 = _this;
  _this setDir 85.902763;
  _this setPos [2080.7412, 7641.874, 9.1552734e-005];
};

_vehicle_105 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2076.4905, 7645.8052, -0.1023524], [], 0, "CAN_COLLIDE"];
  _vehicle_105 = _this;
  _this setDir -208.22621;
  _this setPos [2076.4905, 7645.8052, -0.1023524];
};

_vehicle_106 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2122.2976, 7596.0327, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_106 = _this;
  _this setDir 9.5166206;
  _this setPos [2122.2976, 7596.0327, 3.0517578e-005];
};

_vehicle_109 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2083.3118, 7649.5571, -0.16652459], [], 0, "CAN_COLLIDE"];
  _vehicle_109 = _this;
  _this setDir -210.84937;
  _this setPos [2083.3118, 7649.5571, -0.16652459];
};

_vehicle_111 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2079.9734, 7647.6934, -0.04545401], [], 0, "CAN_COLLIDE"];
  _vehicle_111 = _this;
  _this setDir -208.22621;
  _this setPos [2079.9734, 7647.6934, -0.04545401];
};

_vehicle_113 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2086.6831, 7651.4888, -0.17143252], [], 0, "CAN_COLLIDE"];
  _vehicle_113 = _this;
  _this setDir -208.22621;
  _this setPos [2086.6831, 7651.4888, -0.17143252];
};

_vehicle_115 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2095.4644, 7647.1343, 0.12303898], [], 0, "CAN_COLLIDE"];
  _vehicle_115 = _this;
  _this setDir -122.59682;
  _this setPos [2095.4644, 7647.1343, 0.12303898];
};

_vehicle_118 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2090.45, 7652.3149, -0.27271196], [], 0, "CAN_COLLIDE"];
  _vehicle_118 = _this;
  _this setDir -174.71852;
  _this setPos [2090.45, 7652.3149, -0.27271196];
};

_vehicle_121 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2093.3794, 7650.459, -0.3847996], [], 0, "CAN_COLLIDE"];
  _vehicle_121 = _this;
  _this setDir -122.47748;
  _this setPos [2093.3794, 7650.459, -0.3847996];
};

_vehicle_125 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2097.5515, 7643.689, -0.15922081], [], 0, "CAN_COLLIDE"];
  _vehicle_125 = _this;
  _this setDir -122.47748;
  _this setPos [2097.5515, 7643.689, -0.15922081];
};

_vehicle_126 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2099.6584, 7640.3384, -0.20881188], [], 0, "CAN_COLLIDE"];
  _vehicle_126 = _this;
  _this setDir -122.59682;
  _this setPos [2099.6584, 7640.3384, -0.20881188];
};

_vehicle_130 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2101.7954, 7637.0039, -0.20451139], [], 0, "CAN_COLLIDE"];
  _vehicle_130 = _this;
  _this setDir -122.59682;
  _this setPos [2101.7954, 7637.0039, -0.20451139];
};

_vehicle_132 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2103.9287, 7633.6943, 0.0001411438], [], 0, "CAN_COLLIDE"];
  _vehicle_132 = _this;
  _this setDir -122.59682;
  _this setPos [2103.9287, 7633.6943, 0.0001411438];
};

_vehicle_137 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2110.2546, 7623.6514, -0.26770058], [], 0, "CAN_COLLIDE"];
  _vehicle_137 = _this;
  _this setDir -122.59682;
  _this setPos [2110.2546, 7623.6514, -0.26770058];
};

_vehicle_138 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2108.1213, 7626.9609, -0.1638113], [], 0, "CAN_COLLIDE"];
  _vehicle_138 = _this;
  _this setDir -122.59682;
  _this setPos [2108.1213, 7626.9609, -0.1638113];
};

_vehicle_139 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2105.9844, 7630.2954, -0.1637007], [], 0, "CAN_COLLIDE"];
  _vehicle_139 = _this;
  _this setDir -122.59682;
  _this setPos [2105.9844, 7630.2954, -0.1637007];
};

_vehicle_146 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2116.0671, 7613.4824, -0.081363134], [], 0, "CAN_COLLIDE"];
  _vehicle_146 = _this;
  _this setDir -105.55554;
  _this setPos [2116.0671, 7613.4824, -0.081363134];
};

_vehicle_147 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2112.3518, 7620.3091, -0.22010177], [], 0, "CAN_COLLIDE"];
  _vehicle_147 = _this;
  _this setDir -122.59682;
  _this setPos [2112.3518, 7620.3091, -0.22010177];
};

_vehicle_148 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2114.47, 7617.0073, -0.057514768], [], 0, "CAN_COLLIDE"];
  _vehicle_148 = _this;
  _this setDir -122.59682;
  _this setPos [2114.47, 7617.0073, -0.057514768];
};

_vehicle_153 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2116.8396, 7609.6094, -0.14394265], [], 0, "CAN_COLLIDE"];
  _vehicle_153 = _this;
  _this setDir -100.81619;
  _this setPos [2116.8396, 7609.6094, -0.14394265];
};

_vehicle_155 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2118.3271, 7606.041, -0.092772119], [], 0, "CAN_COLLIDE"];
  _vehicle_155 = _this;
  _this setDir -125.24493;
  _this setPos [2118.3271, 7606.041, -0.092772119];
};

_vehicle_158 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2120.6025, 7602.7939, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_158 = _this;
  _this setDir -125.24493;
  _this setPos [2120.6025, 7602.7939, 0.00011444092];
};

_vehicle_160 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2122.8645, 7599.5391, 0.011430147], [], 0, "CAN_COLLIDE"];
  _vehicle_160 = _this;
  _this setDir -125.24493;
  _this setPos [2122.8645, 7599.5391, 0.011430147];
};

_vehicle_162 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2124.3938, 7596.0107], [], 0, "CAN_COLLIDE"];
  _vehicle_162 = _this;
  _this setDir -99.465469;
  _this setPos [2124.3938, 7596.0107];
};

_vehicle_164 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2124.3455, 7592.1201, -0.090992294], [], 0, "CAN_COLLIDE"];
  _vehicle_164 = _this;
  _this setDir -78.629807;
  _this setPos [2124.3455, 7592.1201, -0.090992294];
};

_vehicle_166 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2119.2063, 7586.7852, -0.060917083], [], 0, "CAN_COLLIDE"];
  _vehicle_166 = _this;
  _this setDir -35.352974;
  _this setPos [2119.2063, 7586.7852, -0.060917083];
};

_vehicle_168 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2122.4685, 7589.0698, -0.079746068], [], 0, "CAN_COLLIDE"];
  _vehicle_168 = _this;
  _this setDir -35.94416;
  _this setPos [2122.4685, 7589.0698, -0.079746068];
};

_vehicle_171 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2115.9883, 7584.4878, -0.068303347], [], 0, "CAN_COLLIDE"];
  _vehicle_171 = _this;
  _this setDir -35.352974;
  _this setPos [2115.9883, 7584.4878, -0.068303347];
};

_vehicle_174 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2112.7722, 7582.2114, -0.073983103], [], 0, "CAN_COLLIDE"];
  _vehicle_174 = _this;
  _this setDir -35.352974;
  _this setPos [2112.7722, 7582.2114, -0.073983103];
};

_vehicle_177 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2109.5598, 7579.9028, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_177 = _this;
  _this setDir -35.352974;
  _this setPos [2109.5598, 7579.9028, 4.5776367e-005];
};

_vehicle_180 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2106.0186, 7578.9819, 0.00010681152], [], 0, "CAN_COLLIDE"];
  _vehicle_180 = _this;
  _this setDir 6.692101;
  _this setPos [2106.0186, 7578.9819, 0.00010681152];
};

_vehicle_182 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2096.7861, 7585.001, 0.00011444092], [], 0, "CAN_COLLIDE"];
  _vehicle_182 = _this;
  _this setDir 60.168533;
  _this setPos [2096.7861, 7585.001, 0.00011444092];
};

_vehicle_185 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2073.0181, 7644.0264, -0.090891697], [], 0, "CAN_COLLIDE"];
  _vehicle_185 = _this;
  _this setDir -208.22621;
  _this setPos [2073.0181, 7644.0264, -0.090891697];
};

_vehicle_187 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2069.5764, 7642.1953, -0.07940349], [], 0, "CAN_COLLIDE"];
  _vehicle_187 = _this;
  _this setDir -208.22621;
  _this setPos [2069.5764, 7642.1953, -0.07940349];
};

_vehicle_189 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2099.0444, 7581.8696, -0.079602778], [], 0, "CAN_COLLIDE"];
  _vehicle_189 = _this;
  _this setDir -311.28439;
  _this setPos [2099.0444, 7581.8696, -0.079602778];
};

_vehicle_192 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2102.2566, 7579.7617, 0.0001411438], [], 0, "CAN_COLLIDE"];
  _vehicle_192 = _this;
  _this setDir -344.02335;
  _this setPos [2102.2566, 7579.7617, 0.0001411438];
};

_vehicle_194 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2095.3264, 7588.6675, -0.056853965], [], 0, "CAN_COLLIDE"];
  _vehicle_194 = _this;
  _this setDir -283.181;
  _this setPos [2095.3264, 7588.6675, -0.056853965];
};

_vehicle_196 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2094.0559, 7592.3745, -0.079536363], [], 0, "CAN_COLLIDE"];
  _vehicle_196 = _this;
  _this setDir -294.70471;
  _this setPos [2094.0559, 7592.3745, -0.079536363];
};

_vehicle_198 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2092.3721, 7595.9409, -0.09092994], [], 0, "CAN_COLLIDE"];
  _vehicle_198 = _this;
  _this setDir -295.64896;
  _this setPos [2092.3721, 7595.9409, -0.09092994];
};

_vehicle_201 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2090.6711, 7599.5137, -0.12516308], [], 0, "CAN_COLLIDE"];
  _vehicle_201 = _this;
  _this setDir -295.64896;
  _this setPos [2090.6711, 7599.5137, -0.12516308];
};

_vehicle_204 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2088.9312, 7603.0615, -0.14892891], [], 0, "CAN_COLLIDE"];
  _vehicle_204 = _this;
  _this setDir -296.92648;
  _this setPos [2088.9312, 7603.0615, -0.14892891];
};

_vehicle_207 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2087.0955, 7606.5771, -0.14740185], [], 0, "CAN_COLLIDE"];
  _vehicle_207 = _this;
  _this setDir -298.66357;
  _this setPos [2087.0955, 7606.5771, -0.14740185];
};

_vehicle_210 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2085.2271, 7610.0449, -0.12508878], [], 0, "CAN_COLLIDE"];
  _vehicle_210 = _this;
  _this setDir -298.40662;
  _this setPos [2085.2271, 7610.0449, -0.12508878];
};

_vehicle_213 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2083.3481, 7613.5342, -0.11378629], [], 0, "CAN_COLLIDE"];
  _vehicle_213 = _this;
  _this setDir -298.40662;
  _this setPos [2083.3481, 7613.5342, -0.11378629];
};

_vehicle_215 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2081.449, 7616.9922, -0.10230266], [], 0, "CAN_COLLIDE"];
  _vehicle_215 = _this;
  _this setDir -298.40662;
  _this setPos [2081.449, 7616.9922, -0.10230266];
};

_vehicle_217 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2077.426, 7620.689, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_217 = _this;
  _this setDir -383.07016;
  _this setPos [2077.426, 7620.689, 3.8146973e-005];
};

_vehicle_219 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2073.8669, 7619.1553, -2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_219 = _this;
  _this setDir -384.12485;
  _this setPos [2073.8669, 7619.1553, -2.2888184e-005];
};

_vehicle_221 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2070.6426, 7619.6953, -0.091032885], [], 0, "CAN_COLLIDE"];
  _vehicle_221 = _this;
  _this setDir -317.68661;
  _this setPos [2070.6426, 7619.6953, -0.091032885];
};

_vehicle_223 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2068.0867, 7622.6348, -0.091703042], [], 0, "CAN_COLLIDE"];
  _vehicle_223 = _this;
  _this setDir -305.13809;
  _this setPos [2068.0867, 7622.6348, -0.091703042];
};

_vehicle_225 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2065.9922, 7626.0005, -0.078658625], [], 0, "CAN_COLLIDE"];
  _vehicle_225 = _this;
  _this setDir -298.40662;
  _this setPos [2065.9922, 7626.0005, -0.078658625];
};

_vehicle_227 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2064.4023, 7628.9189, -0.056836586], [], 0, "CAN_COLLIDE"];
  _vehicle_227 = _this;
  _this setDir -296.21967;
  _this setPos [2064.4023, 7628.9189, -0.056836586];
};

_vehicle_229 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2066.5598, 7639.7407, -0.10181349], [], 0, "CAN_COLLIDE"];
  _vehicle_229 = _this;
  _this setDir -228.6969;
  _this setPos [2066.5598, 7639.7407, -0.10181349];
};

_vehicle_231 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2063.4121, 7637.4429, -0.10246763], [], 0, "CAN_COLLIDE"];
  _vehicle_231 = _this;
  _this setDir -203.75571;
  _this setPos [2063.4121, 7637.4429, -0.10246763];
};

_vehicle_234 = objNull;
if (true) then
{
  _this = createVehicle ["Fence_corrugated_plate", [2080.1113, 7619.6626, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_234 = _this;
  _this setDir -297.41632;
  _this setPos [2080.1113, 7619.6626, 7.6293945e-005];
};

_vehicle_237 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Coil_EP1", [2109.3838, 7583.0693, 6.8664551e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_237 = _this;
  _this setPos [2109.3838, 7583.0693, 6.8664551e-005];
};

_vehicle_239 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Coil_EP1", [2088.5054, 7650.0825, 0.00014877319], [], 0, "CAN_COLLIDE"];
  _vehicle_239 = _this;
  _this setPos [2088.5054, 7650.0825, 0.00014877319];
};

_vehicle_242 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2093.606, 7599.7764, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_242 = _this;
  _this setPos [2093.606, 7599.7764, 1.9073486e-005];
};

_vehicle_244 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2112.6089, 7588.063, 0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_244 = _this;
  _this setPos [2112.6089, 7588.063, 0.00018310547];
};

_vehicle_246 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2114.532, 7589.1792, 0.00016403198], [], 0, "CAN_COLLIDE"];
  _vehicle_246 = _this;
  _this setDir -31.997412;
  _this setPos [2114.532, 7589.1792, 0.00016403198];
};

_vehicle_248 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2115.5994, 7589.6807, 0.00016403198], [], 0, "CAN_COLLIDE"];
  _vehicle_248 = _this;
  _this setDir -40.13195;
  _this setPos [2115.5994, 7589.6807, 0.00016403198];
};

_vehicle_251 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2103.1975, 7590.0811], [], 0, "CAN_COLLIDE"];
  _vehicle_251 = _this;
  _this setDir 45.040638;
  _this setPos [2103.1975, 7590.0811];
};

_vehicle_257 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_BoardsPack2", [2072.3638, 7642.3853, 0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_257 = _this;
  _this setDir 63.262901;
  _this setPos [2072.3638, 7642.3853, 0.0001449585];
};

_vehicle_258 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_BoardsPack1", [2121.0327, 7599.0093, 0.00019454956], [], 0, "CAN_COLLIDE"];
  _vehicle_258 = _this;
  _this setDir -34.273876;
  _this setPos [2121.0327, 7599.0093, 0.00019454956];
};

_vehicle_259 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [2095.2688, 7594.9741, 0.00019454956], [], 0, "CAN_COLLIDE"];
  _vehicle_259 = _this;
  _this setDir -20.568697;
  _this setPos [2095.2688, 7594.9741, 0.00019454956];
};

_vehicle_262 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [2100.3599, 7609.3037, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_262 = _this;
  _this setDir -21.289476;
  _this setPos [2100.3599, 7609.3037, 1.5258789e-005];
};

_vehicle_263 = objNull;
if (true) then
{
  _this = createVehicle ["ZavoraAnim", [2059.9568, 7636.4492, 0.00019836426], [], 0, "CAN_COLLIDE"];
  _vehicle_263 = _this;
  _this setDir -112.35464;
  _this setPos [2059.9568, 7636.4492, 0.00019836426];
};

_vehicle_264 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2067.8953, 7631.7627, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_264 = _this;
  _this setPos [2067.8953, 7631.7627, 7.6293945e-006];
};

_vehicle_265 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel5", [2088.4578, 7633.7007, 3.8146973e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_265 = _this;
  _this setPos [2088.4578, 7633.7007, 3.8146973e-006];
};

_vehicle_266 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel1", [2082.0876, 7614.4316, 0.00018692017], [], 0, "CAN_COLLIDE"];
  _vehicle_266 = _this;
  _this setPos [2082.0876, 7614.4316, 0.00018692017];
};

_vehicle_268 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel1", [2085.7888, 7614.6685, 0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_268 = _this;
  _this setPos [2085.7888, 7614.6685, 0.00018310547];
};

_vehicle_270 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel1", [2087.2283, 7613.2397, 0.00017547607], [], 0, "CAN_COLLIDE"];
  _vehicle_270 = _this;
  _this setPos [2087.2283, 7613.2397, 0.00017547607];
};

_vehicle_272 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Toilet", [2069.9829, 7641.1812, 8.7738037e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_272 = _this;
  _this setDir -26.271082;
  _this setPos [2069.9829, 7641.1812, 8.7738037e-005];
};

_vehicle_273 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel1", [2068.4028, 7640.8569, 0.0001373291], [], 0, "CAN_COLLIDE"];
  _vehicle_273 = _this;
  _this setPos [2068.4028, 7640.8569, 0.0001373291];
};

_vehicle_276 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2082.052, 7643.1128, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_276 = _this;
  _this setPos [2082.052, 7643.1128, 3.0517578e-005];
};

_vehicle_278 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2087.5203, 7634.0845, 5.7220459e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_278 = _this;
  _this setPos [2087.5203, 7634.0845, 5.7220459e-005];
};

_vehicle_280 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2087.9194, 7613.4814, 0.00016021729], [], 0, "CAN_COLLIDE"];
  _vehicle_280 = _this;
  _this setPos [2087.9194, 7613.4814, 0.00016021729];
};

_vehicle_283 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Heap_EP1", [2122.2295, 7592.5425, 0.00019836426], [], 0, "CAN_COLLIDE"];
  _vehicle_283 = _this;
  _this setPos [2122.2295, 7592.5425, 0.00019836426];
};

_vehicle_285 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Heap_EP1", [2116.0796, 7594.6904, 0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_285 = _this;
  _this setPos [2116.0796, 7594.6904, 0.00018310547];
};

_vehicle_287 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_Garb_Heap_EP1", [2101.6587, 7581.5327, 7.6293945e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_287 = _this;
  _this setPos [2101.6587, 7581.5327, 7.6293945e-005];
};

_vehicle_290 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2098.7766, 7586.2451, 0.0001335144], [], 0, "CAN_COLLIDE"];
  _vehicle_290 = _this;
  _this setDir -129.59697;
  _this setPos [2098.7766, 7586.2451, 0.0001335144];
};

_vehicle_293 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [2100.3691, 7607.3721, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_293 = _this;
  _this setDir -20.568697;
  _this setPos [2100.3691, 7607.3721, 7.6293945e-006];
};

_vehicle_295 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [2074.9922, 7643.7612, 0.00020217896], [], 0, "CAN_COLLIDE"];
  _vehicle_295 = _this;
  _this setDir -28.10647;
  _this setPos [2074.9922, 7643.7612, 0.00020217896];
};

_vehicle_297 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_palletsfoiled", [2080.1416, 7632.377, 4.9591064e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_297 = _this;
  _this setDir -29.752031;
  _this setPos [2080.1416, 7632.377, 4.9591064e-005];
};

_vehicle_298 = objNull;
if (true) then
{
  _this = createVehicle ["Garbage_container", [2075.6016, 7625.7007, 0.00016403198], [], 0, "CAN_COLLIDE"];
  _vehicle_298 = _this;
  _this setDir -26.17469;
  _this setPos [2075.6016, 7625.7007, 0.00016403198];
};

_vehicle_300 = objNull;
if (true) then
{
  _this = createVehicle ["Land_loco_742_blue", [2112.6775, 7602.8521, 0.0001449585], [], 0, "CAN_COLLIDE"];
  _vehicle_300 = _this;
  _this setDir -90.643967;
  _this setPos [2112.6775, 7602.8521, 0.0001449585];
};

_vehicle_301 = objNull;
if (true) then
{
  _this = createVehicle ["Notice_board", [2074.5852, 7635.7109, 0.00012207031], [], 0, "CAN_COLLIDE"];
  _vehicle_301 = _this;
  _this setDir 109.53509;
  _this setPos [2074.5852, 7635.7109, 0.00012207031];
};

_vehicle_302 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [2076.2737, 7626.6289, 0.00018310547], [], 0, "CAN_COLLIDE"];
  _vehicle_302 = _this;
  _this setPos [2076.2737, 7626.6289, 0.00018310547];
};

_vehicle_304 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [2106.0613, 7626.0752, 0.00020599365], [], 0, "CAN_COLLIDE"];
  _vehicle_304 = _this;
  _this setPos [2106.0613, 7626.0752, 0.00020599365];
};

_vehicle_306 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [2101.7957, 7607.3159, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_306 = _this;
  _this setDir 45.413971;
  _this setPos [2101.7957, 7607.3159, 1.5258789e-005];
};

_vehicle_310 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Ind_Timbers", [2062.6091, 7648.3521, 0.00017547607], [], 0, "CAN_COLLIDE"];
  _vehicle_310 = _this;
  _this setDir 7.9495497;
  _this setPos [2062.6091, 7648.3521, 0.00017547607];
};

_vehicle_312 = objNull;
if (true) then
{
  _this = createVehicle ["Loudspeakers_EP1", [2073.4963, 7634.5728, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_312 = _this;
  _this setPos [2073.4963, 7634.5728, 4.5776367e-005];
};

_vehicle_314 = objNull;
if (true) then
{
  _this = createVehicle ["Land_Misc_GContainer_Big", [2091.562, 7626.9575, 0.00020599365], [], 0, "CAN_COLLIDE"];
  _vehicle_314 = _this;
  _this setDir 60.014996;
  _this setPos [2091.562, 7626.9575, 0.00020599365];
};

_vehicle_316 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2102.3213, 7606.4502, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_316 = _this;
  _this setDir -0.083197564;
  _this setPos [2102.3213, 7606.4502, 8.0108643e-005];
};

_vehicle_318 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2101.0139, 7605.7607, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_318 = _this;
  _this setDir 54.546307;
  _this setPos [2101.0139, 7605.7607, 8.0108643e-005];
};

_vehicle_319 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2091.6306, 7639.3218, -0.39797285], [], 0, "CAN_COLLIDE"];
  _vehicle_319 = _this;
  _this setDir 64.755196;
  _this setPos [2091.6306, 7639.3218, -0.39797285];
};

_vehicle_321 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2102.2356, 7631.1748, -0.52303833], [], 0, "CAN_COLLIDE"];
  _vehicle_321 = _this;
  _this setDir 64.755196;
  _this setPos [2102.2356, 7631.1748, -0.52303833];
};

_vehicle_324 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2103.2559, 7628.9341, -0.43517533], [], 0, "CAN_COLLIDE"];
  _vehicle_324 = _this;
  _this setDir 64.755196;
  _this setPos [2103.2559, 7628.9341, -0.43517533];
};

_vehicle_326 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2104.6987, 7622.0952, -0.34077784], [], 0, "CAN_COLLIDE"];
  _vehicle_326 = _this;
  _this setDir 64.755196;
  _this setPos [2104.6987, 7622.0952, -0.34077784];
};

_vehicle_328 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2107.6677, 7619.3979, -0.34180859], [], 0, "CAN_COLLIDE"];
  _vehicle_328 = _this;
  _this setDir 64.755196;
  _this setPos [2107.6677, 7619.3979, -0.34180859];
};

_vehicle_330 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2099.4717, 7599.5977, -0.61307383], [], 0, "CAN_COLLIDE"];
  _vehicle_330 = _this;
  _this setDir 31.950373;
  _this setPos [2099.4717, 7599.5977, -0.61307383];
};

_vehicle_332 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2102.1523, 7598.3164, -0.55213094], [], 0, "CAN_COLLIDE"];
  _vehicle_332 = _this;
  _this setDir 0.81385332;
  _this setPos [2102.1523, 7598.3164, -0.55213094];
};

_vehicle_334 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2083.8032, 7620.9067, -0.12581366], [], 0, "CAN_COLLIDE"];
  _vehicle_334 = _this;
  _this setDir 64.755196;
  _this setPos [2083.8032, 7620.9067, -0.12581366];
};

_vehicle_336 = objNull;
if (true) then
{
  _this = createVehicle ["MAP_CncBlock_stripes", [2082.2444, 7624.0063, -0.32672283], [], 0, "CAN_COLLIDE"];
  _vehicle_336 = _this;
  _this setDir 64.755196;
  _this setPos [2082.2444, 7624.0063, -0.32672283];
};

_vehicle_341 = objNull;
if (true) then
{
  _this = createVehicle ["Land_tires_EP1", [2088.1467, 7643.2969, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_341 = _this;
  _this setDir -52.748852;
  _this setPos [2088.1467, 7643.2969, 3.4332275e-005];
};

_vehicle_347 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2088.1436, 7646.3584, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_347 = _this;
  _this setPos [2088.1436, 7646.3584, 3.0517578e-005];
};

_vehicle_349 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2088.5693, 7645.7104, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_349 = _this;
  _this setPos [2088.5693, 7645.7104, 3.4332275e-005];
};

_vehicle_351 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel4", [2076.1382, 7629.0171, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_351 = _this;
  _this setPos [2076.1382, 7629.0171, 7.6293945e-006];
};

_vehicle_354 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_palletsfoiled", [2084.4065, 7614.0576, 1.9073486e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_354 = _this;
  _this setDir -29.752031;
  _this setPos [2084.4065, 7614.0576, 1.9073486e-005];
};

_vehicle_357 = objNull;
if (true) then
{
  _this = createVehicle ["Paleta2", [2089.9121, 7638.6611, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_357 = _this;
  _this setDir 127.56017;
  _this setPos [2089.9121, 7638.6611, 4.5776367e-005];
};

_vehicle_360 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2099.6091, 7628.2246], [], 0, "CAN_COLLIDE"];
  _vehicle_360 = _this;
  _this setPos [2099.6091, 7628.2246];
};

_vehicle_363 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2099.1152, 7629.7861, 2.2888184e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_363 = _this;
  _this setDir -25.337145;
  _this setPos [2099.1152, 7629.7861, 2.2888184e-005];
};

_vehicle_367 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel5", [2100.2612, 7627.0132, 3.4332275e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_367 = _this;
  _this setPos [2100.2612, 7627.0132, 3.4332275e-005];
};

_vehicle_369 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel5", [2089.5981, 7646.7729, 1.5258789e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_369 = _this;
  _this setPos [2089.5981, 7646.7729, 1.5258789e-005];
};

_vehicle_371 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel5", [2078.1509, 7632.9058, 3.0517578e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_371 = _this;
  _this setPos [2078.1509, 7632.9058, 3.0517578e-005];
};

_vehicle_374 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2077.6516, 7629.1978, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_374 = _this;
  _this setPos [2077.6516, 7629.1978, 7.6293945e-006];
};

_vehicle_376 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2076.9031, 7632.7197, 3.8146973e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_376 = _this;
  _this setDir -31.957994;
  _this setPos [2076.9031, 7632.7197, 3.8146973e-005];
};

_vehicle_379 = objNull;
if (true) then
{
  _this = createVehicle ["Barrels", [2079.7969, 7630.3481, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_379 = _this;
  _this setDir -36.180641;
  _this setPos [2079.7969, 7630.3481, 4.5776367e-005];
};

_vehicle_382 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2087.2324, 7630.7051, 5.3405762e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_382 = _this;
  _this setDir 159.52332;
  _this setPos [2087.2324, 7630.7051, 5.3405762e-005];
};

_vehicle_384 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2087.9753, 7630.1641, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_384 = _this;
  _this setDir 17.247044;
  _this setPos [2087.9753, 7630.1641, 4.5776367e-005];
};

_vehicle_386 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2086.6399, 7632.0151, 4.196167e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_386 = _this;
  _this setDir 89.928734;
  _this setPos [2086.6399, 7632.0151, 4.196167e-005];
};

_vehicle_388 = objNull;
if (true) then
{
  _this = createVehicle ["Misc_TyreHeapEP1", [2088.1726, 7631.4487, 0.39631975], [], 0, "CAN_COLLIDE"];
  _vehicle_388 = _this;
  _this setDir 45.040638;
  _this setPos [2088.1726, 7631.4487, 0.39631975];
};

_vehicle_391 = objNull;
if (true) then
{
  _this = createVehicle ["Barrel1", [2097.8142, 7601.3018, 8.0108643e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_391 = _this;
  _this setPos [2097.8142, 7601.3018, 8.0108643e-005];
};

_vehicle_394 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2098.1729, 7602.1235, 4.5776367e-005], [], 0, "CAN_COLLIDE"];
  _vehicle_394 = _this;
  _this setDir 26.776701;
  _this setPos [2098.1729, 7602.1235, 4.5776367e-005];
};

_vehicle_396 = objNull;
if (true) then
{
  _this = createVehicle ["Fort_Crate_wood", [2094.4785, 7598.0864, 7.6293945e-006], [], 0, "CAN_COLLIDE"];
  _vehicle_396 = _this;
  _this setPos [2094.4785, 7598.0864, 7.6293945e-006];
};

processInitCommands;
runInitScript;
finishMissionInit;
