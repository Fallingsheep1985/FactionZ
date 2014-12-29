//Custom Loot
#include "CfgLoot.hpp"


class CfgBuildingLoot {
	class Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			//"SMAW",
			//"Javelin",
			//"G36C",
			//"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.8;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","military"},
			{"","trash"},
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"RH_m1911","weapon"},
			{"RH_m1911old","weapon"},
			{"Colt1911","weapon"},
			{"RH_m9","weapon"},			
			{"RH_p226","weapon"},				
			{"RH_p226s","weapon"},				
			{"RH_vz61","weapon"},			
			{"RH_python","weapon"},		
			{"RH_pp2000p","weapon"},
			{"revolver_EP1","weapon"},
			{"RH_mk2","weapon"},				
			{"RH_tt33","weapon"},				
			{"RH_ppk","weapon"},			
			{"RH_bull","weapon"},		
			{"RH_muzi","weapon"},
			{"RH_tec9","weapon"},			
			{"RH_m93r","weapon"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_Czech_Vest_Pouch","object"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"WeaponHolder_ItemTent","object"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_MeleeCrowbar","object"},
			//{"MR43","weapon"},
			{"Skin_Survivor2_DZ","magazine"},
			{"Skin_EuroMan01_DZC","magazine"},
			{"Skin_EuroMan02_DZC","magazine"},
			{"Skin_Cameraman_DZC","magazine"},
			{"Skin_Storm_Trooper1_DZC","magazine"},
			{"Skin_Storm_Trooper2_DZC","magazine"},
			{"Skin_Storm_Trooper3_DZC","magazine"},
			{"Skin_Storm_Trooper4_DZC","magazine"},
			{"Skin_Civ_Soldier_DZC","magazine"},
			{"Skin_Doctor_DZC","magazine"}
		};
		itemChance[] =	{
			3.50,	//Generic
			0.03,	//Military
			1.00,	//Trash
			0.01,	//Dew
			0.15,	//Watch
			0.15,	//Compass
			0.08,	//Map
			0.10,	//Flashlight
			0.07,	//Knife
			0.08,	//Matchbox
			0.02,	//RH_m1911
			0.08,	//RH_m1911old
			0.08,	//m1911 colt
			0.06,	//RH_m9
			0.03,	//RH_p226
			0.03,	//RH_p226s
			0.03,	//RH_vz61
			0.02,	//RH_python --> Fix 6 shot magazine
			0.02,	//RH_pp2000p
			0.07,	//Revolver
			0.02,	//RH_mk2
			0.02,	//RH_tt33
			0.02,	//RH_ppk
			0.01,	//RH_bull
			0.02,	//RH_muzi
			0.02,	//RH_tec9
			0.02,	//RH_m93r
			0.10,	//Patrol Pack
			0.08,	//Vest pouch
			0.05,	//Alice pack
			0.01,
			0.01,
			0.08,
			0.06,
			0.05,
			//0.07,	//MR43
			0.06,	//Skin_Survivor2_DZ
			0.04,	//Skin_EuroMan01_DZC
			0.04,	//Skin_EuroMan02_DZC
			0.04,	//Skin_Cameraman_DZC
			0.01,	//Skin_Storm_Trooper1_DZC
			0.01,	//Skin_Storm_Trooper2_DZC
			0.01,	//Skin_Storm_Trooper3_DZC
			0.01,	//Skin_Storm_Trooper4_DZC
			0.01,	//Skin_Civ_Soldier_DZC
			0.02	//Skin_Doctor_DZC
		};	
	};
	class Estate: Default {
		zombieChance = 0.4;
		maxRoaming = 4;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.6;
		lootPos[] = {};		
		itemType[] =	{
			{"","generic"},
			{"","military"},
			{"","trash"},
			//{"RH_tec9","weapon"},
			//{"RH_mac10p","weapon"},
			{"RH_python","weapon"},
			//{"RH_mp7","weapon"},
			//{"RH_usp","weapon"},
			//{"RH_uspm","weapon"},
			//{"RH_mp5sd6","weapon"},
			//{"RH_mp5sd6eot","weapon"},
			//{"RH_mp5sd6aim","weapon"},
			//{"RH_mp5sd6RFX","weapon"}, 
			{"Skin_BAF_Officer1_DZC","magazine"},	
			{"Skin_BAF_Officer2_DZC","magazine"},
			{"Skin_BAF_Officer3_DZC","magazine"}, 
			{"Skin_CZ_Officer1_DZC","magazine"},	
			{"Skin_CZ_Officer2_DZC","magazine"},
			{"Skin_CZ_Officer3_DZC","magazine"}, 
			{"Skin_GER_Officer1_DZC","magazine"},
			{"DZ_British_ACU","object"},
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"RH_m1911","weapon"},
			{"RH_m1911old","weapon"},
			{"RH_mp5sd6g","magazine"},
			{"RH_uzig","generic"},
			{"RH_uzisd","generic"},
			{"RH_Deagleg","weapon"},
			{"RH_Deaglemzb","weapon"},
			{"RH_anacg","weapon"},
			{"RH_bull","weapon"}
		};			
		itemChance[] =	{
			2.00,	//"generic"
			0.15,	//"military"
			1.00,	//"trash"	
			//0.01,	//"RH_tec9"
			//0.01,	//RH_mac10p"
			0.01,	//RH_python
			//0.03,	//RH_mp7
			//0.05,	//RH_usp
			//0.02,	//RH_uspm
			//0.03,	//RH_mp5sd6
			//0.01,	//RH_mp5sd6eot
			//0.01,	//RH_mp5sd6aim
			//0.01,	//RH_mp5sd6RFX
			0.01,	//Skin_BAF_Officer1_DZC
			0.01,	//Skin_BAF_Officer2_DZC
			0.01,	//Skin_BAF_Officer3_DZC
			0.01,	//Skin_CZ_Officer1_DZC
			0.01,	//Skin_CZ_Officer2_DZC
			0.01,	//Skin_CZ_Officer3_DZC
			0.01,	//Skin_GER_Officer1_DZC
			0.03,	//British ACU
			0.01,	//"ItemSodaMdew"
			0.05,	//"ItemWatch"
			0.05,	//"ItemCompass"
			0.10,	//"ItemMap"
			0.04,	//"RH_m1911"
			0.04,	//"RH_m1911old"
			0.01,	//"RH_mp5sd6g"
			0.01,	//"RH_uzig"
			0.01,	//"RH_uzisd"
			0.01,	//"RH_Deagleg"
			0.01,	//"RH_Deaglemzb"
			0.01,	//"RH_anacg"
			0.01	//"RH_bull"
		};			

	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.6;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemTankTrap","magazine"},
			{"ItemSandbag","magazine"}			
		};
		itemChance[] =	{
			0.15,
			0.25,
			0.01,
			0.06,
			0.02,
			0.03,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.06,
			0.01,
			0.04,
			0.05
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.8;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","generic"},
			{"WeaponHolder_ItemJerrycan","object"},
			//{"MR43","weapon"},
			{"Crossbow_DZ","weapon"},
			//{"RH_m14ebr","weapon"},
			//{"RH_mk14","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"RH_m4cmkaim","weapon"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"TrapBear","magazine"},
			{"RH_python","weapon"},
			{"RH_anac","weapon"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"Skin_Sniper1_DZC","magazine"},
			{"Skin_Camo1_DZC","magazine"},
			{"Skin_Camo2_DZC","magazine"},
			{"Skin_Camo3_DZC","magazine"}
		};
		itemChance[] =	{
			0.40,
			0.50,
			0.03,
			//0.14,
			0.14,
			//0.02,
			//0.02,	//RH_mk14 mod0
			//0.04,	//Masterkey
			//0.03,	//Masterkey CCO
			0.02,
			0.12,
			0.08,
			0.01,
			0.06,	//Hatchet
			0.05,	//Trap
			0.03,	//Python
			0.01,	//Anaconda
			0.03,	//Assaultpack
			0.07,	//Survival ACU
			0.01,	//Skin_Sniper1_DZC
			0.03,	//Skin_Camo1_DZC
			0.02,	//Skin_Camo2_DZC
			0.01	//Skin_Camo3_DZC
		};
};
class Hunting: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","generic"},
			{"WeaponHolder_ItemJerrycan","object"},
			//{"MR43","weapon"},
			{"Crossbow_DZ","weapon"},
			//{"RH_m14ebr","weapon"},
			//{"RH_mk14","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"RH_m4cmkaim","weapon"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"TrapBear","magazine"},
			{"RH_python","weapon"},
			{"RH_anac","weapon"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_TK_Assault_Pack_EP1","object"},
			{"Skin_Sniper1_DZC","magazine"},
			{"Skin_Camo1_DZC","magazine"},
			{"Skin_Camo2_DZC","magazine"},
			{"Skin_Camo3_DZC","magazine"}
		};
		itemChance[] =	{
			0.40,
			0.50,
			0.03,
			//0.14,
			0.14,
			//0.02,
			//0.02,	//RH_mk14 mod0
			//0.04,	//Masterkey
			//0.03,	//Masterkey CCO
			0.02,
			0.12,
			0.08,
			0.01,
			0.06,	//Hatchet
			0.05,	//Trap
			0.03,	//Python
			0.01,	//Anaconda
			0.03,	//Assaultpack
			0.07,	//Survival ACU
			0.01,	//Skin_Sniper1_DZC
			0.03,	//Skin_Camo1_DZC
			0.02,	//Skin_Camo2_DZC
			0.01	//Skin_Camo3_DZC
		};
};
	class Supermarket: Default {
		lootChance = 0.9;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_survivor","z_Hero"};
		itemType[] = {
			{"","food"},
			{"","trash"},
			{"","generic"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"RH_usp","weapon"},
			{"Colt1911","weapon"},
			{"RH_mk22","weapon"},
			{"RH_mk22v","weapon"},
			{"RH_m9","weapon"},			
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			{"RH_g19t","weapon"},			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			//{"MR43","weapon"},
			{"RH_Deagles","weapon"},
			{"Skin_Sniper3_DZC","magazine"},
			{"Skin_Snow_Trooper2_DZC","magazine"}, 
			{"Skin_Hazmat_Red_DZC","magazine"},	
			{"Skin_Storm_Trooper1_DZC","magazine"},
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_VestPouch_EP1","object"},
			{"DZ_ALICE_Pack_EP1","object"},
			{"DZ_CivilBackpack_EP1","object"}
		};
		itemChance[] =	{
			0.20,	//food
			0.50,	//trash
			0.50,	//Generic
			0.15,
			0.10,
			0.10,
			0.02,
			0.04,
			0.02,
			0.02,
			0.02,
			0.05,			
			0.06,
			0.05,
			0.10,
			0.03,
			0.04,
			0.01,
			0.01,
			0.05,	//tent
			0.03,	//Crossbow
			0.05,	//Bino
			0.02,	//wood
			//0.01,
			0.01,	//RH_Deagles
			0.01,
			0.01,
			0.01,
			0.01,
			0.04,
			0.04,
			0.03,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0;
		maxRoaming = 2;
		zombieClass[] = {""};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			//{"FN_FAL","weapon"},
			//{"G36_C_SD_Eotech","weapon"}, 
			//{"M14_EP1","weapon"},
			//{"FN_FAL_ANPVS4","weapon"},
			//{"Mk_48_DZ","weapon"},
			//{"MG36","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},			
			{"RH_m9c","weapon"},
			{"RH_m9csd","weapon"}, 
			{"RH_uspm","weapon"},
			{"RH_usp","weapon"},
			{"RH_uspsd","weapon"},
			{"RH_g17sd","weapon"},
			{"RH_g18","weapon"},
			//{"RH_mp7","weapon"},
			//{"RH_mp7aim","weapon"},
			//{"RH_mp7eot","weapon"}, 
			//{"RH_mp7sd","weapon"},
			//{"RH_mp7sdaim","weapon"},
			//{"RH_mp7sdeot","weapon"},
			//{"RH_mp7p","weapon"},
			//{"RH_mp5sd6","weapon"},
			//{"RH_mp5sd6eot","weapon"},
			//{"RH_mp5sd6aim","weapon"},
			//{"RH_mp5sd6RFX","weapon"}, 
			{"RH_m1911sd","weapon"},
			{"DZ_British_ACU","object"}, //Backpacks
			{"DZ_Backpack_EP1","object"}
		};
		itemChance[] =	{
			//0.02,		//"FN_FAL"
			//0.02,		//"G36_C_SD_Eotech"
			//0.05,		//"M14_EP1"
			//0.02,		//"FN_FAL_ANPVS4"
			//0.03,		//"Mk_48_DZ"
			//0.05,		//"M249_DZ"
			1.00,			//"military"
			0.50,		//"medical"
			0.10,		//"MedBox0"
			0.10,
			0.10,
			0.04,	//RH_m9c
			0.02,	//RH_m9csd
			0.02,	//RH_uspm
			0.04,	//RH_usp
			0.02,	//RH_uspsd
			0.02,	//RH_g17sd 
			0.05,	//RH_g18  --->Fix 33rnd magazine
			//0.05,	//RH_mp7
			//0.02,	//RH_mp7aim
			//0.03,	//RH_mp7eot
			//0.02,	//RH_mp7sd
			//0.01,	//RH_mp7sdaim
			//0.01,	//RH_mp7sdeot
			//0.03,	//RH_mp7p
			//0.06,	//RH_mp5sd6
			//0.04,	//RH_mp5sd6eot
			//0.04,	//RH_mp5sd6aim
			//0.02,	//RH_mp5sd6RFX
			0.01,	//RH_m1911sd
			0.04,	//Backpacks
			0.02
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor","z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"},
			{"Skin_Doctor_DZC","magazine"},
			{"Skin_Hazmat_Black_DZC","magazine"},
			{"Skin_Hazmat_Red_DZC","magazine"},
			{"Skin_Hazmat_Yellow_DZC","magazine"},
			{"Skin_Hazmat_Olive_DZC","magazine"},
			{"Skin_HazmatVest_Red_DZC","magazine"},
			{"Skin_HazmatVest_Yellow_DZC","magazine"},
			{"Skin_HazmatVest_Olive_DZC","magazine"}			
		};
		itemChance[] =	{
			0.25,
			0.75,
			0.05,
			0.10,	//Skin_Doctor_DZC
			0.01,	//Skin_Hazmat_Black_DZC
			0.02,	//Skin_Hazmat_Red_DZC
			0.02,	//Skin_Hazmat_Yellow_DZC
			0.01,	//Skin_Hazmat_Olive_DZC
			0.01,	//Skin_HazmatVest_Red_DZC
			0.01,	//Skin_HazmatVest_Yellow_DZC
			0.01,	//Skin_HazmatVest_Olive_DZC
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_policeman","z_policeman"};
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"RH_m4c","weapon"},
			//{"RH_m4cs","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"RH_m4caim","weapon"},
			//{"RH_m4cacog","weapon"},
			//{"RH_m4ceotech","weapon"},
			//{"RH_m4ct","weapon"},
			//{"RH_m4ctsd","weapon"},
			//{"RH_m4cgl","weapon"},
			//{"RH_m4ctsdgleotech","weapon"},
			{"M9","weapon"},
			//{"M16A2","weapon"},
			//{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			//{"M4A1_Aim","weapon"},
			//{"G36K","weapon"},
			//{"G36C","weapon"},
			//{"G36K","weapon"},
			{"RH_m4ctsdeotech","weapon"},
			{"M1014","weapon"},
			//{"M4A1","weapon"},
			//{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			//{"MP5A5","weapon"},
			//{"MP5SD","weapon"},
			//{"M4A3_CCO_EP1","weapon"},
			//{"RH_P90","weapon"},
			//{"RH_P90i","weapon"},
			//{"RH_P90aim","weapon"},
			//{"RH_P90eot","weapon"},
			//{"RH_P90sd","weapon"},
			//{"RH_p90isd","weapon"},
			//{"RH_p90sdaim","weapon"},
			//{"RH_p90sdeot","weapon"},
			//{"RH_UMP","weapon"},
			//{"RH_umpaim","weapon"},
			//{"RH_umpeot","weapon"},
			//{"RH_umpRFX","weapon"},
			//{"RH_umpsd","weapon"},
			//{"RH_umpsdaim","weapon"},
			//{"RH_umpsdeot","weapon"},
			//{"RH_umpsdRFX","weapon"},
			//{"RH_HK53","weapon"},
			//{"RH_HK53aim","weapon"},
			//{"RH_HK53eot","weapon"},
			//{"RH_HK53RFX","weapon"},
			//{"RH_mp7p","weapon"},			
			{"RH_Deaglem ","weapon"},
			{"RH_Deaglemz","weapon"},
			{"RH_uspm","weapon"},
			{"RH_usp","weapon"},
			{"RH_uspsd","weapon"},
			{"RH_g17sd","weapon"},	
			{"RH_m1911sd","weapon"},
			//{"RH_mp5sd6RFX","weapon"},
			//{"RH_mp5sd6eot","weapon"},
			{"RH_m9sd","weapon"},	
			//{"RH_m14ebr","weapon"},
			//{"RH_m14ebrsp","weapon"},	
			//{"RH_m14ebrgc","weapon"},
			//{"RH_m14ebr_sd","weapon"},
			//{"RH_m14ebrsp_sd","weapon"},
			//{"RH_m14ebrgc_sd","weapon"},
			//Items
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"DZ_Patrol_Pack_EP1","object"}, //Backpacks
			{"DZ_Assault_Pack_EP1","object"},		
			{"DZ_TK_Assault_Pack_EP1","object"}, //Backpacks
			{"DZ_British_ACU","object"},				
			//Tools
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			//Clothing
			{"Skin_BAF_Officer1_DZC","magazine"},	
			{"Skin_BAF_Officer2_DZC","magazine"},
			{"Skin_BAF_Officer3_DZC","magazine"}, 
			{"Skin_CZ_Officer1_DZC","magazine"},	
			{"Skin_CZ_Officer2_DZC","magazine"},
			{"Skin_CZ_Officer3_DZC","magazine"}, 
			{"Skin_GER_Officer1_DZC","magazine"}	
		};
		itemChance[] =	{
			0.50,	//medical
			1.00,	//generic
			2.50,	//military	
			//0.01,   //RH_m4c
			//0.01,   //RH_m4cs
			//0.01,   //RH_m4cmk
			//0.01,	//RH_m4caim
			//0.01,   //RH_m4cacog
			//0.01,	//RH_m4ceotech
			//0.01,   //RH_m4ct
			//0.01,	//RH_m4ctsd
			//0.01,   //RH_m4cgl
			//0.01,   //RH_m4ctsdgleotech
			0.05,   //M9
			//0.05,   //M16A2
			//0.01,   //M16A2GL
			0.02,   //M9SD
			//0.08,   //M4A1_Aim
			//0.05,   //G36K
			//0.05,   //G36C
			//0.01,   //G36K
			0.06,   //RH_m4ctsdeotech
			0.02,   //M1014
			//0.01,   //M4A1
			//0.05,   //M14_EP1
			0.08,   //UZI_EP1
			0.10,   //Remington870_lamp
			0.04,   //glock17_EP1
			//0.02,   //MP5A5
			//0.01,   //MP5SD
			//0.01,	//M4A3_CCO_EP1
			//0.02,	//RH_P90
			//0.03,	//RH_P90i
			//0.01,	//RH_P90aim
			//0.01,	//RH_P90eot
			//0.02,	//RH_P90sd
			//0.03,	//RH_p90isd
			//0.01,	//RH_p90sdaim
			//0.01,	//RH_p90sdeot
			//0.02,	//RH_UMP
			//0.01,	//RH_umpaim
			//0.01,	//RH_umpeot
			//0.01,	//RH_umpRFX
			//0.02,	//RH_umpsd
			//0.01,	//RH_umpsdaim
			//0.01,	//RH_umpsdeot
			//0.01,	//RH_umpsdRFX
			//0.04,	//RH_HK53
			//0.02,	//RH_HK53aim
			//0.02,	//RH_HK53eot
			//0.02,	//RH_HK53RFX
			//0.03,	//RH_mp7p
			0.01,	//RH_Deaglem 
			0.01,	//RH_Deaglemz
			0.01,	//RH_uspm
			0.05,	//RH_usp
			0.03,	//RH_uspsd
			0.01,	//RH_g17sd
			0.01,	//RH_m1911sd
			//0.04,	//RH_mp5sd6RFX
			//0.04,	//RH_mp5sd6eot
			0.02,	//RH_m9sd
			//0.02,	//"RH_m14ebr"
			//0.01,	//"RH_m14ebrsp"
			//0.01,	//"RH_m14ebrgc"
			//0.01,	//"RH_m14ebr_sd",
			//0.01,	//"RH_m14ebrsp_sd"
			//0.01,	//"RH_m14ebrgc_sd"
			//Items
			0.18,
			0.15,
			0.10,
			0.01,
			0.15,
			0.08,
			0.06,
			0.03,
			0.02,
			//Tools
			0.05,
			0.02,
			//Clothing
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.05
		};
	};
	class Barracks: Default {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_soldier","z_soldier_heavy","z_policeman","z_policeman","z_Bandit"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"ItemGPS","generic"},
			{"ItemCompass","generic"},
			{"ItemKnife","military"},
			{"ItemFlashlightRed","military"},			
			{"ItemFlashlight","generic"},			
			{"","trash"},
			{"","military"},
		//Throwaway	
			//{"M16A2","weapon"},
			{"M1014","weapon"},
			//{"M16A2GL","weapon"},
			{"RH_m1911","weapon"},
			{"RH_m1911old","weapon"},
			//{"RH_mp5kp","weapon"},
			{"RH_m9","weapon"},
			{"RH_g17","weapon"},
			//{"RH_mp5a4","weapon"},
			//{"RH_mp5a4aim","weapon"},
			//{"RH_mp5a4eot","weapon"},
			//{"RH_mp5a4RFX","weapon"},
			//{"RH_mp5a5","weapon"},
			//{"RH_mp5a5aim","weapon"},			
			//{"RH_mp5a5eot","weapon"},
			//{"RH_mp5a5RFX","weapon"},
			//{"RH_mp5a5eod ","weapon"},
			//{"RH_mp5a5eodaim","weapon"},
			//{"RH_mp5a5eodeot","weapon"},
			//{"RH_mp5a5eodRFX","weapon"},
			//{"RH_mp5kpdw","weapon"},
			//{"RH_mp5kpdwaim","weapon"},
			//{"RH_mp5kpdweot","weapon"},
			//{"RH_mp5kpdwRFX","weapon"},
			//{"RH_fmg9","weapon"},
			//{"RH_tmpeot","weapon"},
			{"RH_uzi","weapon"},
		//Midtech
			//{"RH_M4CEOTECH","weapon"},
			//{"RH_M4CAIM","weapon"},		
			//{"RH_M4CS","weapon"},		
			//{"RH_M4CSAIM","weapon"},		
			//{"RH_M4CMKAIM","weapon"},		
			//{"G36C","weapon"},
			//{"RH_PDR","weapon"},
			//{"RH_pdraim","weapon"},
			//{"RH_pdreot","weapon"},
			//{"RH_P90","weapon"},
			//{"RH_P90i","weapon"},
			//{"RH_P90aim","weapon"},
			//{"RH_P90eot","weapon"},			
			//{"RH_HK53","weapon"},
			//{"RH_HK53aim","weapon"},			
			//{"RH_HK53eot ","weapon"},
			//{"RH_HK53RFX","weapon"},
			//{"RH_m4cmk","weapon"},
			//{"Sa58P_EP1","weapon"},
			//{"Sa58V_EP1","weapon"},
			{"DZ_Patrol_Pack_EP1","object"}, //Backpacks
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},
		//Rare
			//{"RH_M60E4","weapon"},
			//{"RH_MK43","weapon"},			
			//{"RH_mp5sd6RFX","weapon"},
			{"RH_m9sd","weapon"},
			{"RH_deagle","weapon"},
			//{"RH_tmpsd","weapon"},
			//{"RH_tmpsdaim","weapon"},
			//{"RH_tmpsdeot","weapon"},			
			//{"RH_uzisd","weapon"},
			//{"RH_P90sd","weapon"},
			//{"RH_p90isd","weapon"},
			//{"RH_p90sdaim","weapon"},
			//{"RH_p90sdeot","weapon"},
			//{"RH_mk22sd","weapon"},
			//{"RH_mk22vsd","weapon"},
		//Clothing
			{"Skin_Soldier1_STD_DZC","magazine"}, 
			{"Skin_Soldier2_STD_DZC","magazine"},	
			{"Skin_Soldier3_STD_DZC","magazine"},
			{"Skin_Soldier1_GL_DZC","magazine"}, 
			{"Skin_Soldier2_GL_DZC","magazine"},	
			{"Skin_Soldier3_GL_DZC","magazine"},
			{"Skin_Soldier1_AT_DZC","magazine"}, 
			{"Skin_Soldier2_AT_DZC","magazine"},	
			{"Skin_Soldier3_AT_DZC","magazine"},
			{"Skin_Soldier1_SL_DZC","magazine"}, 
			{"Skin_Soldier2_SL_DZC","magazine"},	
			{"Skin_Soldier3_SL_DZC","magazine"}
		};
		itemChance[] =	{
			0.02,
			0.10,
			0.10,
			0.08,
			0.12,
			0.40,
			0.50,
		//Throwaway guns
			//0.07,	//M16A2
			0.07,	//M1014
			//0.06,	//M16A2GL
			0.08,	//RH_m1911
			0.08,	//RH_m1911old
			//0.03,	//RH_mp5kp
			0.08,	//RH_m9
			0.08,	//RH_g17
			//0.08,	//RH_mp5a4
			//0.02,	//RH_mp5a4aim
			//0.02,	//RH_mp5a4eot
			//0.02,	//RH_mp5a4RFX
			//0.06,	//RH_mp5a5
			//0.01,	//RH_mp5a5aim
			//0.01,	//RH_mp5a5eot
			//0.01,	//RH_mp5a5RFX
			//0.03,	//RH_mp5a5eod 
			//0.01,	//RH_mp5a5eodaim
			//0.01,	//RH_mp5a5eodeot
			//0.01,	//RH_mp5a5eodRFX
			//0.06,	//RH_mp5kpdw
			//0.01,	//RH_mp5kpdwaim
			//0.01,	//RH_mp5kpdweot
			//0.01,	//RH_mp5kpdwRFX
			//0.06,	//RH_fmg9
			//0.04,	//RH_tmpeot
			0.06,	//RH_uzi
		//MidTech
			//0.01,	//RH_M4CEOTECH
			//0.02,	//RH_M4CAIM
			//0.04,	//RH_M4CS
			//0.02,	//RH_M4CSAIM
			//0.01,	//RH_M4CMKAIM
			//0.06,	//G36C			
			//0.05,	//RH_PDR
			//0.02,	//RH_pdraim
			//0.02,	//RH_pdreot
			//0.02,	//RH_P90
			//0.04,	//RH_P90i
			//0.02,	//RH_P90aim
			//0.02,	//RH_P90eot
			//0.06,	//RH_HK53
			//0.02,	//RH_HK53aim
			//0.02,	//RH_HK53eot
			//0.02,	//RH_HK53RFX
			//0.06,	//MasterKey
			//0.04,	//Sa58P_EP1
			//0.04,	//Sa58V_EP1
			0.10,	//DZ_Patrol_Pack_EP1
			0.07,	//DZ_Assault_Pack_EP1
			0.04,	//DZ_British_ACU
		//Rare
			//0.01,	//RH_M60E4
			//0.01,	//RH_MK43
			//0.02,	//RH_mp5sd6RFX
			0.005,	//RH_m9sd
			0.005,	//RH_deagle
			//0.01,	//RH_tmpsd
			//0.01,	//RH_tmpsdaim  
			//0.01,	//RH_tmpsdeot
			//0.01,	//RH_uzisd			
			//0.005,	//RH_P90sd
			//0.01,	//RH_p90isd
			//0.005,	//RH_p90sdaim
			//0.005,	//RH_p90sdeot
			//0.01,	//mk22sd
			//0.01,	//mk22vsd
			//Clothing
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
			0.02,
			0.01,
			0.01,
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_soldier_heavy","z_soldier_heavy","z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"","medical"},
			{"","generic"},
			{"","military"},			
			//{"M16A2","weapon"},
			//{"M16A2GL","weapon"},
			//{"MG36","weapon"},
			{"M9SD","weapon"},
			//{"RH_m14ebrgc","weapon"},			
			//{"G36C","weapon"},
			//{"G36K","weapon"},
			//{"M4A1_Aim","weapon"},
			//{"M24","weapon"},
			//{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			//{"M4A1","weapon"},
			//{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"glock17_EP1","weapon"},
			//{"M4A1_AIM_SD_camo","weapon"},
			//{"M16A4_ACG","weapon"},
			//{"M4A1_HWS_GL_camo","weapon"},
			//{"RH_M4C","weapon"},
			//{"RH_M4CSAIM","weapon"},
			//{"RH_M4CSACOG","weapon"},
			//{"RH_M4CSEOTECH","weapon"},
			//{"RH_M4CT","weapon"},
			//{"RH_M4CT_F","weapon"},
			//{"RH_M14EBR","weapon"},
			//{"RH_M14EBRSP","weapon"},
			//{"RH_M14EBRGC","weapon"},
			//{"RH_M4CTSD","weapon"},
			//{"RH_M4CTSD_F","weapon"},			
			//{"Mk_48_DZ","weapon"},
			//{"M240_DZ","weapon"},
			//{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},
			//{"RH_mk21a5","weapon"},
			//{"RH_mk21a5sd","weapon"},
			//{"RH_mk14","weapon"},
			//{"RH_mk14aim","weapon"},
			//{"RH_mk14eotech","weapon"},
			//{"RH_mk14sd","weapon"},
			//{"RH_mk14sdaim","weapon"},
			//{"RH_mk14sdeotech","weapon"},
			//{"RH_m60e4eotech","weapon"},
			//{"RH_mk43","weapon"},
			//{"RH_m4cmkacog","weapon"},			
			//{"RH_m4cmkeotech","weapon"},
		//Backpacks
			{"DZ_Patrol_Pack_EP1","object"},
			{"DZ_Assault_Pack_EP1","object"},
			{"DZ_British_ACU","object"},	
			{"DZ_Backpack_EP1","object"},
			{"PipeBomb","magazine"},
			{"Skin_CIV_Pilot1_DZC","magazine"},
			{"Skin_Soldier1_DZC","magazine"}, 
			{"Skin_Soldier2_DZC","magazine"}, 
			{"Skin_Soldier3_DZC","magazine"},	
			{"Skin_Soldier2_DZC","magazine"},
			{"Skin_Soldier1_SF_DZC","magazine"},
			{"Skin_Soldier2_SF_DZC","magazine"}, 
			{"Skin_Soldier3_SF_DZC","magazine"},
			{"Skin_Soldier2_SF_DZC","magazine"}, 
			{"Skin_Soldier3_SF_DZC","magazine"}
		};
		itemChance[] =	{
			0.30,	//Medical
			0.35,	//generic
			0.50,	//military
			//0.10, //{"M16A2","weapon"
			//0.05, //{"M16A2GL","weapo
			//0.01, //{"MG36","weapon"}
			0.02,	//{"M9SD","weapon"},
			//0.02,	//{"RH_m14ebrgc","w
			//0.10,	//{"G36C","weapon"}
			//0.02,	//{"G36K","weapon"}
			//0.10,	//{"M4A1_Aim","weap
			//0.01,	//{"M24","weapon"},
			//0.01,   //{"SVD_CAMO","weap
			0.20,	//{"M1014","weapon"},
			//0.10,	//{"M4A1","weapon"}
			//0.03,	//{"M14_EP1","weapon"
			0.20,	//{"UZI_EP1","weapon"
			0.10, 	//{"glock17_EP1","wea
			//0.20, //{"M4A1_AIM_SD_cam
			//0.04, //{"M16A4_ACG","wea
			//0.05, //{"M4A1_HWS_GL_cam
			//0.02, //{"RH_M4C","weapon
			//0.02,	//{"RH_M4CSAIM","we
			//0.01,	//{"RH_M4CSACOG","w
			//0.01,	//{"RH_M4CSEOTECH",
			//0.04,	//{"RH_M4CT","weapo
			//0.03,	//{"RH_M4CT_F","wea
			//0.02,	//{"RH_M14EBR","wea
			//0.01,	//{"RH_M14EBRSP","w
			//0.01,	//{"RH_M14EBRGC","w
			//0.01,	//{"RH_M4CTSD","wea
			//0.01,	//{"RH_M4CTSD_F","w			
			//0.01,	//{"Mk_48_DZ","weap
			//0.01,	//{"M240_DZ","weapo
			//0.08,   //{"M4A3_CCO_EP1","we
			0.10,	//{"Binocular","weapo
			0.08,	//{"ItemFlashlightReded
			0.15,	//{"ItemKnife","milit
			0.05,	//{"ItemGPS","weapon"
			0.15,	//{"ItemMap","militar
			0.01,   //{"Binocular_Vector"
			//0.02,	//{"RH_mk21a5","wea
			//0.01,	//{"RH_mk21a5sd","w
			//0.03,	//{"RH_mk14","weapo
			//0.02,	//{"RH_mk14aim","we
			//0.02,	//{"RH_mk14eotech",
			//0.02,	//{"RH_mk14sd","wea
			//0.01,	//{"RH_mk14sdaim","
			//0.01,	//{"RH_mk14sdeotechh"
			//0.01,	//{"RH_m60e4eotech"
			//0.01,	//{"RH_mk43","weapo
			//0.03,	//{"RH_m4cmkacog","
			//0.03,	//{"RH_m4cmkeotech"
		//Backpacks
			0.08,
			0.06,
			0.05,
			0.01,
			0.001,	//Pipebomb
			0.02,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01
		};
	};
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	//Pomme Crashes
	class MerlinWreck_DZC: Default {
		zombieClass[] = {"z_pilot_BAF","z_soldier1_baf","z_soldier2_baf"};
		zombieChance = 0;
		maxRoaming = 5;
		lootChance = 0.8;
		lootPos[] = {};
		itemType[] =	{
		{"","military"}, 
		{"","trash"}, 
		{"", "medical"}, 
		{"ItemMap","weapon"}, 
		{"ItemCompass", "generic"}, 
		{"RH_browninghp","weapon"},		//Pistol
		{"RH_p226s","weapon"}, //Pistol
		{"RH_g17sd","weapon"}, //Pistol
		{"M1014","weapon"}, 
		//{"FN_FAL","weapon"}, 
		//{"RH_mp5kpdwRFX","weapon"}, 	//HK
		//{"FN_FAL_ANPVS4","weapon"}, 	//NVG FAL
		//{"MG36","weapon"},
		//{"BAF_L85A2_UGL_Holo","weapon"}, 	
		//{"BAF_L86A2_ACOG","weapon"}, 
		//{"G36_C_SD_Eotech","weapon"}, 
		//{"RH_M60E4","weapon"}, 
		//{"RH_M60E4_EOTECH","weapon"}, 	
		{"WeaponHolder_PartGeneric", "object"}, 
		{"WeaponHolder_PartVRotor", "object"}, 
		{"ItemGPS","weapon"}, 
		{"Skin_BAF_Pilot1_DZC","magazine"},
		{"Skin_BAF_Pilot2_DZC","magazine"}, 
		{"Skin_BAF_Pilot3_DZC","magazine"},	
		{"Skin_BAF_Heavy1_DZC","magazine"},
		{"Skin_BAF_Heavy3_DZC","magazine"}, 
		{"Skin_Soldier3_STD_DZC","magazine"},
		{"Skin_Soldier1_STD_DZC","magazine"}, 
		{"Skin_Soldier2_STD_DZC","magazine"},	
		{"DZ_British_ACU","object"}, 
		{"DZ_Backpack_EP1","object"}
		};
		itemChance[] =	{
			1.00,	//military
			0.40,	//trash
			0.20,	//medical
			0.10,	//ItemMap
			0.15,	//ItemCompass
			0.15,	//RH_browninghp
			0.10,	//RH_p226s
			0.02,	//RH_g17sd 
			0.08,  	//M1014
			//0.08, 	//FN_FAL
			//0.07, 	//RH_mp5kpdwRFX
			//0.03,	//FN_FAL_ANPVS4
			//0.05, 	//MG36
			//0.05, 	//BAF_L85A2_UGL_H
			//0.03,	//BAF_L86A2_ACOG
			//0.03,	//G36_C_SD_Eotech
			//0.01,	//RH_M60E4
			//0.003,	//RH_M60E4_EOTECH
			0.10,	//Scrap
			0.03,	//Rotor
			0.05,
			0.01,
			0.01,
			0.01,
			0.01,
			0.01,
			0.02,
			0.02,
			0.02,
			0.06,
			0.01,	//Equals 1.0
		};
	};
	class Ch47Wreck_DZC: MerlinWreck_DZC {};	
	//Yankee Crashes
	class UH1Wreck_DZC: Default {
		zombieClass[] = {"z_pilot_USA","z_soldier1_USA","z_soldier2_USA"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
		itemType[] =	{
		{"","military"}, 
		{"","trash"}, 
		{"", "medical"}, 
		{"ItemMap","weapon"}, 
		{"ItemCompass", "generic"}, 
		{"RH_p226","weapon"},
		{"RH_m9csd","weapon"},
		{"RH_Deaglem","weapon"}, 
		{"RH_m1911sd","weapon"},			
		{"M1014","weapon"},
		//{"M16A4_ACOG","weapon"},
		//{"M16A4_ACG_GL","weapon"}, 
		//{"RH_SCARL_AIM","weapon"}, 
		//{"RH_SCARLB_AIM","weapon"}, 
		//{"M4SPR","weapon"},
		//{"RH_M14EBRSP","weapon"},	
		//{"M40A3","weapon"},
		//{"RH_SCARL_MK4","weapon"},				//Scar
		//{"Mk_48_DZ","weapon"}, 
		{"WeaponHolder_PartGeneric", "object"}, 
		{"WeaponHolder_PartVRotor", "object"}, 
		{"ItemGPS","weapon"}, 
		{"Skin_US_Pilot1_DZC","magazine"},
		{"Skin_Soldier3_SL_DZC","magazine"}, 
		{"Skin_Soldier3_AT_DZC","magazine"}, 
		{"Skin_Soldier1_DZC","magazine"},	
		{"Skin_Soldier2_DZC","magazine"},
		{"Skin_HazmatVest_Black_DZC","magazine"},
		{"Skin_US_Heavy1_DZC","magazine"}, 
		{"Skin_US_Heavy2_DZC","magazine"},	
		{"DZ_Assault_Pack_EP1","object"}, 
		{"DZ_Backpack_EP1","object"}
		};
		itemChance[] =	{
		1.00,	//military
		0.40,	//trash
		0.20,	//medical
		0.10,	//ItemMap
		0.15,	//ItemCompass
		0.15,	//RH_p226
		0.02,	//RH_m9csd
		0.02,	//RH_Deaglem
		0.01,	//RH_m1911sd
		0.10,   //M1014
		//0.10,   //M16A4_ACOG
		//0.05,   //M16A4_ACG_GL
		//0.05,	//RH_SCARL_AIM
		//0.05,   //RH_SCARLB_AIM
		//0.03,   //M4SPR
		//0.04,   //RH_M14EBRSP
		//0.02,   //M40A3
		//0.01,   //RH_SCARL_MK4
		//0.01,   //Mk_48_DZ
		0.10,	//Scrap
		0.03,	//Rotor
		0.04,
		0.05,
		0.04,
		0.04,
		0.05,
		0.05,
		0.01,
		0.02,
		0.02,
		0.06,
		0.02	//Equals 1.0
		};
	};
	class C130Wreck_DZC: UH1Wreck_DZC {};	
	//German Crashes
	class UH60Wreck_DZC: Default {
		zombieClass[] = {"z_pilot_GER","z_soldier1_GER","z_soldier2_GER"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
		itemType[] =	{
			{"","military"}, 
			{"","trash"}, 
			{"", "medical"}, 
			{"ItemMap","weapon"}, 
			{"ItemCompass", "generic"}, 
			{"RH_g19t","weapon"}, 
			{"RH_uspm","weapon"}, //Pistol
			{"RH_tt33","weapon"}, //Pistol
			{"Remington870_lamp","weapon"}, 
			//{"RH_mp7aim","weapon"},
			//{"G36K","weapon"}, 
			//{"RH_ump","weapon"},	
			//{"RH_xm8dc","weapon"},
			//{"G36a_CAMO","weapon"}, 
			//{"RH_mp7RFX","weapon"}, 		
			//{"RH_mp7sdeot","weapon"}, 
			//{"RH_MK43","weapon"},	
			{"WeaponHolder_PartGeneric", "object"}, 
			{"WeaponHolder_PartVRotor", "object"}, 
			{"RH_g19","weapon"}, 
			{"ItemGPS","weapon"}, 
			{"Skin_CIV_Pilot1_DZC","magazine"},
			{"Skin_Snow_Trooper1_DZC","magazine"},
			{"Skin_Snow_Trooper2_DZC","magazine"}, 
			{"Skin_GER_Officer1_DZC","magazine"},	
			{"Skin_HazmatVest_Black_DZC","magazine"},
			{"Skin_Soldier1_GL_DZC","magazine"}, 
			{"Skin_Soldier2_GL_DZC","magazine"},	
			{"DZ_Czech_Vest_Pouch","object"}, //Vest Pouch
			{"DZ_CivilBackpack_EP1","object"} //Backpack
		};
		itemChance[] =	{
			1.00,	//military
			0.40,	//trash
			0.20,	//medical
			0.10,	//ItemMap
			0.15,	//ItemCompass
			0.15,	//RH_g19t
			0.10,	//RH_uspm
			0.10,	//RH_tt33
			0.05,   //Remington870_lamp
			//0.05,   //RH_mp7aim
			//0.05,   //G36K
			//0.04,	//RH_ump
			//0.04,   //RH_xm8dc
			//0.05,   //G36a_CAMO
			//0.04,   //RH_mp7RFX"
			//0.02,   //RH_mp7sdeot
			//0.02,   //RH_MK43
			0.10,	//Scrap
			0.03,	//Rotor
			0.04,
			0.05,
			0.03,
			0.01,
			0.01,
			0.04,
			0.01,
			0.03,
			0.03,
			0.06,
			0.01	//Equals 1.0
		};
	};

	//Czech Crashes
	class Mi24Wreck_DZC: Default {
		zombieClass[] = {"z_pilot_CZ","z_soldier1_CZ","z_soldier2_CZ"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
		itemType[] =	{
		{"","military"}, 
		{"","trash"}, 
		{"", "medical"}, 
		{"ItemMap","weapon"}, 
		{"ItemCompass", "generic"}, 
		{"Makarov","weapon"}, 
		{"MakarovSD","weapon"},
		{"Saiga12K","weapon"}, 
		//{"RH_ak102","weapon"}, 
		//{"RH_ScarAkeotech","weapon"}, 
		//{"RH_ScarAkaim","weapon"}, 
		//{"RH_ScarAk","weapon"}, 
		//{"AK_107_pso","weapon"}, //NVG
		//{"RPK_74","weapon"}, 
		//{"SVD","weapon"}, 
		//{"bizon_silenced","weapon"}, 
		{"WeaponHolder_PartGeneric", "object"}, 
		{"WeaponHolder_PartVRotor", "object"}, 
		{"ItemGPS","weapon"}, 
		{"Skin_CZ_Pilot1_DZC","magazine"},
		{"Skin_CZ_Pilot2_DZC","magazine"}, 
		{"Skin_CZ_Pilot3_DZC","magazine"},	
		{"Skin_Soldier3_GL_DZC","magazine"},
		{"Skin_CZ_Heavy1_DZC","magazine"}, 
		{"Skin_CZ_Heavy2_DZC","magazine"},	
		{"Skin_CZ_Heavy3_DZC","magazine"},
		{"DZ_CivilBackpack_EP1","object"}, 
		{"DZ_Backpack_EP1","object"}	
		};
		itemChance[] =	{
		1.00,	//military
		0.40,	//trash
		0.20,	//medical
		0.10,	//ItemMap
		0.15,	//ItemCompass
		0.15,	//Makarov
		0.02,	//MakarovSD
		0.10,	//Saiga12K
		//0.05,   //RH_ak102
		//0.03,   //RH_ScarAkeotech
		//0.03,	//RH_ScarAkaim
		//0.04,   //RH_ScarAk
		//0.02,   //AK_107_pso
		//0.06,   //RPK_74
		//0.01,   //SVD
		//0.03,   //bizon_silenced
		0.10,		//Scrap
		0.03,		//Rotor
		0.04,
		0.02,
		0.02,
		0.02,
		0.04,
		0.01,
		0.01,
		0.01,
		0.06,
		0.01	//Equals 1.0
		};
	};
	
	class Mi17wreck_DZC: Mi24Wreck_DZC {};	
	class EurofighterWreck_DZC: UH60Wreck_DZC {};	

class Land_HouseV_1I4: Residential {
	lootPos[] = {{0.222168,3.90839,-2.73031},{-1.82983,-1.81403,-2.76768}};
	lootPosZombie[] = {{-0.329834,-5.01025,-1.89261},{-1.30762,1.8324,-1.85249}};
	lootPosSmall[] = {{-1.91772,-5.13812,-2.14811},{-4.34497,-1.12036,-1.88536},{-2.12329,-2.59363,-2.05582},{-1.34595,-2.80969,-2.04825}};
};
class Land_kulna: Residential {
	lootPos[] = {{0.213379,1.49707,-1.14344}};
	lootPosZombie[] = {{0.0175781,-2.0542,-0.268438}};
};
class Land_Ind_Workshop01_01: Industrial {
	lootPos[] = {{1.31201,-2.71387,-1.29234},{-0.819336,0.449219,-1.29946}};
	lootPosZombie[] = {{-1.14746,-0.979004,-0.424032},{1.69849,-0.175781,-0.418507}};
	lootPosSmall[] = {{1.81372,-3.33643,-0.714019},{1.92627,-1.69531,-1.29493},{-1.19482,2.00977,-0.22825},{-0.82251,1.2583,-0.836819}};
};
class Land_Ind_Garage01: Industrial {
	lootPos[] = {{1.73755,2.71973,-1.24332},{-0.880371,-1.9082,-1.23318},{0.607178,3.2373,-1.23157}};
	lootPosZombie[] = {{-0.977051,3.12012,-0.349579},{2.8562,0.264648,-0.360748}};
	lootPosSmall[] = {{2.9375,2.47754,-1.12036},{2.8606,3.33398,-1.12131},{1.35205,3.58398,-0.0119934},{1.76196,3.62207,-0.772003}};
};
class Land_Ind_Workshop01_02: Industrial {
	lootPos[] = {{1.47144,-0.825195,-1.42987},{-1.29663,-0.373047,-1.42896}};
	lootPosZombie[] = {{-0.029541,1.72314,-0.551222},{-0.258545,-0.877441,-0.554681}};
	lootPosSmall[] = {{1.65283,1.66846,-1.42742},{-1.75757,-1.08887,-1.43804}};
};
class Land_Ind_Workshop01_04: Industrial {
	lootPos[] = {{-1.62207,-6.37305,-1.52724},{-0.118408,-3.88281,-1.52788},{-1.01611,2.13428,-1.53099}};
	lootPosZombie[] = {{-0.403076,-6.74121,-0.649656},{1.03564,-3.41113,-0.656917},{-0.902344,4.50293,-0.655569}};
	lootPosSmall[] = {{-1.3833,-3.02734,-0.298156},{-1.9519,-3.37891,-1.52803},{1.60425,4.75244,-1.52979},{-0.324219,1.91504,-0.680825},{-0.302734,2.08545,0.0790772},{-1.61523,-3.03809,0.0718207}};
	hangPos[] = {{-0.541748,4.01221,-2.03068}};
};
class Land_Ind_Workshop01_L: Industrial {
	lootPos[] = {{3.89063,-4.09888,-1.31299},{1.80273,-1.88599,-1.31412},{-0.928223,4.50635,-1.31364}};
	lootPosZombie[] = {{0.876465,-3.66699,-0.438329},{-2.28223,4.8623,-0.429002},{-2.24268,2.19189,-0.429238}};
	lootPosSmall[] = {{0.62793,-1.49097,-1.23395},{0.805664,-1.45605,-0.0939465},{4.56055,-5.29443,-1.31279},{0.0273438,5.04443,-0.47565},{0.25,5.00342,0.284006}};
};
class Land_Hangar_2: Industrial {
	lootPos[] = {{-13.1816,10.4204,-2.56318},{-0.127441,-2.88794,-2.56318},{0.291992,3.94775,-2.56318},{8.94482,6.87793,-2.56318},{-13.688,-4.67871,-2.56318},{3.4248,-8.1499,-2.56318}};
	lootPosZombie[] = {{-2.16357,-9.1582,-1.68818},{14.1777,-9.11182,-1.68818},{-14.1748,-9.45459,-1.68818},{-2.35498,10.2441,-1.68818},{2.53516,10.6001,-1.68818}};
	lootPosSmall[] = {{-14.3721,11.1743,-2.56319},{-0.0571289,5.94385,-2.56319},{11.751,11.3525,-2.56319},{-0.458008,-9.68652,-2.56319},{-14.3472,-6.29736,-2.56319},{14.4277,-4.83154,-2.56319}};
};
class Land_hut06: Residential {
	lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
};
class Land_stodola_old_open: Farm {
	lootPos[] = {{2.5437,-10.6599,2.96444},{-0.4021,-10.6228,2.96444},{-2.56641,-10.8538,-0.995487},{4.6665,3.45386,-5.08055},{-2.24414,10.396,-5.08055},{3.08691,9.24976,-5.08055},{-1.12744,10.5359,-0.993513},{-1.27563,10.6184,2.96444},{2.99268,10.7668,2.96444},{4.35425,-10.5923,-5.08055},{-2.47363,-5.49194,-5.08055}};
	lootPosZombie[] = {{4.7146,3.5752,-0.118511},{-2.76367,-3.53003,-0.138124},{1.01733,-0.312012,-4.20555}};
	lootPosSmall[] = {{2.7832,-9.15698,-4.13055},{-1.83765,7.05908,-4.13055},{3.73218,-5.77075,-0.0403633},{0.913818,-11.1099,2.96444},{5.14795,-10.01,-0.997503},{-2.89819,7.21069,-5.08055},{1.79053,8.75171,-5.08055},{5.07788,9.51514,-0.993513},{3.65845,10.1985,2.96444},{0.85498,-3.37793,-4.13055}};
	hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
};
class Land_A_FuelStation_Build: Industrial {
	lootChance = 0.5;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	lootPos[] = {{1.88281,-0.879639,-1.57458}};
	lootPosZombie[] = {{-1.75146,-0.942993,-0.699436},{2.14331,0.848145,-0.699585}};
	lootPosSmall[] = {{-1.92578,0.237061,-0.604466},{-1.38672,0.592651,-1.09459}};
};
class Land_A_GeneralStore_01a: Supermarket {
	lootPos[] = {{13.2969,4.94678,-1.20155},{2.97559,7.32373,-1.20155},{-8.35352,-0.0244141,-1.20155},{7.78223,4.45801,-1.20155},{6.59863,-0.292969,-1.20155},{-6.92285,-1.6709,-1.20155},{11.9189,-2.81885,-1.20155},{-1.85547,-2.16162,-1.20155}};
	lootPosZombie[] = {{-8.22168,1.93213,-0.32655},{14.3604,1.98828,-0.32655},{8.03613,-0.300781,-0.32655},{-7.64258,-2.21973,-0.32655},{9.83398,-1.41846,-0.32655}};
	lootPosSmall[] = {{12.4678,4.51172,-1.20155},{12.2119,6.25098,-0.301548},{12.1895,3.68262,0.0484505},{11.8174,6.31689,-0.65155},{-8.67676,-2.41064,-1.13155},{-4.2002,-3.14355,-0.351551},{-0.165039,-1.3457,-0.351551},{14.6006,-1.38281,-0.351551},{3.03809,-5.03418,-0.351551},{0.512695,3.40527,-0.31155},{4.77637,6.76172,-0.301548},{7.27539,0.938477,-0.621552},{3.96777,1.00488,-0.621552},{0.389648,0.95459,-0.621552},{5.04004,3.44287,-0.65155},{1.85254,6.4248,-0.65155},{-3.65723,6.61133,-0.20155},{-4.39746,4.46191,-0.691551},{6.9248,6.38574,-1.01155},{2.77637,3.38477,-1.01155},{-0.217773,6.68066,-1.01155},{4.49707,-4.98828,0.408451},{-2.33203,-1.35205,0.408451},{2.0127,-1.36572,0.408451},{6.39746,-3.04395,0.408451},{14.6045,-0.722168,0.408451},{-2.43164,-3.73682,0.02845},{-4.77539,-1.35986,0.02845},{-0.436523,-3.04297,0.02845},{14.6104,-2.17139,0.02845},{12.6592,0.830078,0.34845},{4.00684,-3.15039,-0.351551},{2.7334,-3.0415,-0.731548},{-2.67676,-1.36133,-0.731548},{-1.00488,-5.00537,-0.731548},{8.34863,-1.43018,-0.731548},{1.8291,3.77197,-0.661549}};
};
class Land_A_GeneralStore_01: Supermarket {
	lootPos[] = {{11.8149,1.27979,-1.20155},{5.10449,1.61377,-1.20155},{1.70215,3.4292,-1.20155},{-0.771973,2.04102,-1.20155},{-3.59473,-6.04688,-1.20155},{-2.38428,-5.82202,-1.20155},{10.5171,-6.46729,-1.20155},{12.8472,-4.97754,-1.20155},{8.63623,-3.65381,-1.20155},{-3.22852,-10.0454,-1.21081}};
	lootPosZombie[] = {{12.4048,-1.49463,-0.326549},{3.18848,1.23926,-0.326549},{13.1211,4.95093,-0.326549},{-9.59521,-3.69678,-0.326549},{6.66309,-3.92041,-0.326549},{-8.38525,-5.50586,-0.326549},{8.26074,-5.41235,-0.326549},{4.03369,-5.50342,-0.326549}};
	lootPosSmall[] = {{11.0537,-0.321289,-0.661549},{11.0303,2.8833,0.0484514},{10.6646,1.86377,-0.651548},{6.66162,-2.69971,-0.611548},{6.02979,-2.6416,-0.611548},{2.16553,-2.68262,-0.611548},{-1.36963,-2.75684,-0.611548},{-0.919434,-0.283936,-0.301549},{0.583008,-0.308594,-1.01155},{0.804199,3.0752,-0.311549},{4.90234,3.04053,0.0484514},{-5.73779,0.694824,-0.20155},{0.796875,0.0898438,-0.301549},{2.73145,2.66406,-0.301549},{0.523926,2.81567,-1.01155},{-4.8208,2.87158,-0.701549},{-3.87061,-5.0415,-0.731549},{-4.73096,-5.00537,0.408451},{-2.1792,-5.02222,-0.351549},{-3.39795,-6.95508,-0.731549},{-3.58203,-7.24365,-0.731549},{-3.49756,-7.12695,0.408451},{-9.95215,-6.05859,0.348451},{13.4136,-5.93457,0.408451},{13.4463,-4.45898,0.028451},{13.4424,-6.20215,-0.351549},{2.93018,-8.67773,-0.351549},{1.53516,-6.79199,-0.351549},{7.16211,-5.12427,-0.351549},{6.79346,-5.11816,-0.73155},{2.87158,-6.91943,-0.73155},{0.0541992,-5.03271,-0.73155},{-1.979,-8.6875,-0.73155},{-5.84424,-5.04883,-0.73155},{-6.99268,-5.06836,-1.11155},{5.23535,-6.8335,-1.11155},{0.290039,-8.68701,-1.11155},{-0.649414,-8.68115,0.40845},{-0.983398,-9.56299,-1.21082}};
};
	class MAP_A_GeneralStore_01: Land_A_GeneralStore_01 {};
	class MAP_A_GeneralStore_01_dam: Land_A_GeneralStore_01 {};
class Land_Farm_Cowshed_a: Farm {
	lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	lootPosZombie[] = {{-7.52783,0.260742,-2.21265},{4.53271,-5.17969,-2.21265}};
	lootPosSmall[] = {{-6.74829,-2.98145,-3.03766},{1.34399,3.79199,-3.03766}};
};
class Land_Farm_Cowshed_b: Farm {
	lootPos[] = {{-3.26782,2.71875,-3.0311},{5.41699,-2.57813,-3.04111}};
	lootPosZombie[] = {{-2.55957,0.0683594,-2.2261}};
	lootPosSmall[] = {{3.46802,3.36621,-3.05112},{-9.98511,-3.2793,-3.09109}};
};
class Land_Farm_Cowshed_c: Farm {
	lootPos[] = {{0.625,-2.61133,-3.06583}};
	lootPosZombie[] = {{-2.09741,0.564453,-2.25082}};
	lootPosSmall[] = {{-2.82446,3.18457,-3.11581}};
};
class Land_stodola_open: Farm {
	lootPos[] = {{-3.77881,6.2478,-4.11348},{1.59106,6.31494,-4.10928},{-3.94727,-1.95605,-4.15359},{-0.440918,-3.91187,-4.1938}};
	lootPosZombie[] = {{1.66333,4.70776,-3.24809},{1.57202,-6.3313,-3.23413}};
	lootPosSmall[] = {{-4.22217,-6.12866,-3.32453}};
	hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
};
	class MAP_stodola_old_open: Land_stodola_open {};
class Land_Barn_W_01: Farm {
	lootPos[] = {{-4.45776,14.2153,-2.71607},{4.34277,-6.15088,-2.57279}};
	lootPosZombie[] = {{5.30298,18.0864,-1.76175},{-5.42627,17.7798,-1.7617},{-5.7019,-19.1206,-1.75527},{5.93481,-18.0952,-1.75545},{0.378662,0.887695,-1.75876}};
	lootPosSmall[] = {{4.09351,10.3872,-2.69559},{0.10791,3.48096,-2.64446},{-4.51636,-12.2603,-2.67148},{3.54419,-15.8311,-2.63077}};
};
	class Map_Barn_W_01_dam: Land_Barn_W_01 {};
	class MAP_R_Barn_W_01: Land_Barn_W_01 {};
class land_shed_m01: Farm {
	lootPosZombie[] = {{0.218262,-1.78369,-0.347349}};
};
class land_r_housev2_04: Residential {
	lootPos[] = {{0.364502,3.06128,-4.08876},{-4.49097,3.29565,-4.0887},{7.0625,-1.54053,-4.09079}};
	lootPosZombie[] = {{-1.72021,2.7146,-3.20429},{2.7522,2.9668,-3.20421},{4.73706,-0.942627,-3.20546}};
	lootPosSmall[] = {{-5.88696,2.77051,-4.08894},{-4.32666,6.00415,-4.0887},{7.37158,4.41968,-4.08918},{6.17065,2.39063,-4.09028}};
};
class Land_Hlidac_budka: Residential {
	lootPos[] = {{2.4209,2.16064,-0.783617}};
	lootPosZombie[] = {{2.18311,0.502441,0.0913835}};
	lootPosSmall[] = {{0.987305,2.43359,-0.113617},{1.67773,2.24927,-0.113617},{-0.138184,0.0844727,-0.713617}};
};
class Land_HouseV2_02_Interier: Residential {
	lootPos[] = {{6.97412,1.26904,-5.53068},{4.21631,6.56396,-5.53068},{-5.94922,-1.28955,-5.53068},{-3.31494,6.44287,-5.53068}};
	lootPosZombie[] = {{2.69043,5.47363,-4.65568},{-8.24561,-1.33496,-4.65568},{-2.74878,0.891602,-4.65568},{2.67603,1.12891,-4.65568}};
	lootPosSmall[] = {{6.44629,1.7251,-4.61068},{6.63672,1.2583,-4.61068},{8.7749,-2.23779,-4.74068},{2.81006,6.30908,-5.57068},{-4.97754,-2.1543,-5.57068},{-2.42676,5.58887,-5.57068}};
};
	class Map_HouseV2_02_Interier: Land_HouseV2_02_Interier {};
class Land_a_stationhouse: Military {
	lootChance = 0.3;
	lootPos[] = {{15.436,2.85498,-9.47058},{17.9861,-6.52832,-9.47058},{1.22583,2.24463,-9.47058},{-3.9126,-7.29834,-9.47058},{-2.28271,-6.21094,-4.6489},{-1.604,-8.68018,-0.043786},{-1.104,-5.60938,4.41139},{-3.55811,-8.56787,4.41139},{-2.99219,-8.27148,8.49209}};
	lootPosZombie[] = {{0.977295,-0.614746,-8.59558},{3.88477,2.83057,-8.59558},{-2.97949,-5.49365,-8.59558},{-1.08789,-8.40674,-3.7739},{-4.22363,-8.68604,0.831215},{-0.745117,-8.68896,5.28639},{21.0693,-9.00537,-8.63291},{-11.4531,-9.27734,-8.63291},{-3.64014,10.3086,-8.63291}};
	lootPosSmall[] = {{14.6826,3.55029,-8.25058},{9.97266,3.48584,-9.40058},{19.1477,-6.69629,-9.36058},{19.1719,-7.47998,-9.36058},{0.513672,1.19336,-9.39058},{0.51416,3.3418,-8.63058},{0.52124,1.92334,-7.87058},{-1.63623,-8.99756,-9.39058},{-3.5647,-9.01855,-8.63058},{-0.76709,-8.99072,-7.87058},{-2.40137,-9.03027,-8.25058},{-4.50391,-5.27588,-4.6489},{-1.02393,-9.02051,0.0562134},{-0.771484,-8.3335,0.0762138},{-0.7229,-9.03076,1.19621},{-4.40308,-8.7666,4.41139},{-2.27783,-5.35303,4.41139},{-4.4541,-8.81055,8.49209},{9.12549,3.64697,-8.25058}};
};
	class MAP_a_stationhouse: Land_a_stationhouse {};
class Land_Mil_ControlTower: Military {
	lootChance = 0.4;
	lootPos[] = {{7.33203,-1.104,-1.0787},{2.00684,-0.88623,-1.0787},{6.10938,3.34473,-1.0787},{1.90332,3.67188,-5.51367},{8.71387,3.8042,-9.6387}};
	lootPosZombie[] = {{2.66016,3.62891,-8.75369},{10.0898,5.72559,-6.56369},{5.05957,3.61328,-4.58868},{4.86914,1.06152,-0.193695}};
	lootPosSmall[] = {{7.32324,-1.55957,2.98267},{5.49023,-1.72949,-0.378693},{4.7334,-1.66064,-0.378693},{7.44922,2.03809,-0.378693},{5.86035,3.98438,-0.248688},{6.21289,4.02539,-1.0087},{4.96875,-1.39941,-0.638702},{1.08008,3.98389,-5.51367},{10.0879,3.5459,-9.64868}};
};

class Land_SS_hangar: Industrial {
	maxRoaming = 3;
	lootPos[] = {{-13.0562,-17.6318,-5.87253},{-12.9907,20.873,-5.87253},{12.7217,22.6377,-5.87253},{1.80469,3.94238,-5.87253},{13.1997,-18.3457,-5.87253}};
	lootPosZombie[] = {{-12.0562,-20.0518,-4.99753},{-7.35693,-1.4502,-4.99753},{-6.18555,16.3369,-4.99753},{8.46338,6.03613,-4.99753}};
	lootPosSmall[] = {{-14.1362,12.6729,-5.87253},{14.4819,-7.80371,-5.87253}};
};
class Land_A_Pub_01: Residential {
	zombieChance = 0.2;
	lootPos[] = {{1.17188,5.7522,-5.75623},{6.46191,-1.73706,-5.01623},{6.46777,1.47949,-5.75623},{0.975098,-5.80859,-5.75621},{-5.79736,-2.57813,-1.79123},{-7.35303,-3.7627,-1.79123},{4.56885,0.998291,-1.79123},{3.45947,0.236328,-1.79123},{1.91504,6.302,-1.79123},{0.114258,2.17432,-1.79123},{6.52832,6.10889,-1.79123},{0.555176,0.169189,-1.79123},{-4.37793,-2.64038,-5.75623},{-7.1709,-1.76855,-5.75623}};
	lootPosZombie[] = {{-5.01953,-5.39209,-0.886223},{3.14746,-3.76758,-0.886223},{6.39746,4.26367,-0.886223},{3.10889,2.92896,-0.886223},{-5.54248,-4.60083,-4.87122},{2.7334,-5.77441,-4.87122},{6.41846,-0.166992,-4.87122},{3.30518,4.54102,-4.87122}};
	lootPosSmall[] = {{-0.602051,2.69214,-5.48623},{2.0708,1.98486,-5.19622},{1.37744,7.89722,-5.01622},{3.28076,-1.51782,-4.75623},{2.79395,-1.90845,-4.75622},{1.19043,-1.97632,-4.7562},{4.03418,-5.81592,-5.30621},{1.46143,-6.27979,-5.01621},{-4.8252,-2.66309,-1.78122},{1.16504,1.125,-1.19122},{2.73486,0.744873,-0.701225},{5.04053,-2.60938,-1.78122},{5.00293,2.03491,-1.78122},{2.89844,5.78613,-1.37122},{1.44482,6.51831,-1.31123},{1.77734,7.88013,-1.79123},{5.81934,5.90967,-1.41122},{-3.41016,1.26123,-1.78123},{-7.37891,-1.24756,-5.28622}};
};
class Land_HouseB_Tenement: Office {
	lootPos[] = {{2.39063,4.80322,-19.8245},{-10.2041,-0.48877,-20.3445},{4.65625,-2.125,-20.3445},{7.27734,11.5957,-20.8045},{-4.50854,5.10645,-19.8245},{5.11865,12.0298,-20.8045},{13.5625,12.1631,-20.8045}};
	lootPosZombie[] = {{-10.75,5.90088,-19.9095},{-9.99756,5.92529,-19.9095},{-8.12207,5.97852,-19.9095},{-7.31445,6.00879,-19.9095},{5.53882,10.6328,-19.9095},{4.28247,8.729,-19.9095}};
	lootPosSmall[] = {{-1.7771,4.57861,-19.8245},{-0.338623,4.80322,-19.8245},{-11.0986,-0.365234,-20.3445},{2.38574,5.15869,-20.2245},{14.2202,4.91895,-20.3945},{6.7251,11.6895,-20.3445},{3.2915,-1.90088,-20.3445},{12.9602,10.0479,-20.8045},{13.3726,0.939453,-20.8045}};
};
class land_a_hospital: hospital {
	lootPos[] = {{17.665,-4.67188,-7.2566},{-20.7139,-1.48047,-7.2566},{-15.6924,8.60889,-7.2566},{-15.6064,1.95557,-6.8266},{-16.2139,2.27051,-7.2566},{-8.68652,4.19189,-3.7576},{14.2441,-3.98535,-3.7576},{21.5693,5.16455,1.19051},{18.3779,2.40869,6.2524},{-15.3359,-1.25439,3.40458},{-20.3252,0.410156,-3.82761}};
	lootPosZombie[] = {{9.84473,0.953613,-6.3816},{0.540039,1.20801,-6.3816},{-20.7822,1.93555,-6.3816},{-9.54004,8.61279,-6.3816},{15.8838,3.41699,-2.8826},{-8.08691,1.40674,-2.8826},{11.0088,-1.44775,-2.8826}};
	lootPosSmall[] = {{9.97754,-0.814453,-7.2566},{-19.6143,1.83887,-7.1666},{-19.6055,1.6084,-6.7866},{-19.583,4.91748,-6.7866},{-19.5576,4.7417,-6.0266},{-22.1982,9.59033,-7.2566},{-12.3379,9.53857,-6.8266},{-3.23438,6.01758,-6.8266},{-13.626,3.04248,-6.0466},{2.86426,-1.68604,-6.6466},{-5.58594,1.38232,-3.7576},{-4.05762,-2.48584,-3.7576},{-11.8428,5.15576,-2.5976},{-5.57129,-3.17236,-2.5976},{-5.65332,5.01416,-2.5976},{-12.5439,-2.33838,-3.6876},{-12.5801,-1.32617,-3.3076},{-12.5928,-1.56299,-2.9276},{-12.6162,-2.24805,-2.1676},{-12.5654,2.4126,-2.5476},{14.8721,3.96875,3.66054},{16.9033,-1.33838,4.01669},{21.3174,4.88916,6.2524},{-4.00488,7.89893,-3.82761}};
};
	class MAP_A_Hospital_dam: Land_A_Hospital {};

class Land_Panelak: Office {
	lootPos[] = {{-3.76709,-5.5791,0.0714226},{-6,-5.1709,0.0714226},{-4.86719,-3.30518,0.0714226},{-5.75098,1.51172,0.0714226},{3.95483,-4.83008,2.77144},{4.8728,1.51855,2.77144},{6.07324,-5.4668,2.77144}};
	lootPosZombie[] = {{0.657227,-3.12109,0.946423},{-2.28564,-6.88281,0.946423},{-6.31055,-5.41943,0.946423},{-4.51709,3.01758,0.946423},{-0.828613,-3.01465,3.64644},{2.23975,-6.20801,3.64644},{6.84961,-4.8125,3.64644},{4.64917,2.84668,3.64644},{4.59229,-2.55957,3.64644}};
	lootPosSmall[] = {{-4.05713,-4.55469,1.21142},{-4.03857,-4.71094,0.0714211},{-5.52002,-6.45508,0.0714211},{-3.9873,-3.06934,0.761421},{-3.99072,-3.84375,1.29142},{-4.09497,-2.15625,0.0714211},{-5.01172,1.91406,0.0714211},{-4.146,1.42871,0.391421},{1.37354,-5.00684,2.77144},{4.1167,-7.4834,2.77144},{4.2417,-3.69287,3.00144},{5.16602,-3.7334,3.40144},{4.15137,1.27051,2.77144},{4.66846,1.74414,3.43144},{5.69775,-6.44727,2.77144}};
};
class Land_Panelak2: Office {
	lootPos[] = {{0.53833,2.0498,-1.29137},{4.87939,1.90234,5.46665},{4.71045,-3.02197,5.46665},{6.01514,-5.86133,5.46665},{3.8833,-4.72314,5.46665}};
	lootPosZombie[] = {{0.611328,-3.38965,-1.75359},{0.584473,-3.44873,0.946428},{0.67334,-3.11133,3.58597},{-0.513428,-3.33057,6.31165},{6.30933,-4.92236,6.31165},{5.0686,3.12158,6.31165},{3.86108,-7.18848,6.31165}};
	lootPosSmall[] = {{4.85205,-3.7041,6.69665},{4.38281,-3.68848,6.09665},{5.229,1.64063,6.24665},{4.62354,1.4082,6.24665},{5.41382,-5.54199,5.79665},{1.20215,-4.93652,5.47665}};
};
	class MAP_Panelak2: Land_Panelak2 {};
class Land_Shed_Ind02: Industrial {
	lootPos[] = {{3.39893,9.21875,-4.67596},{1.29541,0.227539,-4.67596},{-0.458984,11.6934,-1.28638},{-4.00879,-8.42773,-1.29721}};
	lootPosZombie[] = {{-3.95166,9.92188,-0.406006},{4.71387,-9.10059,-0.399109},{-3.69971,-7.85254,-3.75098},{2.20898,10.04,-3.75098}};
	lootPosSmall[] = {{-3.66064,-0.253906,-4.66599},{4.44873,9.92578,-4.66599},{-0.209961,-0.124023,-4.66599},{4.89307,-0.166992,-1.29736},{-3.74805,12.123,-1.28674}};
};
class Land_Shed_wooden: Residential {
	lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
};;
class land_misc_powerstation: Industrial  {
	lootPos[] = {{2.98767,-5.02051,1.54777},{3.67371,5.62207,-2.04407}};
	lootPosZombie[] = {{-1.06372,6.63672,-1.11913},{0.224365,-2.4873,-0.377583},{-0.857544,3.08789,-1.11905}};
	lootPosSmall[] = {{4.92017,6.24707,-1.26179},{1.62573,-6.4541,-1.13445},{1.33667,-6.37207,-0.374413},{-3.20825,-6.50195,0.315748},{-3.84949,-6.2627,-1.16402},{-1.35608,-6.3877,-0.374122},{-0.895142,-6.39453,-0.37413},{2.30383,2.21387,-2.04394},{0.0808105,-0.0566406,-1.204},{1.98657,3.49121,-0.623982}};
};
class Land_HouseBlock_A1_1: Residential {
	lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
};
class Land_Shed_W01: Industrial {
	lootPos[] = {{-1.46289,-0.12207,-1.41129}};
	lootPosZombie[] = {{0.387207,-2.17822,-0.538036}};
};
class Land_HouseV_1I1: Residential {
	lootPosZombie[] = {{-0.789551,-2.14307,-1.94944}};
	lootPosSmall[] = {{0.728516,-2.01514,-2.86235}};
};
//Celle Start
class Land_MBG_GER_SUPERMARKET_1: Supermarket {
        zombieChance = 0.8;
        minRoaming = 1;
        maxRoaming = 5;
        zombieClass[] = {"zZombie_Base","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier","z_soldier_heavy","z_policeman","z_priest","z_teacher","z_suit1","z_suit2"};
        lootPosZombie[] = {
			{-8.66,-0.85,-2.37},{-5.34,14.56,-2.37},{7.93,4.61,-2.37},{8.63,15.36,-2.37},{-4.07,-4.67,-2.37},{-8.66,9.5,-2.37},{-8.9,15.69,-2.37},{2.84,-7.72,-2.37},
			{-1.18,2.05,-2.37},{7.27,7.04,-2.37},{3.34,14.22,-2.37},{7.53,14.86,-2.37},{-4.84,15.69,-2.37},{4.27,8.9,-2.37}
	};
        lootPos[] = {
			{-7.37,-5.06,-3.25},{0,-7.72,-3.25},{1.48,-5.4,-3.25},{1.18,-10.55,-3.25},{4.57,-4.67,-3.25},{4.57,-10.85,-3.25},{8.2,-5.4,-3.25},{9.39,-8.32,-3.25},{8.63,-11.22,-3.25},
			{-8.23,-2.14,-3.25},{-5.34,-1.37,-3.25},{-3.28,-0.82,-3.25},{-0.35,-1.37,-3.25},{2.84,-0.87,-3.25},{4.27,-0.84,-3.25},{-8.66,3.08,-3.25},{-5.7,2.98,-3.25},{1.48,2.68,-3.25},
			{4.94,2.35,-3.25},{8.63,-2.47,-3.25},{7.93,1.22,-3.25},{8.63,2.35,-3.25},{-8.23,7.04,-3.25},{-7.37,7.91,-3.25},{-3.28,6.78,-3.25},{-2.11,8.24,-3.25},{-3.28,9.2,-3.25},
			{1.81,8.24,-3.25},{2.21,8.9,-3.25},{2.84,6.78,-3.25},{4.27,6.54,-3.25},{5.84,7.91,-3.25},{7.53,8.9,-3.25},{8.63,7.37,-3.25},{8.9,8.9,-3.25},{-8.23,14.22,-3.25},{-6.6,15.12,-3.25},
			{-3.51,13.56,-3.25},{-1.85,14.86,-3.25},{-0.75,14.03,-3.25},{1.48,15.36,-3.25},{4.57,15.36,-3.25},{6.17,14.03,-3.25},{9.16,14.03,-3.25}
	};
        lootPosSmall[] = {
			{-8.61,-9.73,-2.74},{-8.53,-9.31,-2.74},{-8.44,-8.78,-2.74},{-5.73,-9.11,-2.74},{-2.83,-9.88,-2.74},{-2.91,-8.94,-2.74},{-8.94,-9.03,-2.25},{-6.25,-9.55,-2.25},{-5.94,-8.64,-2.25},
			{-3.13,-9.41,-2.25},{-5.61,6.98,-2.67},{-4.97,7.11,-2.67},{-5.77,8.64,-2.67},{-4.83,8.47,-2.67},{-5.53,10.31,-2.67},{-5.08,9.98,-2.67},{-0.57,6.78,-2.67},{0.18,7.2,-2.67},
			{-0.34,8.21,-2.67},{0.37,8.83,-2.67},{-0.48,9.93,-2.67},{0.27,10.2,-2.67},{1.01,11.19,-2.67},{2.32,11.37,-2.67},{4.2,11.3,-2.67},{6.42,11.3,-2.67},{8.37,11.19,-2.67},{-8.59,-7.8,-2.0},
			{-8.07,-6.59,-2.7},{-5.85,-7.13,-3.05},{-5.33,-7.6,-2.35},{-5.33,-6.59,-3.05},{-3.12,-6.37,-3.05},{-2.63,-7.44,-2.0},{-2.63,-6.59,-2.35},{6.3,-10.83,-2.7},{6.94,-10.39,-3.05},
			{6.3,-9.53,-2.35},{6.94,-8.79,-3.05},{6.94,-7.67,-3.05},{6.3,-6.99,-2.0},{6.94,-5.99,-3.05},{6.3,-5.04,-2.7},{-6.82,-2.47,-3.05},{-6.44,-2.99,-2.35},{-5.49,-2.99,-3.05},
			{-4.87,-2.47,-3.05},{-3.85,-2.99,-2.0},{-2.92,-2.99,-2.7},{-1.92,-2.47,-2.35},{-0.67,-2.47,-3.05},{0,-2.99,-3.05},{0.97,-2.99,-2.0},{1.61,-2.47,-2.7},{2.38,-2.99,-3.05},
			{3.19,-2.47,-3.05},{-6.61,1.14,-3.05},{-5.94,0.58,-3.05},{-5.13,1.14,-3.05},{-4.65,0.58,-2.0},{-3.85,1.14,-3.05},{-2.59,1.14,-2.35},{-2.06,0.58,-3.05},{-1.11,1.14,-2.35},
			{0,0.71,-2.7},{0.74,1.14,-2.0},{1.36,1.14,-3.05},{2.26,1.14,-2.35},{2.81,0.71,-3.05},{-6.44,4.75,-2.0},{-5.77,4.3,-2.7},{-5.27,4.3,-3.05},{-4.52,4.75,-2.35},{-2.06,4.75,-2.7},
			{-1.92,4.3,-2.0},{-0.85,4.3,-3.05},{0,4.75,-3.05},{1.61,4.75,-2.35},{2.02,4.3,-3.05},{2.81,4.3,-2.35},{6.79,-2.23,-2.7},{6.15,-0.93,-3.05},{6.27,0.33,-3.05},{6.79,1.66,-2.7},
			{6.65,2.61,-2.35},{6.27,3.37,-2.7},{6.79,4.51,-3.05},{6.15,5.16,-2.0},{10.65,-2.83,-2.35},{10.65,-0.57,-3.05},{10.65,0.61,-3.05},{10.65,1.26,-3.05},{10.65,3.13,-2.35},
			{10.65,4.87,-2.0}
	};
};
	class Land_MBG_GER_SUPERMARKET_2 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};	
	class Land_MBG_GER_SUPERMARKET_3 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};
	class Land_MBG_GER_SUPERMARKET_4 : Supermarket {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{9.28809, -3.89648, -3.2457}, {8.98242, 1.8623, -3.2457}, {8.81836, 8.53906, -3.2457}, {5.18848, 9.23145, -3.2457}, {-2.73242, 7.58691, -3.2457}, {9.3418, 8.62891, 0.25637}, {8.54102, -11.1494, 0.25637}, {8.32813, -5.57422, 0.25637}, {8.68555, -1.44727, 0.25637}, {-5.73242, 2.80957, -3.2457}, {0.323242, 2.64648, -3.2457}, {1.95117, -0.985352, -3.2457}, {-4.31348, -0.868164, -3.2457}, {-6.75391, -6.83594, -3.2457}, {-3.91992, -7.16016, -3.2457}, {6.62305, -6.0625, 0.25637}, {-3.32422, -11.5215, -3.2457}};
	};
	class Land_MBG_GER_PUB_1 : Residential {
		lootChance = 0.4;
		lootPos[] = {{6.06738, -1.80078, -3.53085}, {0.600586, -5.08105, -3.53085}, {-3.14258, -4.36523, -3.53085}, {-1.55176, -2.04004, -3.53085}, {-3.74805, 0.65332, -3.53085}, {-5.85645, -1.33984, -3.53085}, {-6.57031, -4.13672, -3.53085}, {-1.73535, -0.976563, -0.884312}, {5.01953, -4.50195, -0.63085}, {2.1582, -0.416016, -0.63085}, {-1.68066, 1.04297, -0.63085}, {-3.53418, -3.61719, -0.63085}, {-5.61816, 1.6875, -0.63085}};
	};
	class Land_MBG_GER_PUB_2: Residential {
			zombieChance = 0.5;
			lootPos[] = {
				{6.413,5.835,-3.531},{3.809,-0.086,-3.531},{-3.809,-4.198,-3.531},{-4.045,-5.58,-3.531},{-6.994,1.069,-3.531},{-1.229,1.639,-3.531},{3.054,-5.155,-0.631},
				{5.506,-4.25,-0.631},{4.294,5.7,-0.631},{2.372,5.157,-0.631},{-1.824,-3.781,-0.631},{-5.807,-1.964,-0.631},{6.008,1.243,-0.631},{3.304,-1.979,-0.631}
			};
			lootPosZombie[] = {
				{3.809,-0.08,-3.531},{-4.045,-5.5,-3.531},{-1.229,1.63,-3.531},{4.294,5.75,-0.631},{-1.824,-3.78,-0.631},{6.008,1.24,-0.631}
			};
	};
	class Barrack2 : Barracks {
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.2;
		lootChance = 0.2;
		lootPos[] = {{-1.17383, 4.89941, -0.689161}, {-1.97559, 2.18848, -0.690756}, {0.600586, 0.37793, -0.691821}, {1.37207, -2.66406, -0.693611}, {-1.91113, -2.00488, -0.693226}};
	};
	class Land_MBG_GER_ESTATE_1 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-6.61133, -3.87012, -2.13187}, {-3.37988, -5.80859, -2.13187}, {6.77344, -3.47168, -2.13187}, {5.5332, -0.175781, -2.13187}, {-5.66797, 0.326172, -2.13187}, {-5.71582, 5.30078, -2.13187}, {-2.07227, 5.81934, -2.13187}};
	};
	class Land_MBG_GER_ESTATE_2 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
	lootPos[] = {{-0.847656,-5.23291,-2.13187},{-0.615234,3.95996,-1.55187},{8.30859,0.642578,-2.02187},{7.60547,6.6792,-2.13187},{6.38867,-5.31396,-2.13187},{-4.74023,3.71582,-2.13187}};
	lootPosZombie[] = {{2.12695,-8.60791,-1.5208},{1.33984,9.18945,-1.25071}};
	lootPosSmall[] = {{-6.3125,-6.48145,-1.43187},{-4.81445,-2.0293,-1.43187},{-3.47852,4.58789,-2.13187},{0.107422,3.45947,-1.55187},{4.23438,-1.42188,-1.83187},{4.97461,1.09229,-1.30187},{6.53711,-2.07227,-1.29187},{6.35547,-4.70117,-1.65187},{-7.55273,3.99268,-1.65187}};
};
	class Land_MBG_GER_RHUS_1 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
	lootPos[] = {{-1.85156,3.59961,-0.0356913},{3.04688,1.85254,-0.465693},{3.36328,0.257813,-0.465693},{-2.74023,-3.26465,-0.465693},{1.23828,-4.19531,-2.38569},{1.56055,2.37012,-2.86569},{-10.4941,3.8916,-0.454963},{-9.91797,-4.14453,-0.454963},{-5.84375,0.373047,-0.174962},{-4.50977,0.0859375,-3.35496}};
	lootPosZombie[] = {{-2.03125,6.38867,-2.93606},{-8.33398,-5.82813,-2.73209}};
	lootPosSmall[] = {{-1.4707,4.39844,-0.0356913},{1.56055,0.314453,-0.185692},{2.53516,0.682617,-3.25569},{3.62695,0.696289,-2.50569},{-3.34375,3.22852,-2.43569},{-3.32031,2.38086,-1.95569},{-4.81055,1.39453,-0.454963},{-6.64844,-4.29102,-0.454963},{-4.32617,-1.61035,-2.51496},{-6.30664,-4.11328,-2.37496}};
};
	class Land_MBG_GER_RHUS_2 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_3 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_4 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_RHUS_5 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-1.27051, -0.229492, -3.36569}, {-0.929688, 2.83105, -3.36569}, {2.51367, 1.93066, -3.36569}, {2.16895, -3.08398, -3.36569}, {2.18555, -0.80957, -3.36569}, {-1.47754, 1.54688, -0.465689}, {0.844727, 3.04492, -0.465689}, {1.96094, -2.76953, -0.465689}, {-0.998047, -3.99902, -0.465689}};
	};
	class Land_MBG_GER_HUS_1 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {
		{-1.985,0.314,-3.113},{-3.907,3.138,-3.113},{-2.52,4.962,-3.113},{6.112,4.219,-3.113},{2.668,5.949,-3.113},{2.969,2.247,-3.113},
		{5.0476,0.947,-3.113},{4.719,-7.304,-3.113},{-3.754,-6.15,-3.113},{-2.592,-2.681,-3.113},{5.571,-5.798,-0.113},{4.817,-4.602,-0.113},
		{-2.847,0.312,-0.113},{-4.075,-4.582,-0.113},{1.885,-2.27,-0.113},{0.894,-5.588,-0.113},{-3.555,0.196,-0.113},{-4.708,2.236,-0.113},
		{-3.26,4.646,-0.113},{2.986,4.058,-0.113},{3.824,7.079,-0.113}
		};	
	};
	class Land_MBG_GER_HUS_2 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_GER_HUS_3 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_GER_HUS_4 : Residential {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		lootPos[] = {{-4.25488, 6.01367, -3.11289}, {-4.7832, 3.17773, -3.11289}, {-4.30273, -5.76953, -3.11289}, {0.319336, -4.4043, -3.11289}, {5.30859, 0.268555, -3.11289}, {1.31738, 5.64941, -3.11289}, {4.54297, 4.94434, -3.11289}, {3.83301, -5.88965, -0.112886}, {4.37695, -2.8252, -0.112886}, {-1.50879, -2.65332, -0.112886}, {-1.18848, -5.41309, -0.112886}, {-2.35742, 2.8457, -0.112885}, {-2.85645, 5.8291, -0.112886}, {0.261719, 3.79785, -0.112885}, {4.48438, 5.73438, -0.112885}, {-2.875, -0.117188, -0.112885}};
	};
	class Land_MBG_Garage_Single_A : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_Garage_Single_B : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{2.54492,3.97607,-1.03899},{4.13672,-0.0625,-1.03899}};
		lootPosZombie[] = {{2.96094,6.3374,-0.133815}};
		lootPosSmall[] = {{4.50586,2.56982,-1.03899}};
	};
	class Land_MBG_Garage_Single_C : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_Garage_Single_D : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
		lootPos[] = {{-0.922852, 4.46509, -1.03965}, {0.129395, 0.712402, -1.03965}};
	};
	class Land_MBG_ATC_Base : Industrial {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 2;
			lootPos[] = {
		{-9.528,-5.656,-1.219},{-6.153,1,181,-1.219},{-9.569,5.54,-1.219},{-6.4,4.327,-1.219},{7.111,0.357,-1.219},
		{2.559,6.072,-1.219},{10.431,-6.522,-1.219},{-3.686,-3.771,-1.219},{5.383,-5.63,-1.219},{-2.506,-0.731,-1.219}
		};
		lootPosZombie[] = {
			{-6.153,1,18,-1.219},{-6.4,4.32,-1.219},{2.559,6.07,-1.219},{5.383,-5.6,-1.219}
		};
	};
	class Land_MBG_Companybuilding_1 : Barracks {
		lootChance = 0.9;
		minRoaming = 1;
		maxRoaming = 6;
		lootPos[] = {{16.3525, -1.36719, -9.34856}, {-14.4072, -0.623047, -9.34856}, {-7.51465, -10.2148, -6.68216}, {-1.95459, 7.33594, -6.68216}, {-5.57129, 18.6221, -6.68216}, {1.27002, 17.0938, -6.68216}, {-7.71875, 18.6152, -4.90286}, {1.33154, 21.0879, -3.32216}, {-6.02197, 8.97852, -3.32216}, {-6.00977, -3.26855, -3.32216}, {1.81836, -20.835, -3.32216}, {1.54932, -11.9688, 0.0378399}, {-5.94727, 9.2168, 0.0378399}, {1.1084, 17.373, 0.0378399}};
	};
	class Land_dum_mesto2 : Residential {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
			lootPos[] = {
		{2.46582,7.10742,-4.34475},
		{2.87305,4.03906,-4.34475},
		{-3.56738,4.05078,-4.34475},
		{-2.49902,0.46875,-4.34475},
		{1.77734,-7.41797,-4.34475},
		{-3.24512,-7.69922,-4.34475},
		{-3.16113,-1.58984,-4.34475},
		{3.19531,1.64258,-0.945168},
		{-3.19141,7.76563,-0.944004},
		{-0.253906,4.78516,-0.944004},
		{-3.35645,-5.74414,-0.944004},
		{-1.70508,-7.22656,-0.944004},
		{1.21973,-1.07617,-0.944004}};	
	};
	class MAP_dum_mesto_in: Land_dum_mesto2 {};
	class Land_dum_mesto_in : Residential {
		lootChance = 0.4;
		minRoaming = 1;
		maxRoaming = 1;
			lootPos[] = {
		{ -5.53796,-2.51996,-3.99769 },
		{ -4.66113,1.34052,-4.26331 },
		{ -4.9137,3.4718,-4.26331 },
		{ 0.397583,-2.74866,-4.26418 },
		{ 2.18762,0.74707,-4.26418 },
		{ 4.94128,-1.67108,-4.26418 },
		{ 4.48279,2.82495,-4.26418 },
		{ 1.11023,4.69928,-2.75561 },
		{ 4.98938,3.79883,-1.28095 },
		{ 5.55957,-1.61218,-1.28095 },
		{ 0.695679,-2.18268,-1.28095 },
		{ -2.42969,-1.18854,-1.27582 },
		{ -4.77722,3.51996,-1.27582 }};
	};
	class Land_MBG_Observation_Tower : MilitarySpecial {
		lootChance = 0.9;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = {{-4.85791, 0.0922852, 0.462315},  {2.08545, 0.383789, 0.462357}};
	};
