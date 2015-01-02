//Open dialog
createDialog "RscDisplayHunter";

//set pictures
ctrlSetText [1200, "trader\images\FoodmeatRaw.paa"];
ctrlSetText [1201, "trader\images\FoodmeatCooked.paa"];
ctrlSetText [1202, "trader\images\ItemKnife.paa"];
ctrlSetText [1203, "trader\images\MeeleHatchet.paa"];
ctrlSetText [1204, "trader\images\TrapBear.paa"];
ctrlSetText [1205, "trader\images\ItemCompass.paa"];
ctrlSetText [1206, "trader\images\ItemMap.paa"];
ctrlSetText [1207, "trader\images\ItemMatchbox.paa"];

//
ctrlSetText[1600, format ["-%1" ,Rawbeef_Cost]];
ctrlSetText[1601, format ["-%1" ,Cooked_Beef]];
ctrlSetText[1602, format ["-%1" ,Knife_Cost]];
ctrlSetText[1603, format ["-%1" ,Axe_Cost]];
ctrlSetText[1604, format ["-%1" ,Beartrap_Cost]];
ctrlSetText[1605, format ["-%1" ,Compass_Cost]];
ctrlSetText[1606, format ["-%1" ,Map_Cost]];
ctrlSetText[1607, format ["-%1" ,Matches_Cost]];
                              
ctrlSetText[1609, format ["+%1" ,Rawbeef_Sell]];
ctrlSetText[1610, format ["+%1" ,Cooked_Beef]];
ctrlSetText[1611, format ["+%1" ,Knife_Sell]];
ctrlSetText[1612, format ["+%1" ,Axe_Sell]];
ctrlSetText[1613, format ["+%1" ,Beartrap_Sell]];
ctrlSetText[1614, format ["+%1" ,Compass_Sell]];
ctrlSetText[1615, format ["+%1" ,Map_Sell]];
ctrlSetText[1616, format ["+%1" ,Matches_Sell]];