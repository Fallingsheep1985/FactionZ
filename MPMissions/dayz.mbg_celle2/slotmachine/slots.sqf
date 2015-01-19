
//Variables
SlotsPlayerCredits = 0;
IsSpinning = false;
hasSlotsCredits = false;
playerwealth = player getVariable["cashMoney",0];	
reelArray = ["cherry","lemon","grape","watermelon","orange","bar","seven","diamond"];
slotspictures = ["pictures\image1.paa","pictures\image2.paa","pictures\image3.paa","pictures\image4.paa","pictures\image5.paa","pictures\image6.paa","pictures\image7.paa","pictures\image8.paa"];
	

fnc_add_1_credits = {
if(IsSpinning)then{
		titleText ["Please wait for current spin!","PLAIN DOWN"]; titleFadeOut 3;
	 } else {
	   if (playerwealth > 10) then{
		 //remove cost
		 newplayerwealth = playerwealth - 10;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
		 //add credit
		 SlotsPlayerCredits = SlotsPlayerCredits + 1;
		 //Update credits display
		 ctrlSetText[1001, format ["%1" ,SlotsPlayerCredits]];
	   }else{
		 titleText ["You need 10 Vigils to add 1 credit!","PLAIN DOWN"];
		 titleFadeOut 3;
	   };
   };
};

fnc_add_10_credits = {
if(IsSpinning)then{
		titleText ["Please wait for current spin!","PLAIN DOWN"]; titleFadeOut 3;
	 } else {
	   //check if player has required item
	   if (playerwealth > 100) then{
		 //remove cost
		 newplayerwealth = playerwealth - 100;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave"; 
		 //add credits
		 SlotsPlayerCredits = SlotsPlayerCredits + 10;
		 //Update credits display
		 ctrlSetText[1001, format ["%1" ,SlotsPlayerCredits]];
	   }else{
		 titleText ["You need 1x 10oz Goldbar to add 10 credits!","PLAIN DOWN"]; titleFadeOut 3;
	   };
   };
};

fnc_random_pictures = {
//loop thru random images on reels
	_counter = 0;
	while {_counter < 15} do
	{
	ReelImage1 = slotspictures call BIS_fnc_selectRandom;
	ReelImage2 = slotspictures call BIS_fnc_selectRandom;
	ReelImage3 = slotspictures call BIS_fnc_selectRandom;
	ctrlSetText[1200, format ["%1" ,ReelImage1]];
	ctrlSetText[1201, format ["%1" ,ReelImage2]];
	ctrlSetText[1202, format ["%1" ,ReelImage3]];
	sleep 0.01;
		_counter = _counter + 1;
	};
};

fnc_spin  = {
	if(IsSpinning)then{
		titleText ["Please wait for current spin!","PLAIN DOWN"]; titleFadeOut 3;
	 } else {
	   if (SlotsPlayerCredits <= 0) then {
		 hasSlotsCredits = false;
		 titleText ["You have no credits!","PLAIN DOWN"]; titleFadeOut 3;
	   }else{
		 hasSlotsCredits = true;
	   };
	   
	   if (hasSlotsCredits) then {
		 IsSpinning = true;
		 //remove credit
		 SlotsPlayerCredits = SlotsPlayerCredits - 1;
		 //update credits display     
		 ctrlSetText[1001, format ["%1" ,SlotsPlayerCredits]];
		 //randomise reels
		 call fnc_random_pictures;

		 //10% chance to win
		 if(SlotsWinChanceRandom > SlotsWinChance) then{
			reel1 = reelArray call BIS_fnc_selectRandom;
			reel2 = reel1;
			reel3 = reel1;
		 }else{
			reel1 = reelArray call BIS_fnc_selectRandom;
			reel2 = reelArray call BIS_fnc_selectRandom;
			reel3 = reelArray call BIS_fnc_selectRandom;
		 };
		 sleep 0.1;
		 //display pictures
		 call fnc_display_pictures;
		 //check if win or lose
		 call fnc_payout;
	   };
	};
};
fnc_display_pictures = {
//reel 1
   if (reel1 == "cherry") then {
    ctrlSetText [1200, "pictures\image1.paa"];
   };
   if (reel1 == "lemon") then {
    ctrlSetText [1200, "pictures\image2.paa"];
   };
   if (reel1 == "grape") then {
    ctrlSetText [1200, "pictures\image3.paa"];
   };
   if (reel1 == "watermelon") then {
    ctrlSetText [1200, "pictures\image4.paa"];
   };
   if (reel1 == "orange") then {
    ctrlSetText [1200, "pictures\image5.paa"];
   };
   if (reel1 == "bar") then {
    ctrlSetText [1200, "pictures\image6.paa"];
   };
   if (reel1 == "seven") then {
    ctrlSetText [1200, "pictures\image7.paa"];
   };
   if (reel1 == "diamond") then {
    ctrlSetText [1200, "pictures\image8.paa"];
   };
   //reel 2
   if (reel2 == "cherry") then {
    ctrlSetText [1201,"pictures\image1.paa"];
   };
   if (reel2 == "lemon") then {
    ctrlSetText [1201,"pictures\image2.paa"];
   };
   if (reel2 == "grape") then {
    ctrlSetText [1201,"pictures\image3.paa"];
   };
   if (reel2 == "watermelon") then {
    ctrlSetText [1201,"pictures\image4.paa"];
   };
   if (reel2 == "orange") then {
    ctrlSetText [1201,"pictures\image5.paa"];
   };
   if (reel2 == "bar") then {
    ctrlSetText [1201,"pictures\image6.paa"];
   };
   if (reel2 == "seven") then {
    ctrlSetText [1201,"pictures\image7.paa"];
   };
   if (reel2 == "diamond") then {
    ctrlSetText [1201,"pictures\image8.paa"];
   };
   //reel 3
   if (reel3 == "cherry") then {
    ctrlSetText [1202,"pictures\image1.paa"];
   };
   if (reel3 == "lemon") then {
    ctrlSetText [1202,"pictures\image2.paa"];
   };
   if (reel3 == "grape") then {
    ctrlSetText [1202,"pictures\image3.paa"];
   };
   if (reel3 == "watermelon") then {
    ctrlSetText [1202,"pictures\image4.paa"];
   };
   if (reel3 == "orange") then {
    ctrlSetText [1202,"pictures\image5.paa"];
   };
   if (reel3 == "bar") then {
    ctrlSetText [1202,"pictures\image6.paa"];
   };
   if (reel3 == "seven") then {
    ctrlSetText [1202,"pictures\image7.paa"];
   };
   if (reel3 == "diamond") then {
    ctrlSetText [1202,"pictures\image8.paa"];
   };
};