// MGB Killhouse Start
	class MBG_Killhouse_1_InEditor : Industrial {
		lootChance = .6;
		minRoaming = 1;
		maxRoaming = 4;
		lootPos[] = {
		{-3.471,-2.267,-2.049},{3.064,-2.402,-2.049},{0.807,0.517,-2.049},{-4.261,0.109,-2.049},{-1.254,1.339,-2.049},{-2.281,6.084,1.251},{1.481,-1.053,1.251}
		};
		lootPosZombie[] = {
		{3.064,-2.4,-2.049},{-4.261,0.1,-2.049},{-2.281,6.08,1.251}
		};
	};
	class MBG_Killhouse_2_InEditor : Industrial {
		lootChance = .4;
		minRoaming = 1;
		maxRoaming = 2;
			lootPos[] = {
		{-1.139,2.284,-2.799},{4.708,5.884,-2.799},{3.996,3.682,-2.799},{5.735,-4.911,-2.799},{2.547,-5.23,-2.799},{-0.453,0.404,-2.799},
		{-6.458,-4.221,-2.799},{-4.776,4.803,-2.799},{-5.59,1.261,-2.799},{4.044,-0.2985,0.502},{5.552,-4.471,0.502},{1.542,-4.25,0.502},
		{-4.869,-4.003,0.502},{1.289,-0.182,0.502},{-5.129,2.894,0.502},{-5.804,-4.118,3.801},{-1.459,4.396,3.801}
	};
	lootPosZombie[] = {
		{4.708,5.88,-2.799},{-5.59,1.26,-2.799},{1.289,-0.18,0.502},{1.542,-4.2,0.502}
	};
	};
	class MBG_Warehouse_InEditor : Industrial {
		lootChance = .4;
		minRoaming = 3;
		maxRoaming = 4;
		lootPos[] = {
		{-11.4,13.203,5.157},{-6.3,-6.586,5.157},{11.096,11.423,5.157},{2.142,4.708,5.157},{-18.807,16.863,5.157},{-19.644,18.652,-2.844},
		{-4.897,18.176,-2.844},{20.065,17.395,-2.844},{18.93,6.962,-2.844},{21.409,-3.055,-2.844},{15.084,-10.934,-2.844},{19.776,-5.816,-6.143},
		{16.737,-12.505,-6.143},{18.675,17.056,-6.143},{6.834,9.707,-6.143},{-14.514,-6.369,-6.143},{-11.773,16.415,-6.143},{0.262,-10.539,-6.143}
		};
		lootPosZombie[] = {
		{-11.4,13.2,5.157},{20.065,17.39,-2.844},{21.409,-3.05,-2.844},{-14.514,-6.37,-6.143}
		};	
	};
	class MBG_Killhouse_3_InEditor : Military {
		lootChance = .5;
		minRoaming = 0;
		maxRoaming = 0;
		lootPos[] = {
		{-7.79,-0.135,-2.849},{-11.875,3.486,-2.849},{-7.645,3.438,-2.849},{-2.322,2.201,-2.849},{-2.573,-0.985,-2.849},{-4.778,-2.068,-2.849},
		{-13.065,-0.739,-0.997},{-7.473,-1.926,0.451},{-10.835,2.782,0.451},{-5.882,2.409,0.451},{-2.328,3.936,0.451},{-1.96,-0.707,0.451},
		{-4.593,-0.445,0.451},{3.063,-1.755,-2.849},{4.329,-1.069,-2.849},{2.038,2.232,-2.849},{4.512,3.152,-2.849},{11.474,3.847,-2.849},
		{13.171,-0.766,-1.037},{7.552,0.024,0.451},{4.617,-0.378,0.451},{1.714,-1.058,0.451},{10.142,2.417,0.451},{12.148,3.84,0.451}
		};
		lootPosZombie[] = {
			{-11.875,3.48,-2.849},{-2.322,2.2,-2.849},{-7.473,-1.92,0.451},{-5.882,2.4,0.451},{4.329,-1.06,-2.849},{7.552,0.02,0.451},{12.148,3.8,0.451}
		};
	};
	class MBG_Killhouse_4_InEditor : Farm {
		lootChance = .6;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {
		{-5.771,-4.366,-3.843},{-5.034,-0.855,-3.843},{-5.611,2.826,-3.843},{-5.56,6.752,-3.843},{0.806,4.743,-3.843},{6.688,6.477,-3.843},
		{7.413,-0.894,-3.843},{4.744,1.314,-2.119},{0.52,-5.068,-0.543},{-2.378,-4.263,-0.543},{-2.25,-0.022,-0.543},{7.028,-0.581,-0.543},
		{5.938,-3.238,-0.543},{-6.629,3.109,-0.543},{5.538,6.209,-0.543},{4.413,4.298,-0.543}
		};
		lootPosZombie[] = {
			{-5.034,-0.85,-3.843},{5.538,6.2,-0.543},{7.413,-0.89,-3.843},{7.028,-0.58,-0.543}
		};
	};
	class MBG_Killhouse_5_InEditor : Farm {
		lootChance = .6;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {
		{0.603,0.848,-4},{-3.573,-4.068,-4},{-6.605,-3.851,-4},{-6.658,1.943,-4},{-3.632,0.691,-4},{-2.89,2.27,-4},{-6.604,6.142,-4},{4.326,4.95,-4},
		{2.453,2.876,-4},{5.117,1.074,-4},{6.602,-3.867,-4},{4.113,-3.964,-4},{-5.9,6.29,-0.7},{2.323,0.823,-0.7},{5.595,4.492,-0.7},{3.494,4.399,-0.7},
		{2.935,-4.769,-0.7},{4.144,-2.324,-0.7},{4.881,1.206,-0.7},{0.679,-6.51,-0.7},{-6.366,2.286,-0.7},{-6.027,1.33,-0.7},{-3.826,-3.667,-0.7},
		{-2.332,1.299,-0.7}
		};
		lootPosZombie[] = {
			{0.603,0.84,-4},{6.602,-3.86,-4},{-5.9,6.2,-0.7},{0.679,-6.5,-0.7}
		};
	};
