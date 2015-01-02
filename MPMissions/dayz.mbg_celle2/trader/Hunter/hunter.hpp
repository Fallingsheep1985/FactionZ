
class RscDisplayHunter
{
   idd = Hunter_dialog;
   movingenable = 0;

   class Controls
   {
   		 class RscBackground_5000: RscBackground
		 {
		    idc = 5000;
		    colorBackground[] = {0,0,0,1};
		    colorText[] = {1,1,1,1};
		    x = 0.387168 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.190974 * safezoneW;
			h = 0.422846 * safezoneH;
		 };
		class RscFrame_1800: RscFrame
		{
			idc = 1800;
			x = 0.387168 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.190974 * safezoneW;
			h = 0.422846 * safezoneH;
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.20 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1201: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1202: RscPicture
		{
			idc = 1202;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1203: RscPicture
		{
			idc = 1203;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1204: RscPicture
		{
			idc = 1204;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.40 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1205: RscPicture
		{
			idc = 1205;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.45 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1206: RscPicture
		{
			idc = 1206;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.50 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscPicture_1207: RscPicture
		{
			idc = 1207;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.409203 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.20 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_rawbeef.sqf';";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_cookedbeef.sqf';";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_knife.sqf';";
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_axe.sqf';";
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.40 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_beartrap.sqf';";
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.45 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_compass.sqf';";
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.50 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_map.sqf';";
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "Buy";
			x = 0.453274 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_matches.sqf';";
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "Exit";
			x = 0.460619 * safezoneW + safezoneX;
			y = 0.60 * safezoneH + safezoneY;
			w = 0.044071 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "closeDialog 0;";
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.20 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_rawbeef.sqf';";
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_cookedbeef.sqf';";
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.30 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_knife.sqf';";
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_axe.sqf';";
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.40 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_beartrap.sqf';";
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.45 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_compass.sqf';";
		};
		class RscButton_1615: RscButton
		{
			idc = 1615;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.50 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_map.sqf';";
		};
		class RscButton_1616: RscButton
		{
			idc = 1616;
			text = "Sell";
			x = 0.512035 * safezoneW + safezoneX;
			y = 0.55 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\sell_matches.sqf';";
		};
   };
};