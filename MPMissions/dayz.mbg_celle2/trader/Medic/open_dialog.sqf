//Open dialog
createDialog "RscDisplayMedic";

//set pictures
ctrlSetText [1200, "trader\images\ItemMorphine.paa"];
ctrlSetText [1201, "trader\images\ItemBloodbag.paa"];
ctrlSetText [1202, "trader\images\ItemEpinephrine.paa"];
ctrlSetText [1203, "trader\images\ItemBandage.paa"];
ctrlSetText [1204, "trader\images\ItemHeatPack.paa"];
ctrlSetText [1205, "trader\images\ItemAntibiotic.paa"];
ctrlSetText [1206, "trader\images\ItemPainkiller.paa"];

ctrlSetText[1600, format ["-%1" ,Morphine_Cost]];
ctrlSetText[1601, format ["-%1" ,Bloodbag_Cost]];
ctrlSetText[1602, format ["-%1" ,Epipen_Cost]];
ctrlSetText[1603, format ["-%1" ,Bandage_Cost]];
ctrlSetText[1604, format ["-%1" ,HeatPack_Cost]];
ctrlSetText[1605, format ["-%1" ,Antibiotic_Cost]];
ctrlSetText[1606, format ["-%1" ,Painkiller_Cost]];

ctrlSetText[1609, format ["+%1" ,Morphine_Sell]];                     
ctrlSetText[1610, format ["+%1" ,Bloodbag_Sell]];
ctrlSetText[1611, format ["+%1" ,Epipen_Sell]];
ctrlSetText[1612, format ["+%1" ,Bandage_Sell]];
ctrlSetText[1613, format ["+%1" ,HeatPack_Sell]];
ctrlSetText[1614, format ["+%1" ,Antibiotic_Sell]];
ctrlSetText[1615, format ["+%1" ,Painkiller_Sell]];