// MGB Killhouse Finish
	class FgS_Hill3: MilitarySpecial {
		lootChance = .5;
		minRoaming = 1;
		maxRoaming = 3;
		lootPos[] = {{4, 3, 10.57}, {-4, -3, 10.57}, {6.5, -5.25, 5.39}};
	};
// Celle End
	class Land_Tovarna2: Industrial {
	lootPos[] = {{-2.02222,7.87256,-5.62933},{-12.2107,-8.15527,-5.62469},{-12.2112,7.7998,-5.62933},{-8.99805,7.72168,-2.31135},{-6.54077,8.80469,-2.31156},{-12.6907,8.04932,1.58661},{-9.06421,8.10645,1.58661},{-5.39453,9.02783,1.56174},{-8.26465,-0.520508,0.37684},{-3.83984,4.99121,-2.31156},{-6.6416,8.03174,-5.62933},{-3.31763,-1.80762,-5.59492},{-6.66382,7.57861,1.56174},{-12.8,4.30664,1.58661},{-12.8074,-0.535156,0.374299},{-12.4324,5.15918,-2.31135},{-12.8635,1.78174,-5.61933},{-3.19507,-8.49707,-5.63091},{6.43872,-3.48145,-4.62884},{9.97998,-2.35059,-4.62604}};
	lootPosZombie[] = {{2.07422,8.08594,-4.68601},{-8.604,8.22559,-4.68433},{-8.79053,6.47461,-4.68433},{-12.7864,2.26172,-1.35635},{-4.00415,8.89844,-1.35656},{-12.7346,2,2.54161},{-3.98218,5.14697,2.49674}};
	lootPosSmall[] = {{-3.22974,9.69678,1.56174},{-10.2683,8.87354,1.58661},{-13.2981,7.09912,-2.31135},{-7.51001,9.64307,-2.31156},{-8.13623,5.60693,-5.62933},{-13.2112,0.257813,-5.62933},{2.41431,-2.05469,-5.62689},{1.64185,8.75879,0.374298},{-13.2427,-8.98438,3.3743},{-4.927,0.368164,0.372077},{-3.88208,-3.81641,6.62795},{-7.47241,4.50391,1.56174},{-8.28833,4.20068,1.58661},{-13.2944,-9.01514,0.374299},{-7.38672,4.53418,-2.31156},{-5.28125,2.875,-5.62933},{2.42627,-8.75684,-5.62154}};
};
class Land_rail_station_big: Office {
	lootPos[] = {{2.11914,-0.13208,-4.98439},{0.712402,0.718994,-4.98439},{2.45654,3.80566,-4.98439},{7.45947,1.49683,-5.04438}};
	lootPosZombie[] = {{-5.02148,5.46338,-4.16938},{8.16309,-0.947998,-4.16938},{4.43018,-4.29761,-4.16938},{-9.5708,-4.60913,-4.16938}};
	lootPosSmall[] = {{1.81641,0.77417,-4.05439},{2.74609,0.869385,-4.05438},{-5.16943,-3.43555,-4.98439},{9.25,0.421631,-5.04438},{-6.54004,-4.09692,-5.04439}};
};
class Land_Ind_Vysypka: Industrial {
	lootPos[] = {{1.50195,-15.9287,-4.9663},{1.88208,6.03809,-4.97856},{-8.42188,10.0103,-4.97909},{1.21948,13.2168,-4.97966},{-7.09595,26.0376,-4.99675}};
	lootPosZombie[] = {{1.58472,2.12793,-4.09329},{1.99658,-12.5371,-4.09167},{-7.51147,-5.00488,-4.09327}};
	lootPosSmall[] = {{2.5459,-16.5952,-4.97639},{-8.72485,-22.1318,-4.97806}};
};
class Land_A_MunicipalOffice: Residential {
	zombieChance = 0.4;
	minRoaming = 3;
	maxRoaming = 9;
	zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
	lootChance = 0.4;
	lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	lootPosZombie[] = {{-3.04883,-6.00903,-17.554},{2.26807,-6.87524,-17.554},{0.310059,10.1396,-17.5491},{-0.589355,10.1394,-17.5491}};
	lootPosSmall[] = {{4.34521,-8.81567,-18.439},{-1.06787,-5.11499,-18.439},{1.3291,9.86938,-18.4413},{-1.54395,9.90649,-18.4353}};
};
class Land_A_Office01: Office {
	lootPos[] = {{-7.84912,6.3855,-4.528},{3.84424,3.27051,-4.528},{-0.0383301,3.51733,-4.528},{5.37695,5.63379,-4.528},{15.5393,-1.90015,-4.528},{13.8057,-2.3811,-4.528},{10.114,3.44849,-4.528},{10.3008,6.32495,-4.528},{1.71021,1.66675,-4.528},{1.58032,5.87671,-2.028},{-0.599854,7.08984,-2.028},{3.87769,6.84229,-2.028},{-7.6709,6.72485,-2.038},{-4.729,4.19556,-2.028},{-7.93091,3.2041,-2.038},{10.2354,-1.9187,-2.018},{6.9812,-4.30933,-2.038},{15.4075,6.03198,-2.038},{13.9285,3.40649,-2.038},{0.163086,3.43286,0.472002},{7.13892,3.64844,0.471998},{1.71973,-1.40967,6.72491},{-0.443359,0.61499,-2.028},{-5.22144,-3.69971,-2.028}};
	lootPosZombie[] = {{-0.440674,7.06885,-3.653},{14.8137,4.05688,-1.153},{8.78906,-1.70557,-1.153},{2.57178,3.36401,-1.153},{-7.41211,4.16235,-1.153},{-12.9187,1.20825,-1.153},{-2.67383,3.98071,1.347},{2.06128,1.36035,1.347},{2.14526,7.03027,-3.653},{12.0562,-3.65308,-3.653},{8.42749,3.86108,-3.653}};
	lootPosSmall[] = {{3.50342,5.28027,-3.668},{5.68286,4.95898,-4.048},{0.895508,4.98511,-3.288},{2.42017,4.98291,-2.908},{15.8838,-2.62256,-2.908},{4.74072,6.75391,-0.938002},{7.69507,-0.465332,-1.618},{10.7341,-1.90918,-1.158},{6.34229,-2.73242,-0.398003},{-4.86572,7.16187,-0.988003},{-4.27173,4.2207,-0.778002},{-4.56543,5.48193,-1.348},{-8.21387,2.04932,-2.028},{12.6631,2.83398,-1.918},{12.8892,2.82178,-0.778002},{11.5281,7.08887,-1.338},{11.3428,5.02344,-1.158},{11.636,6.34937,-1.338},{-3.802,4.13525,1.71201},{0.720947,3.55957,0.952003},{-3.78076,4.44727,0.952003},{10.7363,3.28833,-3.668},{6.46191,5.13013,-2.908},{7.03906,6.25537,-4.098},{6.68823,5.81177,-3.818},{10.7056,4.13135,-3.288},{2.86792,-0.489014,6.72491}};
};
class Land_A_Office02: Office {
	lootPos[] = {{19.8076,3.26123,5.38394},{0.27002,0.0458984,5.38394},{5.0415,-4.854,-8.17109},{-0.263184,-5.15259,-8.17105}};
	lootPosZombie[] = {{-14.7651,3.86694,6.25894},{-23.5288,2.58789,-7.26266},{2.23096,-8.4292,-7.27757},{23.479,2.6084,-7.26267}};
	lootPosSmall[] = {{-0.112305,-4.35254,-8.17073},{-0.813965,-4.14355,-7.79043},{4.104,-7.27051,-8.1711},{10.7427,2.16992,5.38394},{21.5991,2.56104,5.42394},{-4.02783,2.4668,5.38394},{-17.3232,1.29028,8.71684},{-18.0732,3.38623,8.71684}};
};
class land_barn_metal: Industrial {
	lootChance = 0.4;
	lootPos[] = {{-8.18506,19.9023,-5.44214},{4.70117,17.2849,-5.44214},{1.31738,-7.94946,-5.44214},{-7.74316,-20.5955,-5.44214}};
	lootPosZombie[] = {{-3.31738,-3.63574,-4.56714},{0.723633,3.1355,-4.56714},{3.99902,-2.87744,-4.56714},{10.6294,-2.91797,6.46288}};
	lootPosSmall[] = {{10.5313,22.6777,5.58788},{-9.65137,1.55225,5.58788},{-9.48535,-25.0022,5.58788},{2.83203,-25.1704,5.58788}};
};
class Land_A_BuildingWIP: Industrial {
	lootChance = 0.5;
	lootPos[] = {{-15.4871,-9.755,-6.53698},{-10.4043,-9.76697,-6.53213},{-12.0098,-5.50208,-6.53936},{-21.5681,-9.69409,-6.54067},{-23.7563,8.18347,-6.45811},{2.82544,11.3822,-6.47826},{-7.49634,-9.24609,-6.52115},{6.21216,7.7356,-6.41615},{-9.29541,0.683716,-6.53778},{16.8376,2.03186,-2.54291},{4.77661,-9.35681,-1.50389},{-20.3762,-2.86389,-2.53182},{-14.3564,-9.68604,-2.5341},{-24.1724,7.65405,-2.53182},{1.15796,8.03552,-2.53182},{-24.0901,11.4227,1.47364},{-22.1218,11.8442,1.47786},{-22.7849,10.4189,1.47402},{-8.66797,5.81238,1.47396},{-11.4856,-2.29419,2.50674},{-15.6948,-13.5236,5.46682},{-8.00171,-1.07678,5.31147},{8.66626,-8.14514,5.344},{11.5269,2.50977,-6.52237},{-15.926,-17.5713,-6.53193},{-23.8391,0.109863,-6.47638},{-24.2957,2.29199,-2.53182},{-7.6853,11.9902,-2.53182},{-17.7314,1.81299,-2.53182},{2.94116,6.97754,1.47579},{-9.39014,-9.62451,1.47428},{-24.1311,9.47656,5.46242}};
	lootPosZombie[] = {{2.2063,0.501709,-5.53659},{-4.65991,0.766846,-5.53039},{-17.9524,-3.8678,-5.63485},{-14.4016,-16.0522,-3.64149},{-14.2686,-16.675,0.360519},{-14.6934,-16.019,4.36047},{-10.7161,3.77234,2.37796},{-16.876,-2.25098,2.3687},{-16.8928,10.2216,-1.65682},{1.67065,10.3689,-1.65682},{-14.3699,-7.90063,-1.65894}};
	lootPosSmall[] = {{-10.4377,-8.03418,-6.54007},{-15.9675,-6.70959,-6.54014},{-15.8289,7.37451,-6.46946},{-6.89136,-5.30615,-6.52994},{-7.37231,0.36084,-5.627},{-20.3455,-4.8197,-2.24182},{-13.9419,-5.02502,-2.53268},{-6.2439,11.7518,-1.50182},{-23.1213,12.5128,1.47477},{-24.5806,9.80115,1.47403},{4.63794,-0.358765,2.17724},{-5.92505,11.8485,2.50079},{-11.2415,4.78796,6.37765},{-24.7756,-10.0265,5.46264},{5.75464,-9.76001,1.47425},{-23.0313,2.87158,-5.43137},{-0.398193,7.37256,-6.52535},{13.678,1.89307,-6.54251},{-7.79321,-9.53564,-2.53376},{15.3154,11.478,-2.54182},{-19.8633,12.3149,-2.54182},{-21.0286,-11.563,5.46691}};
};

