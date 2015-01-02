
class RscDisplayAmmo1
{
   idd = Ammo1_dialog;
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
			x = 0.279645 * safezoneW + safezoneX;
			y = 0.276831 * safezoneH + safezoneY;
			w = 0.44071 * safezoneW;
			h = 0.399355 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Buy";
			x = 0.301681 * safezoneW + safezoneX;
			y = 0.312068 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_7Rnd_50_AE.sqf';";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Buy";
			x = 0.301681 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_13Rnd_9x19_bhp.sqf';";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Buy";
			x = 0.301681 * safezoneW + safezoneX;
			y = 0.429526 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_8Rnd_9x19_Mk.sqf';";
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "Buy";
			x = 0.301681 * safezoneW + safezoneX;
			y = 0.488254 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_8Rnd_9x19_Mksd.sqf';";
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "Buy";
			x = 0.301681 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_15Rnd_9x19_usp.sqf';";
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "Buy";
			x = 0.301681 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_15Rnd_9x19_uspsd.sqf';";
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "Buy";
			x = 0.375132 * safezoneW + safezoneX;
			y = 0.312068 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_12Rnd_45cal_usp.sqf';";
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "Buy";
			x = 0.375132 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "[]execVM 'trader\hunter\buy_RH_8Rnd_45cal_m1911.sqf';";
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "Buy";
			x = 0.375132 * safezoneW + safezoneX;
			y = 0.429526 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "Buy";
			x = 0.375132 * safezoneW + safezoneX;
			y = 0.488254 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "Buy";
			x = 0.375132 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "Buy";
			x = 0.375132 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "Buy";
			x = 0.448584 * safezoneW + safezoneX;
			y = 0.312068 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "Buy";
			x = 0.448584 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Buy";
			x = 0.448584 * safezoneW + safezoneX;
			y = 0.429526 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1615: RscButton
		{
			idc = 1615;
			text = "Buy";
			x = 0.448584 * safezoneW + safezoneX;
			y = 0.488254 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1616: RscButton
		{
			idc = 1616;
			text = "Buy";
			x = 0.448584 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1617: RscButton
		{
			idc = 1617;
			text = "Buy";
			x = 0.448584 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1618: RscButton
		{
			idc = 1618;
			text = "Buy";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.312068 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1619: RscButton
		{
			idc = 1619;
			text = "Buy";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1620: RscButton
		{
			idc = 1620;
			text = "Buy";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.429526 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1621: RscButton
		{
			idc = 1621;
			text = "Buy";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.488254 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1622: RscButton
		{
			idc = 1622;
			text = "Buy";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1623: RscButton
		{
			idc = 1623;
			text = "Buy";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1624: RscButton
		{
			idc = 1624;
			text = "Buy";
			x = 0.595487 * safezoneW + safezoneX;
			y = 0.312068 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1625: RscButton
		{
			idc = 1625;
			text = "Buy";
			x = 0.595487 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1626: RscButton
		{
			idc = 1626;
			text = "Buy";
			x = 0.595487 * safezoneW + safezoneX;
			y = 0.429526 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1627: RscButton
		{
			idc = 1627;
			text = "Buy";
			x = 0.595487 * safezoneW + safezoneX;
			y = 0.488254 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1628: RscButton
		{
			idc = 1628;
			text = "Buy";
			x = 0.595487 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1629: RscButton
		{
			idc = 1629;
			text = "Buy";
			x = 0.595487 * safezoneW + safezoneX;
			y = 0.605712 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1630: RscButton
		{
			idc = 1630;
			text = "Buy";
			x = 0.668939 * safezoneW + safezoneX;
			y = 0.406034 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscButton_1631: RscButton
		{
			idc = 1631;
			text = "Buy";
			x = 0.668939 * safezoneW + safezoneX;
			y = 0.546983 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "50_AE";
			x = 0.28699 * safezoneW + safezoneX;
			y = 0.276831 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "9x19_bhp";
			x = 0.28699 * safezoneW + safezoneX;
			y = 0.33556 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "9x19_Mk";
			x = 0.28699 * safezoneW + safezoneX;
			y = 0.394288 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "9x19_Mksd";
			x = 0.28699 * safezoneW + safezoneX;
			y = 0.453017 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "9x19_usp";
			x = 0.28699 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "9x19_uspsd";
			x = 0.28699 * safezoneW + safezoneX;
			y = 0.570474 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "45cal_usp";
			x = 0.360442 * safezoneW + safezoneX;
			y = 0.276831 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "45cal_m1911";
			x = 0.360442 * safezoneW + safezoneX;
			y = 0.33556 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "9x19_M93";
			x = 0.360442 * safezoneW + safezoneX;
			y = 0.394288 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1009: RscText
		{
			idc = 1009;
			text = "9x19_g17";
			x = 0.360442 * safezoneW + safezoneX;
			y = 0.453017 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1010: RscText
		{
			idc = 1010;
			text = "19rnd_9x19_g18";
			x = 0.360442 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "33rnd_9x19_g18";
			x = 0.360442 * safezoneW + safezoneX;
			y = 0.570474 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1012: RscText
		{
			idc = 1012;
			text = "22LR_mk2";
			x = 0.433894 * safezoneW + safezoneX;
			y = 0.276831 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1013: RscText
		{
			idc = 1013;
			text = "762_tt33";
			x = 0.433894 * safezoneW + safezoneX;
			y = 0.33556 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1014: RscText
		{
			idc = 1014;
			text = "9x19_tec";
			x = 0.433894 * safezoneW + safezoneX;
			y = 0.394288 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1015: RscText
		{
			idc = 1015;
			text = "9x19_Muzi";
			x = 0.433894 * safezoneW + safezoneX;
			y = 0.453017 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1016: RscText
		{
			idc = 1016;
			text = "32cal_ppk";
			x = 0.433894 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1017: RscText
		{
			idc = 1017;
			text = "9x19_p38";
			x = 0.433894 * safezoneW + safezoneX;
			y = 0.570474 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1018: RscText
		{
			idc = 1018;
			text = "44_Mag";
			x = 0.507345 * safezoneW + safezoneX;
			y = 0.276831 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1019: RscText
		{
			idc = 1019;
			text = "357_Mag";
			x = 0.507345 * safezoneW + safezoneX;
			y = 0.33556 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1020: RscText
		{
			idc = 1020;
			text = "9x19_M9";
			x = 0.507345 * safezoneW + safezoneX;
			y = 0.394288 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1021: RscText
		{
			idc = 1021;
			text = "9x19_M9SD";
			x = 0.507345 * safezoneW + safezoneX;
			y = 0.453017 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1022: RscText
		{
			idc = 1022;
			text = "9x19_glock17";
			x = 0.507345 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1023: RscText
		{
			idc = 1023;
			text = "45ACP_1911";
			x = 0.507345 * safezoneW + safezoneX;
			y = 0.570474 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1024: RscText
		{
			idc = 1024;
			text = "45ACP";
			x = 0.580797 * safezoneW + safezoneX;
			y = 0.276831 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1025: RscText
		{
			idc = 1025;
			text = "9x18_Makarov";
			x = 0.580797 * safezoneW + safezoneX;
			y = 0.33556 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1026: RscText
		{
			idc = 1026;
			text = "10x_303";
			x = 0.580797 * safezoneW + safezoneX;
			y = 0.394288 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1027: RscText
		{
			idc = 1027;
			text = "9x19_UZI";
			x = 0.580797 * safezoneW + safezoneX;
			y = 0.453017 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1028: RscText
		{
			idc = 1028;
			text = "W1866_Slug";
			x = 0.580797 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1029: RscText
		{
			idc = 1029;
			text = "2rnd_74Slug";
			x = 0.580797 * safezoneW + safezoneX;
			y = 0.570474 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1030: RscText
		{
			idc = 1030;
			text = "8rnd_74Pellets";
			x = 0.654248 * safezoneW + safezoneX;
			y = 0.370797 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscText_1031: RscText
		{
			idc = 1031;
			text = "8rnd_74Slug";
			x = 0.654248 * safezoneW + safezoneX;
			y = 0.511746 * safezoneH + safezoneY;
			w = 0.0661065 * safezoneW;
			h = 0.0352372 * safezoneH;
		};
		class RscButton_1632: RscButton
		{
			idc = 1632;
			text = "Exit";
			x = 0.668939 * safezoneW + safezoneX;
			y = 0.629203 * safezoneH + safezoneY;
			w = 0.0367258 * safezoneW;
			h = 0.0234914 * safezoneH;
			action = "closeDialog 0;";
		};
   };
};