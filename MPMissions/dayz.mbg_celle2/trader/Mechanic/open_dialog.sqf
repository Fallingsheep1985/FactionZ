//Open dialog
createDialog "RscDisplayMechanic";

//set pictures
ctrlSetText [1200, "trader\images\PartWheel.paa"];
ctrlSetText [1201, "trader\images\PartFueltank.paa"];
ctrlSetText [1202, "trader\images\PartGeneric.paa"];
ctrlSetText [1203, "trader\images\PartEngine.paa"];
ctrlSetText [1204, "trader\images\PartVRotor.paa"];
ctrlSetText [1205, "trader\images\PartGlass.paa"];
ctrlSetText [1206, "trader\images\ItemJerrycan.paa"];
ctrlSetText [1207, "trader\images\Itemtoolbox.paa"];

//
ctrlSetText[1600, format ["-%1" ,Wheel_Cost]];
ctrlSetText[1601, format ["-%1" ,Fueltank_Cost]];
ctrlSetText[1602, format ["-%1" ,Scrap_Cost]];
ctrlSetText[1603, format ["-%1" ,Engine_Cost]];
ctrlSetText[1604, format ["-%1" ,Rotor_Cost]];
ctrlSetText[1605, format ["-%1" ,Glass_Cost]];
ctrlSetText[1606, format ["-%1" ,Jerrycan_Cost]];
ctrlSetText[1607, format ["-%1" ,Toolbox_Cost]];
                              
ctrlSetText[1609, format ["+%1" ,Wheel_Sell]];
ctrlSetText[1610, format ["+%1" ,Fueltank_Sell]];
ctrlSetText[1611, format ["+%1" ,Scrap_Sell]];
ctrlSetText[1612, format ["+%1" ,Engine_Sell]];
ctrlSetText[1613, format ["+%1" ,Rotor_Sell]];
ctrlSetText[1614, format ["+%1" ,Glass_Sell]];
ctrlSetText[1615, format ["+%1" ,Jerrycan_Sell]];
ctrlSetText[1616, format ["+%1" ,Toolbox_Sell]];