class Land_Church_01: Church {
	lootPos[] = {{-6.92822,0.516602,-4.2191}};
	lootPosZombie[] = {{4.18628,-4.37549,-5.50933},{7.23792,4.85742,-5.70495}};
	lootPosSmall[] = {{-7.27332,-1.16895,-4.22726}};
};
class Land_Church_03: Church {
	lootPos[] = {{-0.665527,-3.02832,-14.3021},{2.90771,3.07422,-14.3021},{9.75342,0.0117188,-13.7588},{4.74609,8.1582,-14.3021},{-2.41943,1.72168,-14.3049}};
	lootPosZombie[] = {{-8.01465,-4.29297,-13.4271},{-8.01074,4.1123,-13.4271},{6.23047,-0.046875,-13.4199},{-4.29785,0.00488281,-13.4199}};
	lootPosSmall[] = {{-0.791992,2.21191,-13.7321},{2.93945,-1.59766,-13.7349},{6.21191,3.48535,-13.7321},{6.56787,-3.55176,-14.3021},{-0.741211,-8.75684,-14.3021},{-0.126465,5.94434,-14.3021},{-1.14893,-3.6416,-14.3021},{-2.71484,-1.56055,-13.7349}};
	hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
};
	class MAP_Church_03_dam: Land_Church_03 {};
	class MAP_Church_03: Land_Church_03 {};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
class Land_Mil_Barracks_i: MilitarySpecial {
	lootPos[] = {{4.56494,-2.67383,-1.14822},{0.312988,1.54492,-1.09824},{-2.95361,1.49414,-1.11823},{-3.39111,-1.99023,-0.708221},{-6.68604,-1,0.0917664},{-8.94238,-2.52441,-1.09824},{-0.59668,-1.49609,-1.10825},{3.03467,-1.00586,0.0917664},{-0.214355,-2.19531,0.0917664},{-8.93018,1.53906,-1.09824}};
	lootPosZombie[] = {{-7.97119,0.0888672,-0.223236},{-5.29053,-0.952148,-0.223236},{-1.9707,-1.5957,-0.223236},{1.48193,-2.20313,-0.223236},{5.24463,-2.05664,-0.223236}};
	lootPosSmall[] = {{3.88037,-0.905273,-0.358246},{6.48242,-2.51367,-0.978241},{3.03662,-1.78418,-0.698242},{-0.179199,0.488281,-1.10825},{-3.20703,-0.101563,-1.11823},{-3.37061,-1.08887,0.0917664},{-6.79297,-2.63086,-1.09824},{-9.29541,-0.212891,-1.09824}};
};	//Qty: 2
class Land_A_TVTower_Base: Industrial {
	lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
};
class land_mil_house: Military {
	lootPos[] = {{-14.3345,1.24414,-4.94623},{-7.87842,1.45117,-4.15622},{-7.77686,-5.34277,-0.88623},{-4.43506,-5.33594,-0.88623}};
	lootPosZombie[] = {{-11.2925,2.85059,-4.03122},{-9.33154,-1.83496,-4.03122},{-10.5005,-4.77051,-0.0112305},{-2.37695,-1.71973,-0.0112305}};
	lootPosSmall[] = {{-10.4692,4.4082,-4.94623},{-10.3696,1.2627,-4.46622},{-6.47998,4.92871,-4.98621},{-13.3208,-0.803711,-4.98621},{-13.791,-6.27832,-0.88623},{-13.2046,-5.36426,-0.196228},{-9.45166,-6.02832,-0.88623},{-0.253418,-4.12402,-0.88623},{-4.75635,-0.0224609,-0.88623},{-6.02002,-0.0410156,-0.426239},{-2.28857,0.575195,-0.876221}};
};
class Land_Misc_Cargo1Ao: Industrial {
	lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
};
class Land_Misc_Cargo1Bo: Industrial {
	lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
};
/*
class Land_Nav_Boathouse: Industrial {
	lootPos[] = {{-5.24414,-2.32715,3.67999},{-5.43994,7.17676,3.67548},{6.13232,0.615234,3.6694},{-1.00439,6.89355,3.68311}};
	lootPosZombie[] = {{4.46143,7.24414,4.60098},{5.44775,3.14551,4.60623},{-5.35254,3.41211,4.60873}};
	lootPosSmall[] = {{5.2002,7.64746,6.30902},{-1.88623,7.55762,6.30902},{4.75781,-2.49121,3.67984},{-0.398438,4.61914,3.61755},{2.91797,8.50293,3.67038}};
};
*/
class Land_ruin_01: Residential {
	lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
};
class Land_wagon_box: Industrial {
	lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
};
class Land_HouseV2_04_interier: Residential {
	lootPos[] = {{-5.08826,3.13818,-5.73971},{7.37061,6.52881,-5.73873},{1.75281,3.70752,-5.73953},{-3.75183,7.1626,-5.73842},{0.292725,1.27441,-2.93809}};
	lootPosZombie[] = {{-1.18665,2.89355,-4.86479},{3.33203,6.44092,-4.86366},{4.81616,1.38086,-4.86529}};
	lootPosSmall[] = {{4.7594,2.8042,-5.07979},{4.93396,2.56348,-5.07979},{1.95215,2.67529,-5.05956},{0.668823,2.56299,-5.74944},{-3.7146,7.07813,-4.98862},{-3.31897,6.68457,-4.98895},{-2.87244,6.92676,-5.29893},{-3.95215,2.85449,-5.19935}};
};
	class MAP_R_HouseV2_04: Land_HouseV2_04_interier {};