fnc_payout = {
   if ((reel1 == reel2) && (reel2 == reel3)) then {
     if (reel1 == "cherry") then {
       titleText ["You won 10 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
      newplayerwealth = playerwealth + slotsprize1;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "lemon") then {
       titleText ["You won 25 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
       newplayerwealth = playerwealth + slotsprize2;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "grape") then {
       titleText ["You won 75 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
       newplayerwealth = playerwealth + slotsprize3;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "watermelon") then {
       titleText ["You won 250 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
        newplayerwealth = playerwealth + slotsprize4;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "orange") then {
       titleText ["You won 500 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
       newplayerwealth = playerwealth + slotsprize5;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "bar") then {
       titleText ["You won 750 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
        newplayerwealth = playerwealth + slotsprize6;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "seven") then {
       titleText ["Jackpot! You won 1000 Vigils!","PLAIN DOWN"]; titleFadeOut 3;
        newplayerwealth = playerwealth + slotsprize7;
		player setVariable["cashMoney",newplayerwealth, true];
		player setVariable ["moneychanged",1,true]; 
		dayzPlayerSave = [player,(magazines player),true,true] ;
		publicVariableServer "dayzPlayerSave";
     };
     if (reel1 == "diamond") then {
       SlotsPlayerCredits = SlotsPlayerCredits + 10;
	   //update credits display     
		ctrlSetText[1001, format ["%1" ,SlotsPlayerCredits]];
       titleText ["You won 10 free credits!","PLAIN DOWN"]; titleFadeOut 3;
     };
   }else{
     titleText ["You lost.","PLAIN DOWN"]; titleFadeOut 3;
   };
   IsSpinning = false;
};

fnc_reset_slots = {
	SlotsPlayerCredits = 0;
	IsSpinning = false;
};

fnc_cash_out = {
	if (IsSpinning) then {
		titleText ["Please wait for current spin!","PLAIN DOWN"]; titleFadeOut 3;
	}else{
		if (SlotsPlayerCredits > 0) then {
			while {SlotsPlayerCredits > 0} do
			{
				if (SlotsPlayerCredits > 10) then {
					newplayerwealth = playerwealth + slotsprize2;
					player setVariable["cashMoney",newplayerwealth, true];
					player setVariable ["moneychanged",1,true]; 
					dayzPlayerSave = [player,(magazines player),true,true] ;
					publicVariableServer "dayzPlayerSave";
					SlotsPlayerCredits = SlotsPlayerCredits - 10;
				}else{
					newplayerwealth = playerwealth + slotsprize1;
					player setVariable["cashMoney",newplayerwealth, true];
					player setVariable ["moneychanged",1,true]; 
					dayzPlayerSave = [player,(magazines player),true,true] ;
					publicVariableServer "dayzPlayerSave";
					SlotsPlayerCredits = SlotsPlayerCredits - 1;
				};
			};
			titleText ["Credits refunded.","PLAIN DOWN"]; titleFadeOut 3;
			sleep 0.01;
			call fnc_reset_slots;
		};
	};
};