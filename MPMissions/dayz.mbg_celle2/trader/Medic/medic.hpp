
class RscDisplayMedic
{
   idd = Medic_dialog;
   movingenable = 0;

   class Controls
   {
		 class RscBackground_5000: RscBackground
		 {
		    idc = 5000;
		    colorBackground[] = {0,0,0,1};
		    colorText[] = {1,1,1,1};
		    x = 0.397168 * safezoneW + safezoneX;
			y = 0.300323 * safezoneH + safezoneY;
			w = 0.190974 * safezoneW;
			h = 0.422846 * safezoneH;
		 };
		class RscFrame_1800: RscFrame
		{
			idc = 1800;
			x = 0.397168 * safezoneW + safezoneX;
			y = 0.300323 * safezoneH + safezoneY;
			w = 0.190974 * safezoneW;
			h = 0.422846 * safezoneH;
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.312068 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1201: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.359051 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1202: RscPicture
		{
			idc = 1202;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.406034 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1203: RscPicture
		{
			idc = 1203;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.453017 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1204: RscPicture
		{
			idc = 1204;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1205: RscPicture
		{
			idc = 1205;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1206: RscPicture
		{
			idc = 1206;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.419203 * safezoneW + safezoneX;
			y = 0.593966 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.323814 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_morphine.sqf';";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_bloodbag.sqf';";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.41778 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_epipen.sqf';";
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.464763 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_bandage.sqf';";
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_heatpack.sqf';";
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.558729 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_antibiotic.sqf';";
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "Buy";
			x = 0.463274 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\buy_painkiller.sqf';";
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "Exit";
			x = 0.470619 * safezoneW + safezoneX;
			y = 0.687932 * safezoneH + safezoneY;
			w = 0.044071 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "closeDialog 0;";
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.323814 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_morphine.sqf';";
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_bloodbag.sqf';";
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.41778 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_epipen.sqf';";
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.464763 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_bandage.sqf';";
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_heatpack.sqf';";
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.558729 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_antibiotic.sqf';";
		};
		class RscButton_1615: RscButton
		{
			idc = 1615;
			text = "Sell";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\medic\sell_painkiller.sqf';";
		};
   };
};