class Land_HouseV2_01A: Residential {
	lootPosZombie[] = {{-2.21313,-3.28174,-4.79521}};
	lootPosSmall[] = {{-3.53906,-3.29736,-5.55779},{-0.759766,-3.95068,-5.56563}};
};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
class Land_KBud: Residential {
	zombieChance = 0.3;
	maxRoaming = 0;
	lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
}; // Qty: 90
class Land_A_Castle_Bergfrit: Residential {
	lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
}; // Qty: 3
class Land_A_Castle_Stairs_A: Residential {
	lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
}; // Qty: 3
class Land_A_Castle_Gate: Residential {
	lootChance = 0.7;
	lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
}; // Qty: 3
class Land_Mil_Barracks: Military {
	lootPos[] = {{-0.891113,-3.48926,-1.51633},{-1.09204,2.88672,-1.51633},{-3.55591,3.42871,-1.51633},{-6.31299,3.7041,-1.51633},{-7.68262,-3.54102,-1.93634},{-5.11475,-2.09961,-1.93634},{0.24707,3.57324,-1.93634},{6.72217,-2.47949,-1.93634},{5.41602,3.99316,-1.93634},{-6.34912,3.90137,-0.726349},{-3.58691,2.8252,-0.726349},{-1.04224,3.39941,-0.726349},{-3.75195,-3.25977,-0.726349},{-0.864746,-3.88672,-0.726349},{-3.52563,-2.44824,-1.93634},{-6.06396,2.57422,-1.93634},{-0.935059,-4.05078,-1.93634},{-1.39502,3.89941,-1.93634}};
	lootPosZombie[] = {{-2.15845,-3.12793,-1.06134},{2.13281,3.24316,-1.06134},{-6.20679,-0.125,-1.06134},{2.09521,-3.36719,-1.06134}};
	lootPosSmall[] = {{-6.45703,2.03125,-1.79633},{-3.5127,1.98242,-1.79633},{-1.14746,1.9873,-1.79633},{-0.911621,-1.87598,-1.79633},{-3.81567,-1.90234,-1.79633},{-6.5249,-1.86426,-1.79633},{3.78979,-4.17773,-1.13635},{5.32861,-4.19043,-1.13635},{5.20923,-1.99805,-1.65634},{6.54175,-1.99707,-1.65634},{3.82324,-1.96582,-1.65634},{6.89209,2.93457,-1.84634},{6.98877,1.95215,-1.84634},{6.98291,2.23145,-1.46634},{7.00391,2.73438,-1.46634},{6.96729,3.01953,-1.08633},{6.94824,2.04785,-0.706329},{4.36768,3.13086,-0.396332},{3.86768,3.49316,-0.396332},{3.84521,3.49609,-1.86633},{4.33984,3.1748,-1.86633}};
}; // Qty: 8
class Land_Mil_Barracks_L: Military {
	lootPos[] = {};
}; // Qty: 5
class Land_Barn_W_02: Farm {
	lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
}; // Qty: 3
	class MAP_Barn_W_02: Land_Barn_W_02 {};
class Land_sara_domek_zluty: Residential {
	maxRoaming = 1;
	lootPos[] = {{6.91724,3.09277,-2.43372},{6.52881,-0.521973,-2.43379},{0.613037,3.74463,-2.4337},{-7.00024,-0.744141,-2.43373},{-3.13672,3.45459,-2.43364},{-6.81055,-2.67676,-2.43385}};
	lootPosZombie[] = {{-5.43433,-2.46777,-1.55883},{-2.5957,2.12891,-1.55869},{0.22583,2.46631,-1.5587},{6.02344,1.64941,-1.55872}};
	lootPosSmall[] = {{7.26685,-0.882324,-2.43378},{4.00684,3.84766,-2.43372},{-1.11255,1.29395,-2.43382},{-7.22192,-4.23584,-2.43386}};
}; // Qty: 3
class Land_HouseV_3I4: Residential {
	maxRoaming = 3;
	lootPosZombie[] = {{6.1272,2.78906,-2.07073},{-4.63208,5.15771,-2.20779}};
}; // Qty: 103
class Land_Shed_W4: Residential {
	maxRoaming = 3;
	lootPosZombie[] = {{-1.36035,-5.73657,-0.56669},{0.554688,-5.27881,-0.569374}};
}; // Qty: 172
class Land_HouseV_3I1: Residential {
	maxRoaming = 3;
	lootPosZombie[] = {{5.18896,-2.26819,-1.60805},{-5.49658,-3.26038,-1.8894}};
}; // Qty: 103
class land_housev_1l2: Residential  {
	maxRoaming = 3;
	lootPos[] = {{-2.58887,-4.8584,-0.789368},{-2.58887,-4.8584,-0.789368},{-2.37646,0.373047,-0.799377}};
	lootPosZombie[] = {{1.88721,-3.35938,0.0856323},{1.88721,-3.35938,0.0856323},{1.68408,-0.298828,0.0856323}};
	lootPosSmall[] = {{-1.37354,-3.26465,-0.789368},{4.48389,-3.06348,0.0406189},{4.53271,-3.61328,0.590637},{-1.37354,-3.26465,-0.789368},{4.48389,-3.06348,0.0406189},{4.53271,-3.61328,0.590637},{4.29126,-1.02441,0.0606384},{-0.199707,3.28711,-2.9292}};
};
class Land_HouseV_1T: Residential {
	maxRoaming = 3;
	lootPosZombie[] = {{-4.91797,6.75098,-2.32535},{3.49487,-1.74414,-2.40549}};
}; // Qty: 90
class Land_telek1: Industrial {
	maxRoaming = 3;
	lootPos[] = {};
}; // Qty: 4
class Land_Rail_House_01: Industrial {
	lootPos[] = {{-2.35864,3.04199,-1.28266}};
	lootPosZombie[] = {{0.141846,2.74268,-0.40766}};
	lootPosSmall[] = {{3.13745,3.62549,-1.28266}};
}; // Qty: 9
class Land_HouseV_2I: Default {
	maxRoaming = 3;
	lootPos[] = {};
	lootPosZombie[] = {{-6.33838,-0.644531,-2.07941},{-4.12793,-9.34375,-2.07941}};
}; // Qty: 83
class Land_Misc_deerstand: Hunting {
	zombieChance = 0.3;
	lootChance = 0.5;
	maxRoaming = 3;
	lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
}; // Qty: 56
	class Land_A_Villa_EP1: Estate {
	lootPos[] = {
		{ -23.3442,1.71484,-3.65929 },
		{ 14.5498,-5.69775,-5.06722 },
		{ 5.8457,-2.09814,-5.06717 },
		{ 9.5249,3.76563,-5.06717 },
		{ 10.0454,11.5093,-5.0734 },
		{ 0.268555,8.64648,-5.06699 },
		{ -0.378906,15.3989,-5.06724 },
		{ -6.68506,14.9448,-5.06722 },
		{ -10.9644,13.0996,-5.06719 },
		{ 11.0571,4.48926,-1.48401 },
		{ 2.85938,9.12939,-1.48407 },
		{ -3.87646,8.01416,-1.4844 },
		{ 0.0537109,10.3984,-1.4844 },
		{ -2.78467,13.5903,-1.4844 },
		{ -0.118652,15.3394,-1.4844 },
		{ -6.73779,15.772,-1.4844 },
		{ -8.39453,13.5249,-1.4844 },
		{ -10.5317,9.75146,-1.4844 },
		{ -11.8062,14.2358,-1.4844 },
		{ -15.5771,14.0396,-1.4844 }};
 };
	class Camp: Military {
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	}; // Qty: 1
	class Land_House_C_3_EP1: Residential {
  lootPos[] = {
   { 6.61987,-1.8667,-3.91483 },
   { 5.80493,1.21094,-3.91483 },
   { -7.11523,2.78418,-3.86868 },
   { -6.45874,-0.478271,-3.86868 },
   { -6.37598,-2.27344,-3.86868 },
   { -4.84521,-2.55664,0.576136 },
   { -1.21606,-1.24634,1.96108 }};
 };
	class Land_House_C_4_EP1: Residential {
  lootPos[] = {
   { 5.38452,-0.364746,-3.48355 },
   { 3.16089,2.81616,-3.48355 },
   { -3.36499,2.44629,-3.48355 },
   { -4.60474,0.0483398,-3.48355 },
   { 4.34985,-0.835205,-0.35146 },
   { 1.84668,-3.7168,-0.352423 },
   { -1.23096,-5.15308,-0.27861 },
   { -4.16602,2.48022,-0.348963 }};
 };
	class Land_House_C_5_EP1: Residential {
  lootPos[] = {
   { 3.1499,2.39502,-1.36692 },
   { -1.80127,-2.98022,-1.36692 }};
 };
	class Land_House_C_5_V2_EP1: Residential {
  lootPos[] = {
   { 3.42529,1.77832,-1.36692 },
   { -3.6687,1.98779,-1.36692 },
   { -2.0271,-2.9126,-1.36692 },
   { -1.271,-3.94385,1.33329 }};
 };
	class Land_House_C_9_EP1: Residential {
  lootPos[] = {
   { -3.47339,2.13086,-3.74726 },
   { -3.17773,4.19849,-3.74837 },
   { -0.839844,5.7041,-3.74944 },
   { 4.67529,1.19897,-3.74832 },
   { 4.20508,-1.85229,-3.74805 },
   { 1.01074,-0.609619,-0.152166 },
   { 0.213379,1.56616,-0.152166 },
   { 1.66138,4.33472,-0.152166 },
   { 4.38208,-5.14136,-0.152166 }};
 };

	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
class land_shed_m03: HouseRoaming {
	lootPosZombie[] = {{1.73657,-0.0332031,-0.198479}};
};
class land_ind_workshop01_03: HouseRoaming {
	lootPosZombie[] = {{2.75952,0.594727,-0.606018},{2.77246,2.89258,-0.606018},{-3.54077,5.02344,-0.606018}};
};
class Land_Shed_W03: HouseRoaming {
	lootPosZombie[] = {{0.35022,-2.35254,0.0159397}};
}; // Qty: 206
class Land_HouseV_1I3: HouseRoaming {
	lootPosZombie[] = {{2.03467,-1.04419,-1.25841}};
}; // Qty: 117
class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
class Land_HouseV_1I2: Residential{
	lootPosZombie[] = {{0.911133,-4.5022,-1.35152},{-3.38965,2.33008,-1.35312}};
};
class Land_HouseV_2L: Residential{
	lootPosZombie[] = {{-4.25684,-3.86255,-3.11304},{4.41699,1.95239,-3.05204}};
	lootPosSmall[] = {{4.39404,1.28296,-3.96535},{4.12988,2.52222,-3.95569}};
};
class Land_HouseV_2T1: Residential{
	lootPosZombie[] = {{-4.86328,5.27539,-2.35536},{6.10547,-3.55127,-2.35536},{2.22485,-4.75195,-2.35536}};
};
class Land_houseV_2T2: Residential{
	lootPos[] = {{-3.49072,1.01782,-4.03519}};
	lootPosZombie[] = {{-4.70093,0.893921,-3.16019},{6.19409,4.90735,-3.99267}};
	lootPosSmall[] = {{2.8606,4.33081,-4.65974},{-0.222778,4.34985,-4.65713}};
};
	class Land_HouseV_3I2: HouseRoaming {};
class land_housev_3i3: Residential  {
	lootPos[] = {{-4.2334,0.291992,-1.47064},{1.10059,-2.99854,-0.790649},{3.53027,-2.34033,-1.74265}};
	lootPosZombie[] = {{-4.18457,-1.68164,-0.525635},{0.419922,-1.00781,-0.525635},{4.35059,-1.37939,-0.98764}};
	lootPosSmall[] = {{-4.85645,0.550293,-0.340637},{2.21289,0.783691,-0.160645},{-0.833008,0.554199,-0.620636},{1.79785,-2.99902,-1.09064},{5.06055,-2.68164,-1.56265}};
};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
class Land_HouseBlock_B3: Residential{
	lootPosZombie[] = {{0.878418,5.69189,-6.38459}};
	lootPosSmall[] = {{2.4126,5.16846,-6.94959}};
};
class Land_HouseBlock_B4: Residential{
	lootPosZombie[] = {{0.0595703,-5.58252,-6.69312},{-1.1543,5.55225,-6.74633}};
	lootPosSmall[] = {{-0.0693359,4.82227,-7.28133}};
};
class Land_HouseBlock_B5: Residential{
	lootPosZombie[] = {{6.5918,0.56543,-6.60703},{-0.304932,-6.36328,-6.60701}};
};
class Land_HouseBlock_B6: Residential{
	lootPosZombie[] = {{-4.28174,1.32861,-6.7437},{-3.84131,-0.0163574,-6.74365}};
};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
class Land_HouseV2_01B: Residential {
	lootPosZombie[] = {{-3.51318,-3.36133,-4.67352},{9.73682,3.37646,-5.2341}};
	lootPosSmall[] = {{-4.27881,-2.22852,-5.18173}};
}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213



// DAYZ AMP More buildings
class Land_Shed_W02_EP1: FarmRoaming{};
class Land_MBG_ApartmentsOne_W: HouseRoaming{};
class Land_MBG_ApartmentsTwo_P: HouseRoaming{};
class Land_MBG_ApartmentsTwo_G: HouseRoaming{};
class Land_MBG_ApartmentsTwo_B: HouseRoaming{};
class Mass_grave_DZ: HouseRoaming {
	zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
	minRoaming = 8;
	maxRoaming = 16;
	lootChance = 1;
	zombieChance = 1;
};
class HMMWVWreck: Military
{
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class UralWreck: Military
{
	zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class SKODAWreck: Residential
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class UAZWreck: Residential
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class datsun01Wreck: Residential
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class hiluxWreck: Industrial
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};
class datsun02Wreck: Military
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};

class Land_Ind_Shed_01_EP1: Default
{
	zombieChance = 0.3;
	maxRoaming = 3;
};
class Land_Ind_FuelStation_Build_EP1: Industrial
{
	lootChance = 0.5;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	lootPos[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};
};
class Land_ibr_FuelStation_Build: Industrial
{
	lootChance = 0.5;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	lootPos[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};
};
class Land_Mil_ControlTower_EP1: Military
{
	lootChance = 0.4;
	lootPos[] = {
		{ 5.53369,3.64355,-5.46368 },
		{ 7.67236,3.68115,-1.0687 },
		{ 7.53271,-1.70068,-1.0687 },
		{ 4.55225,1.64111,2.92148 },
		{ 10.1292,3.6958,-9.62869 },
		{ 0.491943,6.1543,-9.62869},
		{ 7.54956,1.74512,-0.378696},
		{5.40234,-1.71289,-0.378696}};
};
class Land_Mil_hangar_EP1: Industrial
{
	maxRoaming = 3;
	lootPos[] = {{-9.83203,-12.4097,-5.38129},{10.5488,-12.1318,-5.38129},{13.002,0.0214844,-5.38129},{-13.3887,0.25,-5.38129},{13.3203,20.5176,-5.38129},{-13.1865,19.9839,-5.38129},{0.0195313,21.5078,-5.38129},{0.49707,11.5469,-5.38129},{-0.836914,-0.634277,-5.38129},{0.177734,-11.6821,-5.38129}};
};
class land_mil_guardhouse: Military {
	lootPos[] = {{4.65381,-3.61914,-1.46277},{2.99756,3.54102,-0.712769}};
	lootPosZombie[] = {{-1.73193,-1.90625,-0.56778},{3.26025,-1.55859,-0.56778}};
	lootPosSmall[] = {{-0.798828,-3.51758,-1.46277},{3.73047,-3.95996,-1.32278},{-0.283203,-3.15723,-1.32278},{-0.996582,3.81445,-1.14279},{-1.33008,2.26563,-0.762787},{0.289063,3.66211,-0.0827942},{-1.17383,-0.112305,-1.48279}};
};
class Land_Mil_Guardhouse_EP1: Military
{
	lootPos[] = {{-3.05859,1.76514,-1.59003},{-3.16895,3.45361,-1.59003},{-3.19922,-0.323242,-1.59003}};
};
class Land_Mil_Repair_center_EP1: Industrial
{
	lootPos[] = {
		{-2.42432,-0.73584,-1.52847},
		{-2.43018,2.83984,-1.52847}};
};
class Land_Ind_PowerStation_EP1: Industrial {
	lootPos[] = {{4.04248,-3.4917,-1.26547},{3.8645,3.5249,-1.28112}};
};
class land_repair_center: Industrial  {
	lootPos[] = {{0.327148,1.65479,-2.37888},{-2.35547,-0.163574,-1.71927},{-2.41016,4.45654,-1.71927}};
	lootPosZombie[] = {{0.982422,-0.634277,-1.51389}};
	lootPosSmall[] = {{1.80469,2.01709,-1.6489},{1.60352,4.57178,-0.862885},{0.771484,4.55713,-0.48288},{1.56348,4.50439,-1.24289}};
};

class Land_Ind_TankBig: Industrial
{
	lootChance = 0.1;
	lootPosSmall[] = {{-1.2981,3.27441,5.34628},{3.49609,-3.02539,5.34628}};
};
class Land_Ind_Coltan_Main_EP1: Industrial {
	lootPos[] = {{4.57178,-9.46716,2.36833},{-3.41223,16.6705,-6.38571},{-2.18005,4.8584,-6.33167},{-1.8158,7.86523,-6.33167},{6.59717,16.1372,0.928326},{7.28076,16.1573,4.84833}};
};
class Land_A_Mosque_big_hq_EP1: Church {
	lootPos[] = {{4.06592,-6.90674,-9.31999},{5.25195,4.07666,-9.31999},{5.70264,7.5376,-4.04752},{-4.78857,-7.00684,-4.04753},{3.93262,9.41846,0.567287},{0.882324,-0.134766,-9.31999}};
};
class Land_A_Mosque_big_addon_EP1: Church {
	lootPos[] = {{-5.10791,-1.75098,-6.4124},{6.30908,-3.39795,-6.38554},{6.87109,2.81934,-6.38554},{2.14111,-4.38086,-6.35463},{4.86475,4.65576,-6.38554},{-4.72021,-10.5127,-1.15605}};
};

class Land_A_Mosque_big_wall_EP1: Church {
	lootPos[] = {{2.81543,3.9458,-2.02844},{-4.94531,3.60645,5.18165}};
};
class Land_A_Mosque_small_1_EP1: Church
{
	lootPos[] = {
		{ 2.45117,3.39063,-2.04604 },
		{ 0.183105,0.826172,-2.04605 },
		{ 6.66406,4.11719,-1.9437 },
		{ 0.49707,-1.33301,-1.69603 }};
};

class Land_A_Mosque_small_2_EP1: Church
{
	lootPos[] = {
		{ 1.33496,-0.726074,-2.48535 },
		{ -0.794922,-1.74414,-2.48538 }};
};
class Land_Mil_Barracks_i_EP1: MilitarySpecial
{
	lootChance = 0.2;
	maxRoaming = 2;
	lootPos[] = {
		{5.15625,-2.30371,-1.09824},
		{1.05664,-2.45508,-1.09824},
		{-0.841797,-2.36133,-1.09824},
		{-4.03516,-2.31836,-1.09824},
		{-8.49609,-2.33838,-1.09824}};
};
class Land_fortified_nest_big_EP1: Military
{
	lootPos[] = {
		{0.663086,1.06738,-0.740341},
		{0.513184,-1.3623,-0.740341},
		{-0.991211,1.11621,-0.740341},
		{-2.87109,-3.94238,-0.740341}};
};

class Land_Mil_House_EP1: Military
{
	vehPos[] = {
		{ 13.439,3.25244,-5.71244,84 }};
	lootPos[] = {{11.7949,4.3147,-5.81439}};
	lootPosZombie[] = {{-2.13477,6.69116,-4.56909},{5.58887,6.41284,-4.44098}};
	lootPosSmall[] = {{-1.54785,5.46997,-5.00406},{-2.61816,5.46362,-5.0097}};
};
class Land_Misc_Cargo1Bo_EP1: Industrial {
	lootPos[] = {{-0.0170898,-0.331421,-1.09225}};
};

class Land_Mil_Barracks_EP1: Military
{
	lootPos[] = {};
};
class Land_Mil_Barracks_L_EP1: Military
{
	lootPos[] = {};
	lootPosZombie[] = {{-3.97998,-7.65137,-1.33652},{-2.41919,-7.81445,-1.33569}};
};
class Land_vez: Military
{
	maxRoaming = 1;
	lootPos[] = {{-0.0585938,1.51367,1.36331}};
	lootPosZombie[] = {{-0.116699,-0.801758,-2.81857}};
};
class Land_Shed_W03_EP1: Residential
{
	maxRoaming = 3;
	lootPos[] = {};
};
class Land_Ind_Oil_Pump_EP1: Industrial
{
	lootPos[] = {
		{ 1.49048,-1.99609,-2.08473 }};
};
class Land_IndPipe2_bigL_L_EP1: Industrial
{
	lootPos[] = {
		{ 1.09961,1.11572,2.0323 }};
};
class Land_Barrack2: Hospital
{
	maxRoaming = 1;
	lootChance = 0.4;
	lootPos[] = {
		{ -1.96484,4.15576,-0.689606 },
		{ 1.15381,0.3125,-0.691864 }};
};

class Land_House_C_1_EP1: Residential
{
	lootPos[] = {{-3.62476,-1.83301,-0.967744},{3.19263,-2.92676,-0.937744},{7.94824,-1.15381,-0.957744}};
	lootPosZombie[] = {{-5.45166,-0.360596,-0.0527439},{5.60938,-1.80347,-0.0527439}};
	lootPosSmall[] = {{-7.64917,-2.33325,-0.257745},{-2.65161,-2.34473,-0.717744},{2.07666,-3.62549,-0.0177441},{7.56982,-2.3689,-0.257744},{2.6355,-1.62378,-0.947745}};
};
class Land_House_C_2_EP1: Residential
{
	lootPos[] = {{-3.63477,2.83398,-2.27891},{5.94116,1.08691,-2.30269},{0.387207,1.1936,-1.47782},{5.49438,-1.47388,1.56868},{-2.24487,-1.44019,0.547503},{-2.01343,3.41553,0.547503},{5.06909,1.21997,0.746294},{5.75464,-4.69043,0.794252}};
	lootPosZombie[] = {{-0.131592,3.38794,1.63951},{-4.25537,1.24023,1.4225},{2.3269,1.89136,-1.43735},{-1.87183,-0.48584,-1.4121},{1.21802,-1.58765,1.67137}};
	lootPosSmall[] = {{0.1604,1.06812,-2.00456},{-0.469482,1.10962,-2.2006},{1.1167,0.707031,-1.78269},{-1.62158,-1.72437,1.1175},{-1.63965,-1.27368,1.4575},{5.88379,-3.06787,1.17425},{-2.31738,3.16724,1.3775},{-1.8562,3.80322,1.3775},{-0.393799,3.50586,-1.61131},{6.06934,0.0444336,-2.07269},{-1.95215,-1.91943,-2.33913},{2.17334,-1.75024,0.74663}};
};

class land_panelak3: Residential
{
	lootPos[] = {{2.00415,-1.33325,12.3769},{0.0378418,-1.23608,-10.8254}};
	lootPosZombie[] = {{-0.654541,1.48291,-9.94038},{0.709717,1.21411,-9.94038}};
};
class Land_House_C_5_V3_EP1: Residential
{
	lootPos[] = {{2.43799,1.03662,2.2605},{-1.00391,-3.9248,1.22732},{0.83374,4.91699,-0.671498},{-1.63037,3.66699,-1.4815},{-1.24463,-3.43701,-1.4815}};
	lootPosZombie[] = {{-3.54736,1.73535,-0.596497},{2.47021,4.54834,-0.59645},{1.73682,2.96338,2.2955},{-3.40234,-4.05664,2.18232}};
	lootPosSmall[] = {{3.44287,1.23535,1.4205},{3.64917,3.85156,1.4605},{-0.623779,-5.09424,1.24732},{2.31201,0.770996,-0.0414982},{2.53198,0.82959,-0.731498},{1.81738,5.23926,-1.4815},{-4.40332,0.501465,-1.0415},{-0.46582,-2.83594,-1.0815},{-0.466797,-3.58984,-0.401499}};
};
class Land_House_C_5_V1_EP1: Residential
{
	lootPos[] = {{1.01025,4.85181,-1.4815},{3.42773,1.4248,-1.4915},{-1.62939,-4.69336,-1.4815},{-1.56982,3.66333,-1.4915},{2.28418,1.03076,2.2605},{-0.941895,-3.75952,1.16351}};
	lootPosZombie[] = {{-3.11206,1.50952,-0.596497},{2.39453,4.8396,-0.592795},{1.48633,3.10425,2.2955}};
	lootPosSmall[] = {{0.615479,4.92847,-0.671498},{2.23071,0.780518,-0.411497},{2.61011,0.823975,-1.0915},{-4.35205,-0.0966797,-1.0515},{-0.5271,-2.93677,-1.4215},{-4.2854,3.09082,-1.4715},{-4.42822,-5.13232,-1.4815},{-0.468018,-3.18481,-0.0414963},{2.96582,1.17114,2.2605},{1.85205,4.83716,1.7605}};
};
class Land_House_K_6_EP1: Residential
{
	lootPos[] = {
		{2.36108,1.41309,-1.60797},
		{-2.57178,1.42285,-1.59425},
		{-4.81445,2.98193,1.48639},
		{-0.123047,3.83203,1.47144},
		{2.7063,0.193359,4.42145},
		{-4.3584,-2.99609,4.33153},
		{-0.0888672,3.0293,4.42143},
		{2.10864,0.180664,1.47076},
		{-4.10083,-2.09082,1.55551}};
};
class Land_House_C_10_EP1: Residential
{
	lootPos[] = {{-0.476807,-6.18408,-4.2081},{-2.19189,-2.32666,-4.19943},{0.970459,5.15942,-4.19894},{2.09814,8.11133,-4.19852},{0.209961,8.65503,-4.19772},{-1.55542,-2.83594,-0.0197258},{0.849854,-5.49219,-0.869633},{-1.56226,8.49561,-0.878298},{-4.927,0.8396,-0.574228},{-2.1604,8.40674,2.47196},{2.02271,5.81372,5.22763},{-2.17822,1.53076,-0.878794}};
	lootPosZombie[] = {{0.153076,-2.36743,-3.31192},{-0.96167,-7.51587,-3.32074},{2.4646,5.95142,-3.2957},{-3.10596,6.55762,-3.29418},{2.66089,5.73584,0.00634003},{-1.50708,7.18359,0.00669289},{-0.899902,-4.46045,0.00529861}};
	lootPosSmall[] = {{-3.52124,-9.30933,-4.20103},{0.401611,-0.616211,-4.19847},{-1.30835,9.25757,-4.11613},{-0.946045,9.29761,-3.10613},{0.183594,9.23438,-2.74583},{1.15552,4.8877,-3.25071},{0.820313,4.84009,-3.58973},{-0.0129395,9.26294,-3.78608},{0.918701,-1.18433,-0.879436},{-2.12231,-2.69775,-0.399366},{-3.64014,4.15503,-0.268515},{-3.17114,0.63916,-0.878897},{2.64014,4.59009,2.47196},{0.853516,5.55664,5.22757},{2.84448,5.5791,2.47196},{3.43945,-9.37354,-0.879139},{1.83667,7.45825,-0.878618},{3.32861,-2.79565,-4.20015}};
};
class Land_House_C_11_EP1: Residential
{
	lootPos[] = {
		{ -4.875,-3.75586,-2.45703 },
		{ -1.22852,-3.17529,-2.08453 },
		{ 6.55859,0.731934,-2.08453 },
		{ 4.74072,3.21436,-2.08453 },
		{ 4.39551,0.458984,-2.08453 },
		{ 0.449219,-3.03857,0.972969 },
		{ 4.8291,3.44629,0.972969 }};
};
class Land_House_C_12_EP1: Industrial
{
	lootPos[] = {{-3.27197,-1.5813,-3.50101},{-2.09863,-6.13086,-3.52102},{-2.979,-8.6936,0.141808},{-2.66602,-3.0437,0.139957},{5.91016,-3.59204,0.132626},{2.33154,-1.00244,-3.51937}};
	lootPosZombie[] = {{2.11182,-8.16724,1.00763},{1.85498,-3.48828,-2.63601},{-2.74854,0.133301,-2.63601},{2.65674,-5.69165,-2.63601},{-2.60742,-7.35913,1.0174}};
	lootPosSmall[] = {{-4.03857,-2.06226,-2.43102},{-4.02344,-1.44019,-3.11102},{-3.55371,-0.618164,-3.29102},{7.38184,0.690674,-3.12101},{-2.99268,-6.54883,3.45573},{7.58105,-2.40894,0.112629},{-1.79004,-3.58325,0.128376},{-2.05713,-9.00806,0.150394}};
};
class Land_House_K_3_EP1: Residential
{
	lootPos[] = {
		{ 0.524414,3.5166,-0.53767 },
		{ 1.53491,-0.0644531,-0.790318 },
		{ -0.887451,0.615234,-0.790318 },
		{ -4.46191,1.38379,-0.795597 },
		{ 1.1001,5.40723,2.81719 }};
};
class Land_House_K_7_EP1: Residential
{
	lootPos[] = {
		{ -0.995361,1.89014,-0.218372 },
		{ -4.9541,3.85254,-0.218374 },
		{ -3.4502,4.0376,3.32767 }};
};
class Land_House_L_7_EP1: Residential
{
	lootPos[] = {
		{ 3.52979,-0.34375,0.102112 },
		{ -0.245117,3.10742,-0.261154 },
		{ -5.43408,3.36426,-0.646149 },
		{ -4.90137,1.19189,-0.651993},
		{ 0.214844,-3.70947,-1.00735}};
};
class Land_House_L_6_EP1: Residential
{
	lootPos[] = {
		{ 5.51416,-0.64624,-1.509 },
		{ 1.1626,1.93677,-1.5399 },
		{ 4.20996,1.62158,1.28101 },
		{ 3.15381,-2.12427,1.28099 },
		{ -3.74268,-2.23193,-1.53738 }};
};
class Land_House_K_8_EP1: Residential
{
	lootPos[] = {{2.94263,2.71948,3.34996},{-0.0541992,3.51294,3.34996},{-2.81274,1.99365,0.231133},{-2.59253,3.66528,-1.81557},{-2.55493,-2.54126,-2.63675},{2.97803,-1.89355,-2.64059}};
	lootPosZombie[] = {{-2.60083,-1.24683,-1.66764},{3.30005,-1.26563,1.12351},{-0.615479,2.00049,1.1274},{-1.73755,2.1958,-1.708}};
	lootPosSmall[] = {{-0.681641,0.580322,3.54996},{1.30103,3.72339,3.81996},{1.45947,2.58374,3.34996},{-3.10376,-1.51025,3.34996},{-4.21533,1.6499,0.0964928},{3.22192,3.68018,0.234936},{-3.19409,-1.90552,0.496338},{3.31445,-0.210938,-1.82104},{3.00293,-0.161865,-2.16398},{0.443359,-3.27417,-2.67695},{-3.1377,1.33936,-2.2182}};
};
class Land_House_K_5_EP1: Residential
{
	lootPos[] = {
		{ -2.40381,1.90674,1.51889 },
		{ -5.96777,0.826416,0.710116 },
		{ -3.05811,4.05676,1.52165 },
		{ 1.29199,1.85913,1.54825 },
		{ 4.40381,3.96619,2.26365 },
		{ 4.17725,0.271484,2.4009 },
		{ 1.30908,1.50195,1.55225 }};
};
class Land_House_K_1_EP1: Residential
{
	lootPos[] = {
		{ -0.685547,4.02161,1.56626 },
		{ 3.71387,5.48114,1.56626 },
		{ 3.23438,2.35388,1.56626 },
		{ -3.30566,4.65558,1.54929 },
		{ -3.77539,2.02087,1.60863 }};
};

class Land_House_L_1_EP1: Residential
{
	lootPos[] = {
		{1.63135,-1.2251,-0.619034},
		{-0.165039,-1.74463,-0.6114815},
		{-1.18311,-0.15918,-0.596542}};
};
class Land_House_L_3_EP1: Residential
{
	lootPos[] = {
		{ -5.59863,-0.384766,-0.173644 },
		{ -5.23425,2.49609,-0.22691 },
		{ 0.75769,2.95508,-0.222477 },
		{ -0.387817,0.0234375,-0.222477 },
		{ 2.11365,2.99512,-0.222477 }};
};
class Land_House_L_4_EP1: Residential
{
	lootPos[] = {
		{ -3.34961,-0.487122,-1.33058 },
		{ -6.60547,0.131348,-1.29852 },
		{ -0.385742,-0.0551758,-1.34066 },
		{ -0.209961,3.14941,-1.253 },
		{ 3.47559,0.370972,-1.05766 },
		{ 5.41992,3.25671,-1.01435 }};
};
class Land_House_L_9_EP1:  Residential
{
	lootPos[] = {
		{ 4.4043,0.311035,-0.621445 },
		{ -2.23584,1.68604,-0.542923 },
		{ 4.0918,0.924805,2.60419}};
};
class LAND_ibr_bank: Office
{
	lootPos[] = {
		{ 1.44702,-0.9551,-1.60158 },
		{ -7.40649,-4.9482,-1.60158 },
		{ -7.50879,3.1616,-1.60158 },
		{ -13.1931,3.0244,-1.60158 },
		{ -10.6316,-1.4922,-1.60158 },
		{ -10.3481,-5.6631,-1.60158 },
		{ -14.0247,-6.4653,-1.60158 },
		{ -10.1897,-2.6592,-1.60158 }};
};
class Land_House_L_8_EP1: Residential
{
	lootPos[] = {
		{ 0.662598,5.04395,-1.01205 },
		{ 0.73291,2.59424,-1.01574 },
		{ 4.73828,3.56836,-0.773781 },
		{ 3.76758,3.67578,1.73622 },
		{ -2.51514,-2.19971,-1.55013 },
		{ -2.51514,-2.19971,-1.55013 }};
};
class Land_ibrhotel: Residential
{
	lootPos[] = {
		{ -8.44922,9.08105,-7.74672 },
		{ -0.813965,9.1748,-7.74672 },
		{ 3.17383,11.873,-7.74672 },
		{ 2.74072,2.91016,-7.74672 },
		{ 3.80225,-2.44434,-7.85944 },
		{ -1.28711,-0.235352,-4.25943 },
		{ 17.8379,-8.18896,-4.25943 },
		{ 15.4878,-11.4014,-4.25943 },
		{ 11.8403,-17.5391,-4.25943 },
		{ 4.74902,-11.9019,-4.25943 },
		{ -9.04395,-17.6064,-4.25943 },
		{ -11.9761,-15.2539,-4.25943 },
		{ -15.9063,-12.082,-4.25943 },
		{ -12.2837,-4.31934,-4.25943 },
		{ -16.7495,9,-4.25943 },
		{ -15.7764,11.6875,-4.25944 },
		{ -11.9551,16.458,-4.25944 },
		{ -4.83203,12.1294,-4.25943 },
		{ -5.21436,6.14258,-4.25943 },
		{ 3.57373,5.38721,-4.25943 },
		{ 8.66553,17.2417,-4.25943 },
		{ 12.2725,16.1885,-4.25943 },
		{ 11.8359,4.06348,-4.25943 },
		{ 8.99023,1.72949,-4.25943 },
		{ -1.28711,-0.235352,-0.759062 },
		{ 17.8379,-8.18896,-0.759062 },
		{ 15.4878,-11.4014,-0.759062 },
		{ 11.8403,-17.5391,-0.759062 },
		{ 4.74902,-11.9019,-0.759062 },
		{ -9.04395,-17.6064,-0.759062 },
		{ -11.9761,-15.2539,-0.759062 },
		{ -15.9063,-12.082,-0.759062 },
		{ -12.2837,-4.31934,-0.759062 },
		{ -16.7495,9,-0.759062 },
		{ -15.7764,11.6875,-4.25944 },
		{ -11.9551,16.458,-4.25944 },
		{ -4.83203,12.1294,-0.759062 },
		{ -5.21436,6.14258,-0.759062 },
		{ 3.57373,5.38721,-0.759062 },
		{ 8.66553,17.2417,-0.759062 },
		{ 12.2725,16.1885,-0.759062 },
		{ 11.8359,4.06348,-0.759062 },
		{ 8.99023,1.72949,-0.759062 },
		{ -1.28711,-0.235352,2.74082 },
		{ 17.8379,-8.18896,2.74082 },
		{ 15.4878,-11.4014,2.74082 },
		{ 11.8403,-17.5391,2.74082 },
		{ 4.74902,-11.9019,2.74082 },
		{ -9.04395,-17.6064,2.74082 },
		{ -11.9761,-15.2539,2.74082 },
		{ -15.9063,-12.082,2.74082 },
		{ -12.2837,-4.31934,2.74082 },
		{ -16.7495,9,2.74082 },
		{ -15.7764,11.6875,-4.25944 },
		{ -11.9551,16.458,-4.25944 },
		{ -4.83203,12.1294,2.74082 },
		{ -5.21436,6.14258,2.74082 },
		{ 3.57373,5.38721,2.74082 },
		{ 8.66553,17.2417,2.74082 },
		{ 12.2725,16.1885,2.74082 },
		{ 11.8359,4.06348,2.74082 },
		{ -1.54492,0.158691,6.24485 },
		{ 3.11914,5.81445,6.24485 }};
};
class Land_MBG_Shanty_BIG: Residential
{
	lootPos[] = {
		{ -29.8752,-15.8057,2.99997 },
		{ 23.4097,11.5024,24.9672 },
		{ -29.345,-16.7568,3.04013 },
		{ 23.2319,11.6201,27.9672 },
		{ -33.3779,-11.3564,5.81198 }};
};
class land_mbg_apartments_big_04: Office {
	lootPos[] = {{10.1953,-2.47656,-3.19898},{3.14453,-0.197266,-3.19898},{0.949219,5.58789,5.94502},{-0.888672,2.47461,2.69382},{3.99414,-0.273438,2.89702},{10.7344,-0.351563,2.89702},{-10.4961,-5.46484,2.89702},{-3.25391,0.669922,2.89702},{10.6816,-2.26367,-0.15098},{-3.48828,0.31543,-0.15098},{-2.97461,-2.35547,-0.15098}};
	lootPosZombie[] = {{-0.0898438,4.67773,-7.08873},{0.890625,-5.13965,-6.90238}};
	lootPosSmall[] = {{4.52734,1.46289,-3.19898},{2.90234,5.90918,2.89702},{5.46875,-0.703125,2.89702},{-4.46875,-0.686523,2.89702},{5.17383,-1.80566,-0.15098},{-7.44531,5.68359,-0.15098}};
};
class land_mbg_killhouse_4: Residential {
	lootPos[] = {{7.22266,-4.10205,-3.84318},{-2.04883,0.195313,-3.84318},{-6.33398,2.08691,-3.84318},{3.6582,0.32666,-3.84318},{7.24805,6.55469,-3.84318},{6.74023,2.40967,-0.543176},{-1.83203,2.08301,-0.543176},{6.85742,0.0131836,-0.543176},{-1.89258,-0.352051,-0.543176}};
	lootPosZombie[] = {{0.597656,-6.93311,-3.62662},{-8.15625,1.8877,-3.62662}};
	lootPosSmall[] = {{2.41992,-4.59082,-3.84318},{-1.61133,-4.5249,-3.84318},{2.61719,3.53076,-3.84318},{7.63867,6.79102,-0.543176},{2.54883,6.95605,-0.543176},{-1.70898,6.92188,-0.543176},{2.70313,-1.13672,-0.543176},{-6.58008,-4.49268,-0.543176}};
};

class Land_dum_istan3_hromada2: Residential
{
	lootPos[] = {
		{ 1.67627,3,-4.62603 },
		{ -1.47363,4.92285,-1.28517 },
		{ 6.43848,1.93555,2.08801 }};
	lootPosZombie[] = {{-1.77148,2.59961,-0.410172},{4.46387,1.85254,-3.75103}};
	lootPosSmall[] = {{7.02344,5.71191,2.08801},{0.856445,-1.72266,-1.28517},{-2.51758,1.2002,-1.28517},{5.18945,2.93848,-4.62604}};
};
class Land_budova4_in: Military
{
	lootPos[] = {
		{ -6.50415,2.1416,-1.88723 },
		{ -1.66162,2.10168,-1.88723 },
		{ 2.94312,2.297,-1.88723 },
		{ 5.34082,-1.82922,-1.88723 }};
};
class land_army_hut_int: Military
{
	lootPos[] = {
		{ 2.7959,-5.07373,-1.33056 },
		{ 2.79785,-2.1626,-1.33056 },
		{ -0.943359,-0.060791,-1.35981 },
		{ 0.689453,1.87134,-1.36167 }};
};
class Land_army_hut3_long_int: Military
{
	lootPos[] = {
		{ -2.88721,-4.36035,-1.23617 },
		{ 0.753906,-3.90039,-1.23617 },
		{ -2.53711,-1.95117,-1.23617 },
		{ -2.27856,-0.211914,-1.23617 },
		{ -0.0664063,-1.70801,-1.23617 },
		{ 0.141113,2.31104,-1.23617 }};
};
class land_army_hut2_int: Military
{
	lootPos[] = {
		{ -0.421387,-0.0517578,-0.948329 },
		{ 1.80103,0.945313,-0.948329 },
		{ 2.24585,-2.6875,-0.948329 },
		{ -1.24561,-1.53955,-0.948329 }};
};
class land_ibr_hangar: Industrial
{
	lootPos[] = {
		{ -5.75635,9.95386,-3.57318 },
		{ -8.06152,-11.4065,-3.58192 },
		{ 8.68555,-5.30371,-3.57942 }};
};
class land_ind_pec_03: Industrial
{
	lootPos[] = {{6.07275,11.8623,2.59973},{7.82275,-2.04883,-1.9376},{13.1899,16.0693,-5.15128},{14.0396,8.12549,-5.15128},{13.8237,12.5366,-4.69128},{4.63086,16.6553,-2.04201},{3.07275,-5.11963,-5.15128},{4.79541,-2.07031,-1.9387},{3.67627,14.5518,2.60131},{-2.08447,-13.6855,1.11455},{3.21484,8.37207,-5.15128},{4.78662,18.0498,-5.15128},{-3.98193,-24.5332,-5.15128},{12.9028,-1.58447,3.05404},{-0.259766,22.2715,4.05607},{1.96094,25.4209,4.05607}};
	lootPosZombie[] = {{1.979,15.7012,3.48646},{5.93604,16.2686,3.48582},{6.50586,13.8198,-4.22628},{12.314,9.64258,-4.22628},{6.15381,9.78711,-4.22628},{6.34424,-2.52051,-0.953124},{-5.04004,-4.30566,-4.22628},{-5.77588,-21.0293,-4.22628}};
	lootPosSmall[] = {{2.1709,11.5796,2.75019},{1.17725,11.8911,3.87051},{6.62451,13.2251,4.24952},{3.21777,-11.7026,-1.85671},{8.35938,-3.10693,-1.93559},{14.1851,-5.31348,-1.08754},{13.0874,16.7339,-4.27128},{7.37207,16.6235,-4.99128},{11.6133,16.7075,-5.04128},{12.248,13.2998,-3.56128},{-15.2876,-18.2754,-5.06128},{3.3833,14.4814,3.36135},{10.6797,7.66943,-4.43128},{-4.56982,14.9658,-4.94128},{4.23242,-26.7783,-1.97225},{2.2749,21.8086,4.05607}};
};
class land_ind_pec_03a: Industrial
{
	lootPos[] = {{6.07275,11.8623,2.59973},{7.82275,-2.04883,-1.9376},{13.1899,16.0693,-5.15128},{14.0396,8.12549,-5.15128},{13.8237,12.5366,-4.69128},{4.63086,16.6553,-2.04201},{3.07275,-5.11963,-5.15128},{4.79541,-2.07031,-1.9387},{3.67627,14.5518,2.60131},{-2.08447,-13.6855,1.11455},{3.21484,8.37207,-5.15128},{4.78662,18.0498,-5.15128},{-3.98193,-24.5332,-5.15128},{12.9028,-1.58447,3.05404},{-0.259766,22.2715,4.05607},{1.96094,25.4209,4.05607}};
	lootPosZombie[] = {{1.979,15.7012,3.48646},{5.93604,16.2686,3.48582},{6.50586,13.8198,-4.22628},{12.314,9.64258,-4.22628},{6.15381,9.78711,-4.22628},{6.34424,-2.52051,-0.953124},{-5.04004,-4.30566,-4.22628},{-5.77588,-21.0293,-4.22628}};
	lootPosSmall[] = {{2.1709,11.5796,2.75019},{1.17725,11.8911,3.87051},{6.62451,13.2251,4.24952},{3.21777,-11.7026,-1.85671},{8.35938,-3.10693,-1.93559},{14.1851,-5.31348,-1.08754},{13.0874,16.7339,-4.27128},{7.37207,16.6235,-4.99128},{11.6133,16.7075,-5.04128},{12.248,13.2998,-3.56128},{-15.2876,-18.2754,-5.06128},{3.3833,14.4814,3.36135},{10.6797,7.66943,-4.43128},{-4.56982,14.9658,-4.94128},{4.23242,-26.7783,-1.97225},{2.2749,21.8086,4.05607}};
};
class Land_MBG_Police_Station: Office
{
	lootPos[] = {
		{ 9.81543,-4.36365,-1.59829 },
		{ 1.01172,-6.02344,-1.59829 },
		{ -5.03369,-5.98376,-1.59829 },
		{ -8.5415,-0.348511,-1.59829 },
		{ -8.88574,-2.93823,-1.59829 },
		{ -5.55518,4.80493,-1.59829 },
		{ -1.77246,5.49365,-1.59829 },
		{ 2.32129,6.33032,-1.59829 },
		{ 3.54492,6.27332,1.68834 },
		{ 9.88916,4.68176,1.68833 },
		{ 10.0566,-1.07727,1.68833 },
		{ 6.6499,1.78296,1.68833 },
		{ -5.30029,-2.68726,1.68833 },
		{ 1.25977,-1.76636,1.68833 },
		{ -6.56689,1.51843,1.68834 },
		{ -5.33887,3.92529,1.68834 },
		{ -2.3125,6.18774,1.68834 }};
};
class Land_tovarna1: Industrial
{
	lootPos[] = {
		{ 2.83887,5.23889,-5.75442 },
		{ -2.30774,7.31934,-5.75442 },
		{ -11.0908,5.44897,-5.75442 },
		{ -11.4746,-1.5791,-5.75442 },
		{ -5.52405,1.68994,-5.75442 },
		{ 2.82605,1.4801,-5.75442 },
		{ 2.44128,-6.50256,-5.75442 },
		{ -6.68335,-0.453369,2.17997 },
		{ -3.81812,0.690186,2.17997 },
		{ 2.78735,1.19409,2.17997 },
		{ 1.59167,-6.06665,2.17997 },
		{ -2.4646,-5.63696,2.17997 },
		{ -5.77393,-7.28271,2.17997 },
		{ -0.484985,-3.14197,4.82992 }};
};
class Land_Ind_Garage01_EP1: Industrial
{
	lootPos[] = {{1.65088,2.49048,-1.23114}};
	lootPosZombie[] = {{0.125488,0.557861,-0.357141},{1.11084,-1.33643,-0.36116}};
	lootPosSmall[] = {{2.89014,2.49634,-1.12063},{2.84814,3.43677,-1.12102},{1.39063,3.59766,-0.391855},{1.57227,3.61353,0.368147},{1.7251,3.61353,-1.15185}};
};
class land_hut01: Residential
{
	lootPos[] = {
		{ 0.304749,-0.543213,-0.448339 },
		{ 0.885254,2.90747,-0.44834 }};
};

class land_housev2_05: Residential
{
	lootPosZombie[] = {{-3.78809,-0.407715,-2.06879},{5.36499,7.90381,-2.08879}};
};
class land_hut02: Residential
{
	lootPos[] = {
		{ -0.498901,2.974,-0.445764 },
		{ -1.07245,-0.756958,-0.445764 }};
};
class land_hut04: Residential
{
	lootPos[] = {
		{ -1.07227,-0.354492,-0.437198 },
		{ 0.939697,2.78271,-0.437198 }};
};
class Land_Ind_Oil_Tower_EP1: Industrial
{
	lootPos[] = {
		{ 3.55743,-5.92773,-12.9755 },
		{ 4.63086,1.24902,-12.9932 },
		{ -0.240356,-1.08252,-12.9875 },
		{ 6.87689,-6.34961,-8.00889 },
		{ 2.31177,0.231689,-8.00478 }};
};
class Land_ibr_terminal: Office
{
	lootPos[] = {
		{ 11.1885,-13.0669,-4.04974 },
		{ 4.42383,-9.64746,-4.04974 },
		{ -2.42822,-6.94775,-4.04974 },
		{ -3.00537,-1.25439,-4.04974 },
		{ 0.473145,8.72314,-4.04974 },
		{ 14.8608,12.5249,-4.04974 },
		{ 3.33838,-14.5229,0.581566 },
		{ -3.88428,-17.5376,0.581566 },
		{ -17.3682,0.572266,-4.05001 },
		{ -13.7939,0.576172,-0.231342 },
		{ -2.83545,10.9009,-0.949741 },
		{ -2.27686,-16.4238,3.68157 }};
};

class Land_A_Office01_EP1: Land_A_Office01
{
	lootPos[] = {
		{ -2.50391,-2.46948,-4.728 },
		{ 4.23535,-0.336914,-4.728 },
		{ 4.11133,6.1123,-4.728 },
		{ 0.242188,6.06299,-4.728 },
		{ 4.31641,3.74023,-4.728 },
		{ 5.08887,0.219727,-4.728 },
		{ 11.6504,-1.5647,-4.728 },
		{ 14.5811,-4.1123,-4.728 },
		{ 13.8545,-0.749023,-4.728 },
		{ -7.7627,5.59082,-4.728 },
		{ 1.81152,0.993408,-2.228 },
		{ 4.93164,4.31982,-2.228 },
		{ 1.18945,6.07031,-2.228 },
		{ 2.23145,3.76563,-2.228 },
		{ -4.76367,-2.51221,-2.228 },
		{ -14.5596,-3.40723,-2.228 },
		{ -15.2705,5.92773,-2.228 },
		{ -10.9063,6.04175,0.672008 },
		{ -6.30762,3.30078,0.672006 },
		{ 7.6416,6.38696,0.672001 },
		{ 13.6729,6.5957,0.671999 },
		{ 13.1924,-2.58691,0.671998 },
		{ 3.0918,2.4375,6.20491 },
		{ -1.45703,-2.28369,6.20491 },
		{ -2.12988,4.51587,0.672005 },
		{ 4.74414,-4.60156,-2.21486 },
		{ 8.3457,-1.10718,-2.228 },
		{ 9.94727,-3.74146,-2.228 },
		{ 7.13867,-2.50732,-2.228 },
		{ 12.8701,4.70923,-2.228 },
		{ 15.3721,3.42383,-2.228 }};
};
class Land_A_Stationhouse_ep1: Land_a_stationhouse{};
class Land_ibrPanelak: Land_Panelak{};
class Land_ibrPanelak2: Land_Panelak2{};

class Land_Ind_Expedice_1: Industrial
{
	lootPos[] = {{5.56104,-18.4136,-5.75725},{-10.0732,-18.7891,-3.48673},{-6.21045,-7.65479,-3.48673},{0.0634766,-0.0908203,-5.68389},{-2.59351,18.4795,-5.68389},{-1.85474,13.1089,-3.48673}};
	lootPosZombie[] = {{-7.98584,-18.7822,-2.61173},{2.97021,17.729,-4.8089}};
	lootPosSmall[] = {{6.71289,-18.1563,-5.75725},{-9.12036,-17.6846,-3.48673},{-7.7959,-8.31201,-3.48673},{-1.51221,0.0673828,-5.68389},{-2.6748,11.6543,-5.6839},{-2.34814,11.9219,-3.48673}};
};

// Isla Dula
class land_dum_istan2b: Residential
{
	lootPos[] = {
		{-6.44531,-5.13037,3.80019},
		{-6.71777,2.81592,3.80019},
		{ 3.33887,-0.539307,0.822979},
		{-0.506836,-2.2229,0.822979},
		{-3.93457,2.11401,-2.29981}};
};

class Land_dum_olez_istan2: HouseRoaming{};
class Land_dum_olez_istan2_maly2: HouseRoaming{
	lootPosZombie[] = {{-2.71582,-4.86133,-1.62356},{-2.76074,4.94531,-1.62356}};
};
class land_smd_dum02: HouseRoaming{
	lootPosZombie[] = {{4.37305,1.68701,-2.7265},{-4.50977,1.54443,-3.41202}};
};
class land_dum_mesto: HouseRoaming{
	lootPosZombie[] = {{-5.11328,-6.34717,-3.93972}};
};
class land_deutshe: HouseRoaming{
	lootPosZombie[] = {{1.72949,4.62207,-3.0957},{1.69336,-4.75,-3.78851}};
};
class land_stanice: HouseRoaming{
	lootPosZombie[] = {{-1.18945,4.63867,-1.83241}};
};

class land_dum_mesto3_istan: HouseRoaming{};
class land_dum_istan2_03a: HouseRoaming{};

class land_nasypka: Residential
{
	lootPos[] = {{-1.46045,-0.168945,6.56824}};
	lootPosZombie[] = {{1.50659,-0.027832,-5.55527}};
	lootPosSmall[] = {{-1.58691,0.717285,6.56824}};
};

class Land_dum_istan3_pumpa: Residential
{
	lootPos[] = {
		{-2.14502,3.03662,-1.86787},
		{4.09619,-0.563965,1.47485},
		{0.189453,0.540039,1.47485},
		{-1.73682,2.44775,1.47485}};
};
class land_dum_istan3: Residential
{
	lootPos[] = {
		{-8.4917,-0.922363,0.585144},
		{5.97852,1.38037,0.585148},
		{3.55176,-5.42822,0.58514},
		{-2.33105,3.74805,-2.67237}};
};
class land_house_y: Residential
{
	lootPos[] = {
		{-0.570313,-5.21387,-1.40696},
		{-5.15625,-5.32275,-1.40696},
		{2.34766,4.9917,-1.40696}};
};
class land_dum_istan4_inverse: Residential
{
	lootPos[] = {
		{-2.77246,-1.72949,-4.33588},
		{5.30176,5.76563,-7.28588},
		{-0.282227,5.89746,-7.28588},
		{-6.5918,5.96973,-7.28588}};
};
class Land_duala_mini: Residential
{
	lootPos[] = {
		{-1.37207,2.25488,-2.74846},
		{-3.43457,-2.04932,-2.74846},
		{3.82959,0.034668,-2.74846},
		{3.79102,-2.25977,-2.74846}};
};
class Land_hut_old02: Industrial
{
	lootPos[] = {
		{-5.60449,-1.20215,-3.03296},
		{-3.80371,-2.33154,-3.03296},
		{2.10156,-8.16406,-3.03296},
		{3.87402,8.28125,-3.03296}};
};
class land_dum_istan2_02: Industrial
{
	lootPos[] = {
		{-0.566406,-3.44775,-4.14959},
		{-2.00146,1.43604,-4.14959}};
};
class LAND_garaz_bez_tanku: Industrial
{
	lootPos[] = {{-2.98047,0.0463867,3.41651}};
	lootPosZombie[] = {{-5.14404,-2.02295,-1.71924},{4.92676,-2.67383,-1.71924}};
	lootPosSmall[] = {{-1.36499,-0.579102,3.42651}};
};
class land_mbg_brickhouse_01: Residential
{
	lootPos[] = {
		{-7.06543,4.02197,-0.051506},
		{5.55518,-0.523438,-0.051506},
		{-0.717773,4.01855,-0.051506},
		{-2.00293,-2.35107,-3.35652},
		{4.99219,-0.20752,-3.35652},
		{-6.80469,3.94043,-3.35652}};
};
class land_bouda_garaz: Industrial
{
	lootPos[] = {
		{26.1628,-12.502,-0.952108},
		{23.3086,-6.62305,-0.952108}};
};


// Taviana 1.0 building loots
class Land_majak_podesta: Residential
{
	lootPos[] = {
		{-1.22461,-2.17969,2.28329},
		{1.14844,-2.9707,2.28329}};
};
// blue trailer - Also affects chernarus
class Land_Shed_M02: Industrial
{
	lootPosZombie[] = {{-0.00195313,3.29932,-0.6586}};
	lootPosSmall[] = {{1.00586,0.0698242,-1.01666},{-0.931641,0.0825195,-1.01755}};
};
class Land_sara_Domek_sedy: Residential
{
	lootPos[] = {
		{-1.76367,-1.11328,-2.14196},
		{-5.0127,3.01953,-2.14196},
		{5.41211,2.625,-2.14196},
		{4.86035,-0.738281,-2.14196}};
};
class Land_dum_rasovna: Residential
{
	lootPos[] = {{-1.271,3.38281,-2.69958},{3.14893,3.86255,-2.69958},{3.30957,-4.17871,-2.69958},{-0.936523,-1.97412,0.242605},{1.05518,3.77271,0.242605}};
	lootPosZombie[] = {{-1.08252,-1.93018,-1.79458},{-1.68555,2.19971,-1.79458}};
	lootPosSmall[] = {{-0.964844,-3.52148,0.952604},{0.613281,-0.726807,-2.69958},{3.69873,-1.69995,-2.69958}};
};
class land_sara_domek_kovarna: Residential
{
	lootPosZombie[] = {{0.0998535,-0.891602,-0.880356}};
};
class land_sara_domek_hospoda: Residential
{
	lootPos[] = {{-2.14844,-3.56396,-2.74878}};
	lootPosZombie[] = {{1.48291,-3.28223,-1.85291}};
	lootPosSmall[] = {{-1.16064,-4.72485,-2.75951}};
};

class Land_leseni2x: Industrial
{
	lootPos[] = {
		{1.15625,-0.206055,2.55466}};
};
// Train Station
class LAND_vokzal_big: Residential
{
	lootPos[] = {
		{7.28613,-0.216797,-7.96283},
		{6.84961,2.56152,-7.96283},
		{6.9834,-4.98047,-7.96283},
		{-7.07227,1.28223,-7.96283}};
};

// Large Supermarket
class LAND_shopping_sab5: Supermarket
{
	lootPos[] = {
		{-21.1367,-1.94238,-2.18279},
		{-22.1387,5.40918,-2.18285},
		{-5.17383,-1.17773,-2.1828},
		{2,-12.3975,-2.18271},
		{-4.03906,-11.5391,-2.18272},
		{-9.62109,-11.6016,-2.18272},
		{-15.1699,-11.5225,-2.18272},
		{-18.5156,-12.9307,-2.18271},
		{-20.3633,-10.1182,-2.18273},
		{-17.1367,-6.3623,-2.18276},
		{-12.0098,-3.98535,-2.18277},
		{-14.1758,4.46973,-2.18284},
		{-15.7285,-1.02539,-2.1828},
		{3.40625,4.30664,-2.18284},
		{6.83789,-3.75391,-1.36222},
		{-1.27344,10.9521,-1.36222},
		{-22.4199,9.1084,-1.36222},
		{1.22461,8.13672,-2.18285},
		{-3.18164,8.71484,-2.18285},
		{-7.77344,7.51563,-2.18285}};
};
class LAND_Zachytka : Residential
{
	lootPos[] = {
		{3.79492,-4.12891,-2.02697},
		{-4.92285,-6.8584,-2.02697},
		{-3.6543,-6.7002,-2.02697},
		{-2.60449,-6.87891,-2.02697},
		{-1.82422,0.0361328,-2.02697},
		{-6.2832,-4.51074,-2.02697},
		{-3.60547,5.1875,-2.02697},
		{4.42188,11.2158,-2.02697}};
};
class LAND_hospoda  : Residential
{
	lootPos[] = {
		{3.46094,-1.42871,-1.80302},
		{2.40137,-1.22656,-1.80307},
		{7.81836,-1.63281,-1.80282},
		{2.04004,-6.71777,-1.80289},
		{-5.56641,0.793945,-1.80295},
		{-4.18164,8.64063,-1.80286},
		{1.16602,5.0791,-1.80348},
		{1.21582,3.73242,-1.8034},
		{0.248047,5.55176,-1.80324},
		{-1.84766,3.92969,-1.80313},
		{-1.85254,0.222656,-1.80321}};
};
class LAND_Kiosk2 : Residential
{
	lootPos[] = {
		{-20.7441,45.2878,3.05876},
		{-3.80933,-33.6328,3.02246},
		{-3.57007,-22.666,3.02246},
		{4.76587,-24.3711,-0.618923},
		{-1.10449,43.1938,-0.58263},
		{8.77441,23.7346,-0.845428},
		{-9.86914,41.6533,3.05876},
		{7.84668,20.991,4.76736},
		{6.91211,27.9067,10.1178}};
};
class Land_deutshe_mini : Residential
{
	lootPos[] = {
		{-4.34277,-2.54297,-2.74846},
		{-0.624023,-0.357422,-2.74846},
		{0.853516,1.04395,-2.74846},
		{-2.75781,2.44336,-2.74846}};
};
class LAND_shopping_sab1 : Supermarket
{
	lootPos[] = {
		{-30.0442,28.7891,-6.25663},
		{-18.561,23.7578,-6.25663},
		{1.32031,24.5879,-6.25663},
		{-7.86792,15.1182,-6.25663},
		{-22.3628,16.8828,-6.25663},
		{-26.7896,-24.9424,-6.25663},
		{-22.4546,-17.333,-6.25663},
		{-30.6628,-11.0195,-6.25663},
		{-2.51978,-23.1719,-6.25663},
		{0.889893,-14.1914,-6.25663},
		{23.3015,-15.1357,-6.25663},
		{42.353,-13.5322,-6.25663},
		{37.3396,-22.9014,-6.34278},
		{14.5388,-26.2158,-6.25663},
		{9.93091,-18.2871,-6.25663},
		{7.23315,24.9834,-6.25663},
		{8.8877,16.46,-6.25663},
		{16.9697,11.9541,-6.25663},
		{27.3679,21.3857,-6.25663},
		{-28.7632,27.7227,-2.38664},
		{33.5342,16.8047,-6.25663},
		{-31.0317,12.626,-2.38664},
		{-22.1975,16.3066,-2.38664},
		{-17.7339,21.0166,-2.38664},
		{-8.78564,27.5811,-2.38664},
		{-7.71826,15.2012,-2.38664},
		{1.65771,16.3496,-2.38664},
		{-36.4099,8.60352,-2.38664},
		{-43.6084,8.64258,-2.38664},
		{-41.8218,-2.6748,-2.38664},
		{-35.7854,-5.95313,-2.38664},
		{-16.2727,-13.2295,-2.38664},
		{-23.0032,-13.2764,-2.38664},
		{-25.6714,-25.6045,-2.38664},
		{-10.1611,-26.001,-2.38664},
		{2.98145,-26.7119,-2.38664},
		{2.59131,-13.5352,-2.38664},
		{10.7913,-16.2617,-2.38664},
		{17.1582,-27.3232,-2.38664},
		{26.3887,-25.0986,-2.38664},
		{30.8889,-22.1074,-2.38664},
		{42.4817,-21.6602,-2.47279},
		{41.8726,-13.7373,-2.38664},
		{32.7183,-12.5967,-2.38664},
		{34.2241,-5.04199,-2.38664},
		{40.2024,-7.14941,-2.38664},
		{39.8079,-0.0917969,-2.38664},
		{43.5059,6.59766,-2.38664},
		{33.3914,3.02148,-2.38664},
		{29.0322,11.1025,-2.38664},
		{33.1868,17.4531,-2.38664},
		{22.3228,26.3857,-2.38664},
		{7.32861,23.8564,-2.38664}};
};
class LAND_skola : Residential
{
	lootPos[] = {
		{15.8508,20.459,-2.00361},
		{29.0132,22.3887,-2.00361},
		{30.6335,16.1104,-2.00361},
		{30.7412,5.33691,-2.00361},
		{18.7554,5.07324,-2.00361},
		{2.84912,14.2744,-2.00361},
		{-1.27197,12.2324,-2.00361},
		{-5.66699,16.6445,-2.00361},
		{-2.93408,22.0967,-2.00361},
		{5.48535,21.7969,-2.00361},
		{-9.52954,-8.64063,-2.00361},
		{-18.5305,-9.60449,-2.00361},
		{-23.9783,-0.905273,-2.00361},
		{-8.50586,13.9482,-2.00361},
		{5.84448,0.175781,-2.00361},
		{2.56885,-14.167,-2.00361},
		{-3.15063,-14.084,-2.00361},
		{-3.76294,-21.2754,-2.00361},
		{5.4397,-24.5635,-2.00361},
		{18.5049,-11.9141,-2.00361},
		{10.7795,-18.4443,-2.00361},
		{18.3979,-21.9854,1.22083},
		{20.1707,-14.1572,1.22083},
		{30.334,5.12402,1.22083},
		{22.9521,12.1387,1.22083},
		{1.45825,18.208,1.22083},
		{-5.56128,20.1572,1.22083},
		{-6.19165,15.4678,1.22083},
		{-1.05029,9.69141,1.22083},
		{6.17896,5.19434,1.22083},
		{5.00513,2.78711,1.22083},
		{5.81836,-5.65625,1.22083},
		{-0.54541,-15.1104,1.22083},
		{1.8418,-19.8584,1.22083},
		{-2.10864,-21.9961,1.22083},
		{-5.78857,-24.9277,1.22083},
		{16.3679,-15.4463,1.22083},
		{28.0537,-17.1328,1.22083},
		{22.1833,11.416,-2.00361}};
};
class LAND_konecna : Office
{
	lootPos[] = {{14.8423,-0.987793,-1.59364},
		{16.873,-2.86865,-1.59364},
		{13.3672,-9.11377,-1.59364},
		{5.09497,-9.98682,-1.59364},
		{-24.8281,-1.17871,-1.59364},
		{-14.0747,-7.3042,-1.59364},
		{-19.0789,0.98291,-1.59364},
		{4.67944,0.805176,-1.59364},
		{-11.4639,-10.1475,-1.59364}};
};
class LAND_Tav_Panelak2 : Residential
{
	lootPos[] = {{2.7627,-5.62524,5.43665},
		{2.63867,-0.156494,5.43665},
		{3.4873,2.76855,5.43665},
		{6.06152,3.64966,5.43665},
		{6.70996,0.734619,5.43665},
		{4.71875,-1.69263,5.43665},
		{-0.347656,-2.23315,5.43665},
		{0.814453,-1.73901,2.71097},
		{-0.545898,-2.29468,2.71097},
		{-0.415039,4.25122,1.32864},
		{0.75,-2.01318,0.0714264},
		{0.644531,-1.86401,-2.62859}};
};
class LAND_Tav_panelak : Residential
{
	lootPos[] = {{5.24121,-6.39453,2.77144},
		{6.71191,-5.43262,2.77144},
		{4.65625,-1.83838,2.77144},
		{6.69531,0.225586,2.77144},
		{6.54395,3.06519,2.77144},
		{3.40234,3.32324,2.77144},
		{2.61523,0.798096,2.77144},
		{2.7041,-4.98389,2.77144},
		{3.66016,-6.17651,2.77144},
		{-0.982422,-1.86328,2.77144},
		{-0.904297,4.13086,1.32864},
		{0.942383,-2.10474,0.0714226},
		{-2.56836,-1.68628,0.0714226},
		{-2.69531,3.42407,0.0714226},
		{-6.24902,3.01392,0.0714226},
		{-6.07227,0.556396,0.0714226},
		{-5.75488,-2.03857,0.0714226},
		{-6.66406,-4.34497,0.0714226},
		{-5.49219,-6.70581,0.0714226},
		{-2.41602,-4.19434,0.0714226},
		{-3.70801,-6.17212,0.0714226}};
};
class LAND_Tav_Panelak3 : Residential
{
	lootPos[] = {{0.0878906,0.793457,-10.8154},
		{-0.810547,3.44824,-10.8154}};
};
class LAND_Big_Panelak : Residential
{
	lootPos[] = {{3.30566,-9.23413,-14.7521},
		{3.10059,-7.05005,-14.7521},
		{5.36914,0.495361,-14.7521},
		{-0.236328,-3.16772,-14.7521},
		{3.05078,-0.838379,-14.7521}};
};

class LAND_Posta : Residential
{
	lootPos[] = {{-17.4678,-9.28809,1.00044},
		{-16.5732,-1.32227,1.00044},
		{-3.60254,-5.11377,1.00044},
		{9.72168,-6.61035,1.00044},
		{17.333,-8.2085,1.00044},
		{13.3633,7.1958,1.00044},
		{1.56445,8.49707,1.00044}};
};

// Proving grounds PMC
class Land_GeneralStore_01a_PMC : Supermarket
{
	lootPos[] = {{-8.28796,-0.435303,-1.20155},
		{-4.33252,5.51575,-1.20155},
		{1.05743,5.22791,-1.20155},
		{7.36511,2.40076,-1.20155},
		{13.2913,4.79199,-1.20155},
		{3.06958,7.47021,-1.20155},
		{7.43213,-0.266724,-1.20155},
		{13.5172,-1.04089,-1.20155},
		{10.0657,-1.31946,-1.20155},
		{3.42236,-3.46387,-1.20155},
		{-1.89722,-2.65051,-1.20155},
		{-7.28711,-1.95728,-1.20155}};
};
class Land_ruin_01_PMC : Residential
{
	lootPos[] = {{-2.57568,2.16443,-1.76358},
		{-2.64172,-2.50488,-1.76358},
		{0.851563,1.67505,-1.76358}};
};
class Land_Ruin_Cowshed_a_PMC : Residential
{
	lootPos[] = {{-3.573,2.80774,-2.31227},
		{8.85077,-2.67871,-2.46388},
		{-2.83069,-5.90613,-2.46388},
		{8.89893,-5.66711,-2.46388}};
};
class Land_Ruin_Cowshed_b_PMC : Residential
{
	lootPos[] = {{10.4032,2.35046,-3.14048},
		{2.99207,-3.36682,-3.13994}};
};
class Land_Ruin_Cowshed_c_PMC : Residential
{
	lootPos[] = {{5.05737,2.52881,-3.09486}};
};
class Land_FuelStation_Build_PMC : Industrial
{
	lootPos[] = {{-1.29761,-0.527832,-1.336},
		{-1.51141,1.30359,-1.33611},
		{2.23376,0.0710449,-1.33611}};
};
// Namalsk
class land_seb_vod_vez: Industrial {
	lootPos[] = {{2.02881,0.0849609,15.155}};
};
class land_seb_near_fac: Industrial {
	lootPos[] = {{-10.4116,-18.0859,1.75552}};
};
class land_seb_rozvodna: Industrial {
	lootPos[] = {{-1.2168,2.9668,0.583904}};
};
class land_seb_mine_maringotka: Residential {
	lootPos[] = {{0.423828,0.721191,-0.612675},{-0.976563,-1.32764,-0.612675}};
};
class Land_hut_old01: Residential {
	lootPos[] = {{2.2793,-7.06348,-3.06107},{-3.3584,-1.7334,-3.01178},{-5.0332,-0.929688,-3.0112}};
};
class land_st_vez: MilitarySpecial {
	lootPos[] = {{-5.56445,4.23975,-3.31476},{-5.05566,-3.17627,-3.31476},{4.12109,3.92822,2.42732},{-1.73389,2.68896,6.40834},{-4.23584,1.29736,6.40834},{-3.80322,-1.09277,6.40834},{0.430664,1.31787,6.40834},{-2.45166,-2.16748,6.40834},{-0.608398,-0.57666,-11.095},{-2.08691,1.10303,-11.0649},{0.259277,-3.89697,-3.31476},{3.9375,3.30957,-8.50825}};
};

class Land_dulni_bs: Residential {
	lootPos[] = {{2.76758,2.70068,-1.75205},{2.34668,-1.28564,-1.75205},{-0.478516,-2.64844,-1.75205},{-0.53418,3.11133,-1.75205}};
};
class land_bunka: Office {
	lootPos[] = {{1.83496,0.451172,-1.51244},{-2.04492,2.11377,-1.51245},{3.07324,2.41675,-1.51245}};
};
class land_pozorovatelna: Military {
	lootPos[] = {{-2.36328,-2.79248,-2.49767},{3.11426,-2.92969,-2.49767},{0.740234,2.47852,-2.49767},{-1.67578,-2.50049,7.54509},{-1.23047,1.90283,7.54509},{2.88477,2.08496,7.54509},{2.61426,-2.48096,7.54509},{0.491211,-0.290527,7.54509}};
};
class land_panelova3: Residential {
	lootPos[] = {{-0.0615234,2.92871,0.0510063},{6.44482,-0.967773,0.0510063},{6.26807,-3.85547,0.0510063},{-0.0327148,-5.30273,0.0510063}};
};
class land_vysoky2: Residential {
	lootPos[] = {{6.74121,-2.95508,-15.7673},{6.63232,4.17676,-15.7673},{0.72998,-2.63574,-15.7051},{1.1958,0.116211,-15.6513},{2.84131,2.35742,13.1248},{-0.51123,2.16699,13.1248},{4.37012,0.773438,13.1248},{9.61328,13.2432,13.1248},{6.39307,-12.292,13.1248}};
};
class land_vysoky1: Residential {
	lootPos[] = {{-6.74414,5.46875,13.2833},{0.54541,4.38379,13.2833},{10.9004,1.47949,13.2833},{6.0415,-13.4297,13.2833},{1.12744,-2.39258,13.2833}};
};
class land_hotel_p2: Residential {
	lootPos[] = {{-3.26953,3.02783,-7.29951},{4.04395,-1.92188,-7.29951},{9.48145,0.459473,-7.32974},{1.53711,0.0078125,6.06893},{4.5332,0.862305,6.06893},{4.73438,-3.63232,6.06893}};
};
class land_hotel_p1: Residential {
	lootPos[] = {{-12.1006,-3.29248,-4.92428},{-3.09375,-1.66357,-4.92429},{-1.78125,3.53271,-4.92429},{-5.97852,3.80273,-4.92428},{13.8809,1.77246,-1.39091},{13.751,-9.81104,-1.39091},{12.1787,0.0078125,-3.22923}};
};
class land_trubice: Industrial {
	lootPos[] = {{-2.36719,2.7627,2.59438},{5.82715,3.01563,2.59438},{1.57617,0.709961,2.59438}};
};
class land_dlouhy1: Residential {
	lootPos[] = {{-6.40918,-0.21875,-9.60495},{-12.395,2.47559,-9.60091},{1.38428,3.15332,-9.61021},{1.91748,8.89746,-9.61057},{-6.90918,8.53027,-9.60461},{-12.3315,8.00195,-9.60096},{-17.9946,9.73926,-9.59713},{-9.91797,5.16699,-9.60259},{6.95801,9.37988,-9.61397},{4.39404,7.64941,-9.61224},{5.43994,9.80469,-5.09157},{0.418457,-0.611328,-5.09031},{-5.27051,7.41895,-5.08631},{2.20361,8.79004,-5.09157},{-8.93848,6.08301,-5.08698},{-9.49854,11.3086,-5.08437},{9.38232,1.54199,-5.09157},{8.95361,9.74707,-5.09157},{11.436,11.4756,-5.08435}};
};
class land_dlouhy2: Residential {
	lootPos[] = {{1.73047,5.30957,-9.32314},{-1.38867,-0.568848,-9.31474},{-1.47461,-5.5957,-9.3145}};
};
class land_jzd_kr2: Farm {
	lootPos[] = {{1.92139,-4.90527,-6.17321},{0.709961,5.00488,-6.17321},{1.8623,7.37109,1.40623},{3.00684,-3.30566,1.41873},{-3.0625,-3.38477,-2.05339},{-2.62646,10.8418,-2.05339}};
};
class land_jzd_kr1: Farm {
	lootPos[] = {{-1.04834,-3.67578,-6.27279},{1.63818,0.775391,-6.27279},{-1.41992,5.10449,-6.27279},{-0.993164,2.94629,-2.15298},{0.717285,-3.79688,-2.15298}};
};
class land_jzd_stodola2: Farm {
	lootPos[] = {{8.15527,11.8477,-2.0262},{5.5127,5.6377,-2.0262},{-4.16113,3.67383,-2.0262},{7.53223,-14.4741,-2.0262},{1.16992,0.390625,1.31123}};
};
class land_jzd_stodola1: Farm {
	lootPos[] = {{-3.81592,-11.418,-2.0262},{1.73877,-6.20605,-2.0262},{-4.13477,-0.265625,-2.0262},{-1.04883,0.180664,-2.0262}};
};
class land_jzd_silo_tes: Industrial {
	lootPos[] = {{2.74902,6.52246,0.214748},{11.5796,5.20703,0.214748},{5.72949,0.644531,0.21475},{10.6719,-6.1416,0.214748},{0.97998,-2.64844,0.214373},{3.22168,-7.55664,0.214746},{-2.62695,-0.580078,10.224}};
};
class land_rozvodna: Residential {
	lootPos[] = {{-6.8208,-1.58789,-0.369419}};
};
class land_jzd_4silka: Industrial {
	lootPos[] = {{0.551758,-5.24219,1.64133},{0.224609,1.37646,1.64133},{3.04492,0.456055,1.64133},{4.31641,5.94189,5.51407},{-3.53125,-5.80127,5.51407}};
};
class land_jzd_bezstrechy: Residential {
	lootPos[] = {{-10.4614,-2.97461,-5.22504},{0.170898,0.177734,-5.22504},{-0.368652,-3.34668,-5.22504},{0.905762,2.52344,-5.22504},{0.802246,2.12305,-0.40476},{1.05615,1.88574,-3.01179},{8.00244,0.787109,-5.22504}};
};
class land_AII_last_floor: MilitarySpecial {
	lootPos[] = {{-1.73975,-7.99756,11.6976},{-1.73975,-7.99756,11.6976},{-1.20801,5.45605,4.6129},{-3.82813,2.81494,5.46183}};
};
class land_AII_middle_floor: MilitarySpecial {
	lootPos[] = {{-7.64941,4.97412,0.510368},{-7.7207,5.10498,0.510216},{-7.27979,-0.931152,0.518509},{8.47461,-2.3252,-4.63377},{9.20508,0.508301,-4.63377},{4.36768,3.7998,-4.63377},{-0.669434,2.74805,-4.63377},{-10.3594,5.03516,-4.63377},{-13.9766,9.10059,-4.63377},{-8.021,1.22314,-4.63377},{6.07227,-2.64551,-4.63377},{-8.75293,8.79297,-2.10379}};
};
class land_x_skladiste_low_tex: Industrial {
	lootPos[] = {{-8.12354,-0.32373,-2.85032},{-2.31592,-4.27539,-2.5975},{8.15527,-6.89307,-2.5975},{0.398926,4.80029,-2.82628},{-6.0249,-7.64355,-2.85032}};
};
class Land_budova4_winter: MilitarySpecial {
	lootPos[] = {{-7.73389,0.300049,-1.09824},{-7.7666,1.97388,-1.09824},{-5.85645,1.92651,-1.09824},{-4.82373,0.194336,-1.09824},{-4.82715,-2.00244,-1.09824},{-8.09766,-2.28149,-1.09824},{-3.06787,2.24805,-1.09824},{-1.65283,-1.91821,-1.09824},{-1.41309,-0.034668,-1.09824},{0.266602,1.76807,-1.09824},{1.28369,0.289307,-1.09824},{1.81982,-2.28687,-1.09824},{4.37549,2.14941,-1.09824},{5.61865,1.71338,-1.09824},{5.06787,-1.74316,-1.09824},{2.54785,2.33716,-1.09824}};
};
class land_domek_podhradi_1: Residential {
	lootPos[] = {{5.20862,3.45215,-2.7391},{3.04761,1.61621,-2.73912},{2.7594,-1.33691,-2.73915},{-3.32617,4.14404,-2.73909}};
};
class land_b_small1: Industrial {
	lootPos[] = {{-3.14185,1.36816,-1.50033},{-0.0275879,-1.74707,-1.50033},{-3.59619,-3.18945,-1.50033},{-0.729004,-4.95996,-1.50033}};
};
class land_cast1: Industrial {
	lootPos[] = {{-5.39551,6.56055,-4.38392},{-5.68555,9.04297,-4.38393},{-5.57251,9.08203,-4.38393},{-3.05396,14.5527,-4.38392},{2.97681,13.9014,-4.38392},{-0.227783,11.8418,-4.38393},{1.44995,3.27246,-3.50372},{2.53198,-5.45508,-3.5118},{-4.85596,-2.20898,-3.4266},{1.04224,0.729492,-1.06585}};
};
class land_vstup: Military {
	lootPos[] = {{-11.51,-2.64844,-1.53312},{-6.24463,-2.85059,-1.53312},{-1.16992,-2.84961,-1.53312},{2.70898,-2.85059,-1.53312}};
};
class land_panelova: Industrial {
	lootPos[] = {{16,-14.6357,-4.04666},{3.79102,1.25659,-4.08966},{-15.4639,-8.38086,-4.08966},{-14.3535,-0.195313,-4.08966},{-1.61719,-12.8313,-4.08966},{15.4287,-4.25635,3.37273},{9.19336,-14.6272,3.37141},{5.80957,9.09253,3.37141},{9.95508,9.7937,3.37141},{-8.11523,-2.98291,3.34401},{-15.2598,-8.56641,3.34401}};
};
class land_garaze: Industrial {
	lootPos[] = {{-0.00292969,-7.72925,-2.12658},{3.7334,1.02759,-2.12658},{3.2793,6.28857,-2.12658},{6.72949,7.34131,-2.12658},{1.68848,-3.91479,-2.12658}};
};
class land_seb_bouda3: Industrial {
	lootPos[] = {{2.63574,-3.0332,-1.72872},{-2.71875,-5.08691,-1.72873},{-3.00293,-1.50781,-1.72877},{-2.91357,3.86328,-1.72876},{3.12891,3.01563,-1.72879}};
};
class Land_bouda2_vnitrek: Residential {
	lootPos[] = {{2.33496,0.372559,-0.610508},{-0.845703,2.32129,-0.610506},{-3.27344,-2.27295,-0.610508}};
};
class land_f_b2: Industrial {
	lootPos[] = {{1.58398,0.899414,-4.24147},{-1.33301,-0.991211,-4.24147},{1.91113,-1.68262,-4.24147}};
};
class land_bud2: Industrial {
	lootPos[] = {{-2.32031,-1.25,-1.76814},{-1.58008,-2.3125,-1.77484}};
};
class land_senik: Residential {
	lootPos[] = {{-4.56445,-2.97705,-4.13721},{13.1641,-6.80127,-4.28022},{-4.23242,-0.213379,-4.1315},{-3.44043,4.7998,-4.12115},{-7.64453,3.81445,-4.12319},{-14.0889,-5.66602,-4.14276},{-1.25977,-3.44336,-4.13817}};
};
class land_zd_1: Residential {
	lootPos[] = {{2.14258,3.37402,-3.67255},{-1.60645,-3.25098,-3.67255},{0.649902,-2.38086,-3.67255},{-1.16113,1.41406,-3.67255},{2.88721,-2.80078,-3.67255},{-4.45117,-3.0127,-4.04225},{-5.94385,3.13867,-4.04225}};
};
class Land_dum_ras: Residential {
	lootPos[] = {{-1.53223,3.34424,-2.66958},{1.36621,-0.507813,-2.66958},{0.860352,3.72705,0.272604},{-0.767578,-1.96289,0.272604},{-0.27832,-3.96045,0.272604}};
};
class land_kostelik_final_2122: Church {
	lootPos[] = {{5.41992,-3.45703,-5.57918},{-0.963379,4.74414,-5.57919},{1.09082,-2.79297,-5.57919},{-1.39063,-5.18555,-5.57918}};
};
class land_plynom: Residential {
	lootPos[] = {{1.07568,-0.65625,2.21929},{-0.184082,-1.46973,2.21929},{-1.24854,-0.0126953,2.21929},{1.1377,-0.887695,-2.60304},{-1.3877,0.386719,-2.60304},{-0.822754,-1.33398,-2.60304}};
};
class land_seb_mine_main_opt: Industrial {
	lootPos[] = {{0.590332,4.68115,-0.991421},{-1.86768,4.13525,-0.992432},{0.14209,2.53271,-0.995407},{-3.43457,2.68115,-0.995136},{-3.01416,2.59521,-5.08478},{0.776855,-2.89209,-5.11486},{-6.06885,3.33838,7.8684},{-6.38086,-2.05469,7.8684},{-1.7251,-3.09668,7.8684},{-5.64111,-0.92334,14.6913},{-6.23584,2.76465,14.6913}};
};
class land_seb_mine_near: Industrial {
	lootPos[] = {{7.87646,-5.52881,-8.8979},{9.02979,-5.5918,-8.8979},{4.37451,-7.10156,-8.8979}};
};
class land_x_vez_tex: Residential {
	lootPos[] = {{0.433105,-1.02734,-0.273926},{1.00391,3.02197,-0.272713},{1.36426,0.449219,-0.273571},{-1.89795,3.22168,-0.27232},{-5.00537,-3.64307,-0.274128}};
};
class land_marsh1: Residential {
	lootPos[] = {{3.76953,-5.73193,-3.95897},{-0.986816,-4.26074,-3.95897},{2.52637,0.376465,-3.95897},{4.78955,2.92969,-3.95897},{4.56543,6.82227,-3.95897},{-2.88184,4.24121,-4.01684}};
};
class land_molovabud1: Industrial {
lootPos[] = {{-2.4458,2.20703,1.27995},{-4.68164,1.95508,1.27995},{-7.92822,6.29199,1.27995},{-1.81055,-1.29199,1.56745}};
};
class land_f_b1: Industrial {
	lootPos[] = {{-4.45996,-2.84619,-2.21533},{-1.81152,-5.01123,-2.21533},{-5.32227,-5.21875,-2.21533}};
};
class land_seb_bouda1: Residential {
	lootPos[] = {{2.49316,-2.44238,1.13067},{-0.645996,-2.44824,1.13067},{-0.924316,-0.460938,0.573963},{-2.89697,1.9043,0.571716},{2.80566,1.2334,-3.28989},{-2.38672,-0.893555,-3.28989},{-2.7666,2.41699,-3.28989}};
};

// Panthera
class Land_sara_stodola: Farm {
	lootPos[] = {{5.01367,3.33118,-2.19523},{2.51758,1.05737,-2.19523},{-1.30957,-1.02954,-2.19523},{-4.24414,4.0238,-2.19523},{5.16211,-0.661621,-2.19523}};
};
class land_cihlovej_dum_mini: Residential {
	lootPos[] = {{-2.4646,-0.78418,-2.86942},{-1.75586,2.88525,-2.86942},{2.76587,2.08154,-2.86942},{1.96265,-1.98877,-2.86942},{0.0109863,0.876465,-2.86942},{0.116455,3.05762,-2.86942}};
};
class Land_hruzdum: Residential {
	lootPos[] = {{-1.67188,3.71826,-4.72847},{-2.52295,-1.02246,-1.16867},{-1.94971,1.22021,1.5983}};
	lootPosZombie[] = {{-1.66382,-1.14795,-3.82291},{-2.79248,3.60742,-0.251995}};
	lootPosSmall[] = {{-2.84448,0.796875,2.35386},{2.79614,3.2666,-1.15755},{-3.03979,2.35303,-4.72847}};
};
class Land_cihlovej_dum_in: Residential {
	lootPos[] = {{-0.0117188,0.0441895,-1.81473},{-1.76758,2.24805,-1.8147},{-2.88965,-1.64795,-1.8147},{1.84277,-2.07983,-1.81471},{1.58691,-1.3374,-5.27588},{1.22852,2.57324,-5.27588}};
};

// SMD Sara a2
class land_sara_hasic_zbroj: Industrial {
	lootPos[] = {{5.92285,1.35645,-2.66287},{0.00878906,-1.37549,-2.66287},{-1.82715,1.93066,-2.66287}};
	lootPosZombie[] = {{3.08594,-1.72363,-1.77787},{6.19629,-0.181641,-1.77787}};
	lootPosSmall[] = {{6.81348,-2.16846,-2.66287},{-3.30176,-2.49121,-2.67287}};
};
class land_smd_hlaska: Military {
	lootPos[] = {{-0.724609,0.822266,3.77092}};
	lootPosZombie[] = {{-0.18457,-3.13574,-2.25991}};
	lootPosSmall[] = {{1.06201,-0.864258,3.77092},{-1.04688,-0.759766,3.77092}};
};
class land_smd_cihlovej_dum_mini: Residential {
	lootPos[] = {{0.623047,2.39746,-2.58942},{0.0996094,0.995117,-2.86942},{-4.05957,-1.01953,-2.86942},{-8.86328,2.89453,-2.86942}};
	lootPosZombie[] = {{1.81738,0.794922,-1.99442},{-1.7959,1.10742,-1.99442},{-6.54102,1.04688,-1.99442}};
	lootPosSmall[] = {{2.89453,-1.72852,-1.91942},{2.92773,-2.3418,-2.86942},{-6.09668,3.10938,-2.86942},{-2.19629,2.9375,-2.86942}};
};
class land_smd_dum_istan4: Residential {
	lootPos[] = {{2.60742,-2.42188,-4.35237}};
	lootPosZombie[] = {{0.323242,5.66113,-6.38088}};
	lootPosSmall[] = {};
};
class land_smd_dum_olez_istan2_open2: Residential {
	lootPos[] = {{-0.162109,4.91846,-0.431501},{3.25391,2.52246,-0.421501},{-3.51953,-3.80176,0.128499},{-1.56934,0.389648,-0.411501}};
	lootPosZombie[] = {{5.4502,-3.21729,0.207455}};
	lootPosSmall[] = {{-6.44629,0.00488281,0.198499},{-4.30762,5.7207,0.568499},{0.628906,4.8291,0.338499},{-3.94824,-3.03906,0.128499},{1.19629,-5.44629,-0.0115013}};
};
class land_smd_dum_olez_istan2_open: Residential {
	lootPos[] = {{0.0185547,4.61133,0.0584984},{0.412598,-4.66211,0.338498},{-5.71582,5.63477,-0.431501},{-4.5127,-4.87695,-0.431501}};
	lootPosZombie[] = {{4.92383,-3.12109,0.0317497}};
	lootPosSmall[] = {{-1.46338,6.05078,0.718499},{-4.68652,-3.71973,0.528499},{-0.162109,-4.69238,0.0184984},{-6.41113,5.08398,0.798498}};
};
class land_smd_dum_olez_istan1_open: Residential {
	lootPos[] = {{-5.4375,-4.38379,1.35497},{5.75781,-3.31934,1.35497},{1.53516,-2.0625,1.35497},{-2.14941,-4.56445,-1.85398},{-6.79688,2.14453,-1.84398},{3.61523,-0.371094,-1.824}};
	lootPosZombie[] = {{1.33691,-5.02441,-1.5178},{-4.22168,4.75391,-1.66303}};
	lootPosSmall[] = {{-6.11914,-4.14453,2.16497},{2.4707,3.67773,1.96497},{6.42773,-0.5,1.34497},{7.48047,2.37109,-1.434},{-1.98047,-4.16504,-1.07398},{-7.60254,-4.06348,-0.883982},{-7.74902,2.51074,-1.16398},{5.85352,2.37695,-1.854}};
};
class land_smd_dum_istan3_hromada: Residential {
	lootPos[] = {{0.293945,-1.60156,-3.328},{-1.91406,-1.65332,-3.328}};
	lootPosZombie[] = {{-0.154297,5.01172,-2.46689},{-9.95117,1.99902,-2.46689},{10.2998,1.82227,-2.68886}};
	lootPosSmall[] = {{0.551758,-4.12695,-3.328},{0.626953,-0.547852,-3.328}};
};
class land_smd_army_hut2: Military {
	lootPos[] = {{0.447266,-4.6543,-1.33328}};
	lootPosZombie[] = {{0.552734,6.06836,-0.515976},{-3.86816,-5.6875,-1.13228}};
	lootPosSmall[] = {{-0.257813,-5.02539,-0.623276},{3.02832,-6.1582,-1.33328}};
};
class land_smd_ss_hangard_withdoor: Industrial {
	lootPos[] = {{0.236328,3.4209,-5.87254},{-14.0732,22.499,-5.87254},{13.1895,22.2031,-5.87254},{-13.8877,-10.5459,-5.87254},{2.10742,-19.8496,-5.87254}};
	lootPosZombie[] = {{0.128906,-25.0273,-5.42465},{-16.7891,1.98145,-5.42465},{0.0742188,26.5654,-5.42465},{16.6631,-7.1084,-5.42465}};
	lootPosSmall[] = {{14.3984,12.2852,-5.87254},{0.289063,-0.197266,-5.87254},{-14.8389,-20.6475,-5.87254},{14.8574,-20.5088,-5.87254}};
};
class land_budova5: Military {
	lootPos[] = {{-2.04004,2.89844,-1.98059}};
	lootPosZombie[] = {{-3.04492,2.0332,-1.40211}};
	lootPosSmall[] = {{-1.96191,-0.314453,-1.98059}};
};
class land_smd_army_hut2_int: Military {
	lootPos[] = {{-0.848633,-1.24316,-0.948334},{-1.92383,-0.00390625,-0.948334},{2.7959,-0.0146484,-0.948334}};
	lootPosZombie[] = {{-3.35352,-2.65332,-0.407364},{0.475586,3.37402,-0.350555}};
	lootPosSmall[] = {{0.15918,-1.26465,-0.498337},{3.0791,1.96387,-0.948334}};
};
class land_smd_strazni_vez: Military {
	lootPos[] = {{-1.68066,-1.30273,2.00299}};
	lootPosZombie[] = {{-1.14844,0.125977,2.28799},{1.04102,2.45898,-1.76974}};
	lootPosSmall[] = {{-0.902344,-1.29395,1.41299},{-1.92578,1.28613,1.41299}};
};
class land_smd_army_hut3_long_int: Military {
	lootPos[] = {{0.643555,5.24219,-0.0739136},{-2.78809,3.13672,-1.27391},{-2.80957,5.27441,-0.863907},{-3.13086,-3.3584,-1.27391},{-0.875977,-0.6875,-1.27391}};
	lootPosZombie[] = {{3.37598,0.145508,-0.938461},{-4.52734,0.833984,-1.2229}};
	lootPosSmall[] = {{1.6875,5.27539,-0.863907},{-0.604492,-3.36816,-0.563904},{1.91699,1.27832,-1.27391}};
};
class land_smd_dum_mesto3_istan: HouseRoaming {
	lootPosZombie[] = {{5.8457,-0.0634766,-2.34898},{-6.13281,0.0458984,-2.34898}};
};
class Land_Ind_Quarry: Industrial {
	lootPos[] = {{-4.53,-6.8,5.25},{-4.36,16.23,5.26},{0.74,-10.68,-7.48},{-2.97,-15.79,-7.48},{-7.11,3.25,-7.48},{6.12,6.62,-7.48},{6.38,9.22,-7.48}};
	lootPosZombie[] = {{0.74,-10.68,-7.48},{-2.97,-15.79,-7.48},{-7.11,3.25,-7.48},{6.12,6.62,-7.48},{6.38,9.22,-7.48}};
};
class Land_Misc_Scaffolding: Residential {
	lootPos[] = {{0.43,6.92,0.45},{-0.16,-0.47,3.41},{-0.14,7.64,3.39},{-0.03,3.1,0.45}};
	lootPosZombie[] = {{0.43,6.92,0.45},{-0.03,3.1,0.45}};
};
class C130J_wreck_EP1: Military {
	lootPos[] = {{-0.36,-7.87,-4.6},{-0.2,-12.76,-4.78},{-1.32,-14.56,-4.59},{-2.16,-6.32,-5.42},{-0.84,2.92,-5.44},{0.37,0.61,-5.44},{1.88,-3.67,-5.36},{1.26,-20.49,-5.39}};
	lootPosZombie[] = {{-0.36,-7.87,-4.6},{-0.2,-12.76,-4.78},{-1.32,-14.56,-4.59},{-2.16,-6.32,-5.42},{-0.84,2.92,-5.44},{0.37,0.61,-5.44},{1.88,-3.67,-5.36},{1.26,-20.49,-5.39}};
};
class Land_A_Castle_Wall2_End_2: Residential {
	lootPos[] = {{-4.66,0.52,-5.91},{1.51,0.07,-4.61}};
	lootChance = 0.4;
};
class Land_A_Castle_WallS_End: Residential {
	lootPos[] = {{-0.53,-1.95,-1.06}};
	lootChance = 0.4;
};
class Land_A_Castle_Wall2_30: Residential {
	lootPos[] = {{-7.18,-0.58,-5.89},{-0.94,-0.38,-4.58}};
	lootChance = 0.4;
};
class Land_A_Castle_WallS_10: Residential {
	lootPos[] = {{2.72,-2.57,-0.41},{-1.37,-1.28,-0.41}};
	lootChance = 0.4;
};
class Land_Vysilac_FM: Military {
	lootPos[] = {{-0.36,1.96,-6.21},{-1.72,4.5,-6.21},{-3.25,0.75,-6.21},{1.35,-0.6,8.39}};
	lootPosZombie[] = {{-0.36,1.96,-6.21},{-1.72,4.5,-6.21},{-3.25,0.75,-6.21}};
	lootChance = 0.4;
};
class MAP_Vysilac_FM: Land_Vysilac_FM {};
class Land_NAV_Lighthouse: Residential {
	lootPos[] = {{-0.16,-0.1,-6.78},{0.01,-1.7,2.42},{-0.06,3.36,-7.87}};
	lootPosZombie[] = {{-0.16,-0.1,-6.78},{-0.06,3.36,-7.87}};
	lootChance = 0.4;
};
class Land_A_Castle_Donjon: Residential {
	lootPos[] = {{-2.14,2.22,12.5},{3.25,3.36,12.6},{0.92,0.93,12.53},{4,0.33,12.49},{-0.07,4.13,12.52},{-2.86,5.47,12.48}};
	lootPosZombie[] = {};
	maxRoaming = 0;
	lootChance = 0.5;
};
class Land_Dam_Conc_20: Residential {
	lootPos[] = {{5.75,1.14,9.1},{3.11,1.22,9.09},{-4.22,9.19,9.11}};
	lootPosZombie[] = {{5.75,1.14,9.1},{3.11,1.22,9.09},{-4.22,9.19,9.11}};
	lootChance = 0.4;
};
class Land_Dam_ConcP_20: Military {
	lootPos[] = {{-0.94,10.26,9.09},{2.47,9.87,9.09},{-0.94,10.26,9.09},{2.47,9.87,9.09},{-6.51,4.46,2.21},{1.47,6.06,2.21},{4.89,2.99,2.19},{7.92,6.13,2.21}};
	lootPosZombie[] = {{-0.94,10.26,9.09},{2.47,9.87,9.09}};
	lootChance = 0.4;
};

class Land_aif_hotel_bio: Office {
    zombieChance = 1;
    minRoaming = 2;
    maxRoaming = 9;
    zombieClass[] = {"z_suit1","z_suit2","z_teacher","z_doctor","z_doctor","z_doctor","z_soldier","z_soldier"};
    lootPosZombie[] = {
		{-19.098,-16.114,-8.522},{-1.307,10.46,-8.522},{4.213,2.588,-8.522},{20.381,8.129,-8.522},{7.358,-10.213,-8.522},{6.081,-6.314,-6.46},{7.308,-4.104,-2.644},{6.73,-3.754,5.061},{-1.101,-2.969,1.227},
		{-13.516,-4.349,-4.686},{-16.679,-13.42,-4.686},{19.434,-17.742,-4.686},{-5.583,17.453,-4.686},{-14.922,8.234,-4.686},{-1.762,-0.896,-4.686},{19.021,-7.989,-4.686},{23.591,4.035,-4.686},
		{-2.474,-0.404,-0.835},{-18.691,-3.793,-0.835},{-14.771,17.222,-0.835},{-5.583,17.453,-0.835},{-3.437,8.314,-0.835},{-8.31,9.227,-0.835},{-14.922,8.234,-0.835},{17.855,2.978,-0.835},
		{17.194,-13.903,-0.835},{19.434,-17.742,-0.835},{-0.386,-3.967,3.015},{-1.762,-0.896,3.015},{-19.068,-14.613,3.015},{-16.679,-13.42,3.015},{-23.091,-17.565,3.015},{-3.437,8.314,3.015},
		{-8.31,9.227,3.015},{-14.922,8.234,3.015},{-18.852,8.281,3.015},{-7.982,-4.613,3.015},{-2.4,-9.286,3.015},{2.942,-8.127,3.015},{-8.168,12.449,3.015},{12.079,13.839,3.015},{17.45,12.937,3.015}
	};
    lootPos[] = {
		{-14.658,-11.453,-8.522},{-11.044,8.401,-8.522},{0.01,17.846,-8.522},{-18.418,15.192,-8.522},{14.028,-17.326,-8.522},{-0.081,-12.13,-8.522},{-5.224,-9.113,-8.522},{6.463,-6.808,-6.46},
		{-1.101,-2.969,-2.644},{6.73,-3.754,-2.644},{6.463,-6.808,-2.644},{6.73,-3.754,1.227},{-1.101,-2.969,5.061},{-0.386,-3.967,-4.686},{-2.474,-0.404,-4.686},{-2.4,-9.286,-4.686},
		{2.942,-8.127,-4.686},{8.43,-8.894,-4.686},{17.648,9.107,-4.686},{8.805,-4.475,-4.686},{10.469,17.491,-4.686},{1.657,9.346,-4.686},{17.855,2.978,-4.686},{17.194,-13.903,-4.686},
		{-19.081,20.517,-4.686},{-8.585,20.885,-4.686},{-18.663,13.893,-4.686},{-14.771,17.222,-4.686},{4.862,-20.893,-4.686},{6.153,-18.852,-4.686},{5.663,-12.217,-4.686},{-12.832,-12.107,-4.686},
		{-13.75,-14.996,-4.686},{-19.068,-14.613,-4.686},{-23.091,-17.565,-4.686},{-16.092,-6.662,-4.686},{-18.691,-3.793,-4.686},{-0.386,-3.967,-0.835},{-1.762,-0.896,-0.835},{-2.4,-9.286,-0.835},
		{19.021,-7.989,-0.835},{22.494,13.414,-0.835},{23.591,4.035,-0.835},{17.648,9.107,-0.835},{8.781,10.818,-0.835},{10.469,17.491,-0.835},{1.657,9.346,-0.835},{-18.852,8.281,-0.835},
		{14.798,4.787,-0.835},{5.663,-12.217,-0.835},{-12.832,-12.107,-0.835},{-13.75,-14.996,-0.835},{-19.068,-14.613,-0.835},{-16.679,-13.42,-0.835},{-16.092,-6.662,-0.835},{-13.516,-4.349,-0.835},
		{-2.474,-0.404,3.015},{8.805,-4.475,3.015},{10.379,-0.359,3.015},{9.746,5.418,3.015},{8.781,10.818,3.015},{17.855,2.978,3.015},{17.194,-13.903,3.015},{-19.081,20.517,3.015},{-8.585,20.885,3.015},
		{-18.663,13.893,3.015},{-14.771,17.222,3.015},{-5.583,17.453,3.015},{-2.781,14.316,3.015},{-22.462,-5.706,3.015},{-16.092,-6.662,3.015},{-18.691,-3.793,3.015},{-13.516,-4.349,3.015},	
		{12.23,5.608,6.869},{19.439,-0.931,6.869},{7.9,-15.571,6.869},{-18.93,16.208,6.869}
	};
    lootPosSmall[] = {
		{17.395,-13.028,-8.522},{17.812,17.264,-8.522},{13.317,3.259,-8.522},{3.268,16.976,-8.522},{6.036,10.984,-8.522},{-14.668,0.137,-8.522},{3.507,5.546,-8.522},{16.319,-4.787,-8.522},
		{-1.101,-2.969,-6.46},{7.308,-4.104,-6.46},{6.081,-6.314,1.227},{6.463,-6.808,1.227},{6.081,-6.314,5.061},{7.308,-4.104,5.061},{-3.753,-6.176,-4.686},{-6.131,1.596,-4.686},
		{-22.863,-11.306,-4.686},{-22.462,-5.706,-4.686},{17.493,17.348,-4.686},{13.52,-11.286,-4.686},{-18.852,8.281,-4.686},{14.798,4.787,-4.686},{13.099,-8.347,-4.686},{22.494,13.414,-4.686},
		{-3.437,8.314,-4.686},{-8.31,9.227,-4.686},{-8.168,12.449,-4.686},{12.079,13.839,-4.686},{10.379,-0.359,-4.686},{9.746,5.418,-4.686},{8.781,10.818,-4.686},{-2.781,14.316,-4.686},
		{17.45,12.937,-4.686},{15.947,-20.198,-4.686},{-8.643,5.153,-4.686},{-23.091,-17.565,-0.835},{-22.863,-11.306,-0.835},{-22.462,-5.706,-0.835},{13.52,-11.286,-0.835},{4.862,-20.893,-0.835},
		{6.153,-18.852,-0.835},{-3.753,-6.176,-0.835},{-6.131,1.596,-0.835},{-2.781,14.316,-0.835},{-8.168,12.449,-0.835},{12.079,13.839,-0.835},{2.942,-8.127,-0.835},{8.43,-8.894,-0.835},
		{13.099,-8.347,-0.835},{-19.081,20.517,-0.835},{-8.585,20.885,-0.835},{-18.663,13.893,-0.835},{8.805,-4.475,-0.835},{10.379,-0.359,-0.835},{9.746,5.418,-0.835},{-8.643,5.153,-0.835},
		{-7.982,-4.613,-0.835},{17.45,12.937,-0.835},{8.43,-8.894,3.015},{13.099,-8.347,3.015},{19.021,-7.989,3.015},{6.153,-18.852,3.015},{5.663,-12.217,3.015},{-12.832,-12.107,3.015},
		{10.469,17.491,3.015},{1.657,9.346,3.015},{14.798,4.787,3.015},{-6.131,1.596,3.015},{-8.643,5.153,3.015},{22.494,13.414,3.015},{19.434,-17.742,3.015},{15.947,-20.198,3.015},
		{4.862,-20.893,3.015},{-13.75,-14.996,3.015},{-3.753,-6.176,3.015},{23.591,4.035,3.015},{17.648,9.107,3.015},{17.493,17.348,3.015},{13.52,-11.286,3.015},{-22.863,-11.306,3.015}
	};
};
class Land_Ind_Expedice_3: Industrial {
	lootPos[] = {
		{-5.033,10.413,-1.171},{-0.462,18.432,2.13},{1.51,4.615,2.145},{0.189,-15.69,2.22}
	};
};
class Land_afdum_mesto2: Default {
        maxRoaming = 3;
}; 
class MAP_afdum_mesto2: Land_afdum_mesto2 {};
class MAP_afdum_mesto2L: Default {
        maxRoaming = 3;
};
class Land_afdum_mesto2L: MAP_afdum_mesto2L {};
class MAP_Statek_kulna: Default {
        maxRoaming = 3;
};
class Land_Statek_kulna: MAP_Statek_kulna {};
class MAP_statek_hl_bud: Default {
        maxRoaming = 3;
};
class Land_statek_hl_bud: MAP_statek_hl_bud {};
class Land_afhospoda_mesto: Default {
        maxRoaming = 3;
};
class MAP_afhospoda_mesto: Land_afhospoda_mesto {};
class MAP_garaz_mala: Default {
        maxRoaming = 3;
};
class land_garaz_mala: MAP_garaz_mala {};
class MAP_Misc_WaterStation: Default {
        maxRoaming = 3;
};
class Land_Misc_WaterStation: MAP_Misc_WaterStation {};
class Land_dum_zboreny_total: Default {
        maxRoaming = 3;
}; 
class MAP_Dum_mesto3test: Default {
        maxRoaming = 3;
}; 
class MAP_sara_domek_podhradi_1: Default {
        maxRoaming = 3;
}; 
class dum_olezlina: Default {
        maxRoaming = 3;
}; 
class SHouse: Default {
        maxRoaming = 3;
}; 
class MAP_dum01: Default {
        maxRoaming = 3;
}; 
class Land_MBG_ATC_Tower: Military {
	lootChance = 0.5;
	lootPos[] = {
		{0.55,2.125,-16.41},{3.704,-0.664,-16.41},{-0.407,-0.825,-16.41},{0.356,0.46,-13.81},{1.284,-3.41,4.59},{-2.003,0.348,7.59}
	};
	lootPosZombie[] = {
		{3.704,-0.66,-16.41},{0.356,0.45,-13.81},{1.284,-3.4,4.59}
	};
};

class land_mbg_warehouse: MBG_Warehouse_InEditor {};

class CDF_WarfareBBarracks : Military {
	lootPos[] = {
		{5.761,1.427,0.562},{2.695,5.392,0.58},{-2.415,-1.098,0.528},{2.797,-0.371,0.529},{2.368,-1.146,0.542},{2.521,-4.221,0.532}
	};
};
class Land_afdum_mesto3: Residential {
    lootPos[] = {
		{0.39,1.066,-5.856},{2.088,0.758,-5.586}
	};
};
class MAP_afdum_mesto3: Land_afdum_mesto3 {};
class MAP_HouseBlock_A1_half_ruin: Residential {
    lootPos[] = {
		{-2.072,-0.113,-5.07},{-0.141,2.577,-7.095}
	};
};
class Land_aif_sara_domek05: Residential {
    lootPos[] = {
		{3.773,-1.671,-2.797},{4.586,0.972,-2.797},{-0.182,-1.845,-2.797},{-4.972,-2.136,-2.797}
	};
};
class Land_zluty_statek_in: Residential {
    lootPos[] = {
		{-8.992,1.415,-2.886},{-9.014,4.764,-2.886},{5.253,-1.954,-2.886},{8.378,4.978,-2.886},{6.807,1.604,-2.886},{3.286,3.778,-2.887},
		{-0.326,5.237,-2.883},{-0.787,2.53,-2.883},{-2.907,3.32,-2.88}
	};
};
class Land_afbarabizna: Residential {
    lootPos[] = {
		{6.287,-3.359,-4.22},{4.382,-2.7765,-4.22},{-1.788,0.935,-4.22},{-3.587,2.591,-4.22},{-1.805,5.854,-4.22},{5.615,4.073,-4.22}
	};
};

class Land_MBG_GER_HUS_5: Land_MBG_GER_HUS_1 {};
class MAP_HouseBlock_B6_ruins: Residential {
    lootPos[] = {
		{-2.774,1.215,-2.61},{-9.677,2.073,-4.25},{8.592,-2.184,-0.424},{7.896,0.638,-3.806},{8.247,-4.458,-4.826}
	};
};
class MAP_HouseBlock_B1_ruins: Residential {
    lootPos[] = {
		{-10.232,3.161,-4.253},{-2.642,0.758,-2.688},{2.04,2.568,-2.458},{8.633,-2.852,-4.4},{9.092,3.988,-0.424},{8.292,-4.206,-0.424},{6.437,0.619,-0.402}
	};
};
class Land_dum_zboreny: Residential {
    lootPos[] = {
		{-5.557,3.515,-2.377},{-1.738,-2.938,-2.377},{-4.319,1.651,-2.377},{5.423,5.076,-2.377},{2.988,2.103,-2.377},{1.506,-2.923,1.398},
		{-1.96,-3.951,1.398},{-6.11,-4.041,1.418},{-5.122,5.374,1.418}
	};
};
class Land_aif_tovarna1: Industrial {
    lootPos[] = {
		{3.589,6.087,-6.33},{-1.915,7.827,-6.33},{-11.468,6.529,-6.33},{-1.762,1.551,-6.33},{2.112,-4.838,-6.33},{-11.104,-4.117,-6.33},
		{-10.996,-3.72,-3.092},{-12.284,-2.289,-0.352},{-0.365,3.805,-0.352},{4,261,-3.357,-0.352},{-7.757,2.226,2.398},{1.81,3.339,2.398},
		{0.025,-6.856,2.398},{-2.696,-8.678,2.398},{-0.795,-0.124,2.398},{-11.111,0.833,5.313},{-0.848,1.084,5.313},{-3.971,-7.565,5.313}
	};
    lootPosZombie[] = {
		{-1.915,7.82,-6.33},{-1.762,1.55,-6.33},{-11.104,-4.11,-6.33},{-12.284,-2.28,-0.352},{4,261,-3.35,-0.352},{-2.696,-8.67,2.398},{-3.971,-7.56,5.313}
	};
};
class MAP_Mil_Mil_Guardhouse : Military {
	lootPos[] = {
		{4.102,-1.59,-1.443},{2.123,-2.889,-1.443},{-1.61,-2.221,-1.443},{2.658,0.63,-1.443},{0.642,2.145,-1.443},{4.523,3.349,-1.443},{-2.642,2.15,-1.443}
	};
};
class CDF_WarfareBFieldHospital: Hospital {
        maxRoaming = 2;
        lootChance = 0.6;
        lootPos[] = {
			{-2.004,-1.987,0.449},{0.512,-1.005,0.449},{-0.906,0.552,0.449}
		};
};
class Land_ZalChata : Military {
	lootPos[] = {
		{-1.575,-2.115,-0.534},{-0.459,-2.087,-0.534}
	};
};
class MAP_ZalChata: Land_ZalChata {};

class Land_kostel_trosky: Church {
    lootPos[] = {
		{-1.015,11.767,-5.635},{0.532,9.537,-5.546},{-1.69,4.12,-5.44}
	};
};
class Land_leseni4x: Residential {
	lootPos[] = {
		{-1.693,0.415,-1.578},{0.854,-0.477,-1.579},{-2.269,0.307,0.613},{-0.604,0.377,0.613},{-1.395,0.314,2.819},{0.177,-0.176,2.819},{-2.59,-0.163,5.041},{0.923,0.287,5.041}
	};
};
class Land_aif_strazni_vez: Hunting {
    zombieChance = 0.3;
    lootChance = 0.5;
    maxRoaming = 3;
    lootPos[] = {
		{1.55,-0.666,1.277},{-1.29,0.431,1.462}
	};
}; 
class Land_aif_hlaska: Military {
    lootChance = 0.4;
    lootPos[] = {
		{0.105,0.480,3.771}
	};
};
class Land_Fort_Watchtower: Military {
    lootChance = 0.4;
    lootPos[] = {
		{-0.373,0.764,0.570},{-0.302,-0.884,0.57},{0.455,-1.058,-2.181},{-1.166,2.506,-2.2}
	};
};
};