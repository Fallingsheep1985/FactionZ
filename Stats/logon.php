<?php
//Functions
function secondsToTime($seconds) {
    $dtF = new DateTime("@0");
    $dtT = new DateTime("@$seconds");
    return $dtF->diff($dtT)->format('%a days, %h hours, %i minutes and %s seconds');
}
//spacer
$spacer = "\n";
$spacerline = "---------------------------------------------------------";
//Database Details
$servername = "localhost";
$username = "dayz";
$password = "dayz";
$dbname = "hivemind";
//SQL query
$sql = "
SELECT player_data.playerUID, player_data.playerName,character_data.Alive,
character_data.Datestamp,character_data.Medical,character_data.Inventory,
character_data.Worldspace,character_data.Backpack, character_data.LastLogin, 
character_data.Generation, character_data.KillsH,character_data.KillsB, 
character_data.KillsZ, character_data.distanceFoot, character_data.HeadshotsZ, 
character_data.duration, character_data.humanity 
FROM player_data 
LEFT JOIN character_data ON player_data.playerUID = character_data.playerUID
";

//initialise vars
$totaltimedate = 0;
$totaltimeplogin = 0;
$totalplayers  = 0;
$totaldeadplayers  = 0;

//Database connection
$con = mysql_connect($servername, $username, $password);
//select Database
mysql_select_db("hivemind");
//open player stats file
$myfile = fopen("playerstats.txt", "w") or die("Unable to open file!");
//read database
$result = mysql_query($sql, $con);

//Global data
$sql2 = "SELECT AVG(duration) FROM character_data";
$result2 = mysql_query($sql2, $con);
//Average Life span
while ($row3 = mysql_fetch_array($result2)) {
	$b = (array_slice($row3, 0, -1));
	$avg1 = implode(',',$b);
	$averagelifespan = "Average Lifespan: ".floor($avg1)."\n";
}
//Total Zombie Kills
$sql3 = "SELECT SUM(KillsZ)FROM character_data";
$result3 = mysql_query($sql3, $con);
while ($row3 = mysql_fetch_array($result3)) {
	$b = (array_slice($row3, 0, -1));
	$avg2 = implode(',',$b);
	$totalzombiekills = "Total Zombies killed: ".$avg2."\n";
}
//Total Bandit kills
$sql4 = "SELECT SUM(KillsB)FROM character_data";
$result4 = mysql_query($sql4, $con);
while ($row3 = mysql_fetch_array($result4)) {
	$b = (array_slice($row3, 0, -1));
	$avg3 = implode(',',$b);
	$totalbanditkills = "Total Bandits Killed: ".$avg3."\n";
}
//Total Murders
$sql5 = "SELECT SUM(KillsH)FROM character_data";
$result5 = mysql_query($sql5, $con);
while ($row3 = mysql_fetch_array($result5)) {
$b = (array_slice($row3, 0, -1));
$avg4 = implode(',',$b);
$totalmurders = "Total Murders: ".$avg4."\n";
}
//Total Headshots
$sql6 = "SELECT SUM(HeadshotsZ)FROM character_data";
$result6 = mysql_query($sql6, $con);
while ($row3 = mysql_fetch_array($result6)) {
$b = (array_slice($row3, 0, -1));
$avg5 = implode(',',$b);
$totalheadshots = "Total Headshots: ".$avg5."\n";
}
//total dead players
$sql7 = "SELECT character_dead.Alive FROM character_dead";
$result7 = mysql_query($sql7, $con);
while ($row2 = mysql_fetch_array($result7)) {
	$totaldeadplayers += 1;
}
//Highest Zombie kills
$sql8="SELECT * FROM character_data LEFT JOIN player_data ON character_data.playerUID = player_data.playerUID WHERE KillsZ =(SELECT Max(KillsZ) FROM character_data)
";	
$result8 = mysql_query($sql8, $con);
while ($row2 = mysql_fetch_array($result8)) {
	$hkz2 = (array_slice($row2, 29, 1));
	$highestkillsZ = implode(',',$hkz2);
		$name1 =(array_slice($row2, 52, 1));
	$kzname = implode(',',$name1);
}
//Highest Murders
$sql9="SELECT * FROM character_data LEFT JOIN player_data ON character_data.playerUID = player_data.playerUID WHERE KillsH =(SELECT Max(KillsH) FROM character_data)";	
$result9 = mysql_query($sql9, $con);
while ($row2 = mysql_fetch_array($result9)) {
	$hkz2 = (array_slice($row2, 38, 1));
	$highestkillsH = implode(',',$hkz2);
		$name1 =(array_slice($row2, 52, 1));
	$khname = implode(',',$name1);
}
//Highest Bandit (AI) kills
$sql10="SELECT * FROM character_data LEFT JOIN player_data ON character_data.playerUID = player_data.playerUID WHERE KillsB =(SELECT Max(KillsB) FROM character_data)";	
$result10 = mysql_query($sql10, $con);
while ($row2 = mysql_fetch_array($result10)) {
	$hkz2 = (array_slice($row2, 42, 1));
	$highestkillsB = implode(',',$hkz2);
		$name1 =(array_slice($row2, 52, 1));
	$kbname = implode(',',$name1);
}
//Highest distance travelled
$sql11="SELECT * FROM character_data LEFT JOIN player_data ON character_data.playerUID = player_data.playerUID WHERE distanceFoot =(SELECT Max(distanceFoot) FROM character_data)";	
$result11 = mysql_query($sql11, $con);
while ($row2 = mysql_fetch_array($result11)) {
	$hkz2 = (array_slice($row2, 32, 1));
	$highestdistance = implode(',',$hkz2);
		$name1 =(array_slice($row2, 52, 1));
	$hdname = implode(',',$name1);
}
//Longest survived
$sql12="SELECT * FROM character_data LEFT JOIN player_data ON character_data.playerUID = player_data.playerUID WHERE duration =(SELECT Max(duration) FROM character_data)
";	
$result12 = mysql_query($sql12, $con);
while ($row2 = mysql_fetch_array($result12)) {
	$hkz22 = (array_slice($row2, 34, 1));
	$name1 =(array_slice($row2, 52, 1));
	$lsname = implode(',',$name1);
	$longest = implode(',',$hkz22);
}
//Most Deaths
$sql13="SELECT playerUID AS UID, COUNT(playerUID) AS count  FROM character_dead GROUP BY playerUID ORDER BY count DESC LIMIT 1"; 
$result13 = mysql_query($sql13, $con);
while ($row2 = mysql_fetch_array($result13)) {
	$hkz22 = (array_slice($row2, 3, 1));	
	$mostdeaths = implode('',$hkz22);
	$deathid = (array_slice($row2, 1, 1));	
	$did = implode('',$deathid);
	//get name
	$sql14="SELECT playerName FROM player_data WHERE  playerUID = '$did'"; 
	$result14 = mysql_query($sql14, $con);
	while ($row2 = mysql_fetch_array($result14)) {
	$dth = (array_slice($row2, 0, -1));
	$dthname = implode('',$dth);
	}
}




//Write highest stats to file
fwrite($myfile, $spacerline);
fwrite($myfile, $spacer);
fwrite($myfile, "Highest Zombie Kills: ".$kzname." - ".$highestkillsZ."\n");
fwrite($myfile, "Highest Murders: ".$khname." - ".$highestkillsH."\n");
fwrite($myfile, "Highest Bandit Kills: ".$kbname." - ".$highestkillsB."\n");
fwrite($myfile, "Highest Distance Travelled: ".$hdname." - ".$highestdistance."\n");
fwrite($myfile, "Survived Longest: ".$lsname." - ".$longest."\n");
fwrite($myfile, "Most deaths: ".$dthname." - ".$mostdeaths."\n");
fwrite($myfile, $spacerline);
fwrite($myfile, $spacer);
echo "Global stats: completed <br>";
//Get player data
while ($row2 = mysql_fetch_array($result)) {
	//Alive player only
	if($row2["Alive"] == 1){
		//Total Alive players
		$totalplayers += $row2["Alive"];//total alive players
		//get login time in days
		$date1 = $row2["Datestamp"];
		$date2 = $row2["LastLogin"];
		$date3 = (strtotime($date2) - strtotime($date1));
		$date4 = secondsToTime($date3);
		$totaltimedate += strtotime($date1);
		$totaltimeplogin += strtotime($date2);
		
		
		//record other info as variables
		$var1 = "Player Name: ".$row2["playerName"]."\n";
		$var2 = "PlayerUID: ".$row2["playerUID"]."\n";
		$var3 = "Generation: ".$row2["Generation"]."\n";
		$var4 = "Zombie Kills: " .$row2["KillsZ"]."\n";
		$var5 = "Headshots: " .$row2["HeadshotsZ"]."\n";
		$var6 = "Murders: " .$row2["KillsH"]."\n";
		$var7 = "Bandit Kills: " .$row2["KillsB"]."\n";
		$var8 = "Distance Travelled: ".$row2["distanceFoot"]."\n";
		$var9 = "Minutes Survived: " . $row2["duration"]."\n";
		$var10 = "Experience: " . $row2["humanity"]."\n";
		$var11 = "Total Playtime: ". $date4."\n";
		$var12 = "Inventory: ".$row2["Inventory"]."\n";
		
		//Backpack
		$var13 = explode(',',$row2["Backpack"]);
		$varb1 = (array_slice($var13, 0, -1));
		$varb2 = implode(',',$varb1);
		$varb3 = explode(']',$varb2);
		$varb4 = (array_slice($varb3, 0, 1));
		$varb5 = implode(',',$varb4);
		$varb6 = explode('[',$varb5);
		$varb7 = (array_slice($varb6, 1, 1));
		$varb8 = implode('',$varb7);
		$varb9 = explode(',',$varb8);
		$varb10 = (array_slice($varb9, 0, 1));
		$varb11 = implode('',$varb10);
		$varb12 = explode('"',$varb11);
		$varb13 = (array_slice($varb12, 1, 1));
		$varb14 = implode('',$varb13);
		$packtype = "Backpack: ".$varb14."\n";//backpack type
		//Backpack Contents
		$varcb1 = (array_slice($varb1, 1, -1));
		$varcb2 = implode('',$varcb1);
		$packcontents = "Backpack Contents: ".$varcb2."\n";;
		
		$var14 = "Worldspace: ".$row2["Worldspace"]."\n";
		
		//Medical
		$var15 = "Medical: ".$row2["Medical"]."\n";
		$med1 = explode(',',$row2["Medical"]);
		$med2 = (array_slice($med1, 7, 1));
		$med3 = implode(',',$med2);
		$playerblood = "Blood: ".$med3."\n";
		$med4 = (array_slice($med1, 2, 1));
		$med5 = implode(',',$med4);
		$playerinfected ="Infected: ".$med5."\n";
		
		//Vigils
		$var16 = explode(',',$row2["Inventory"]);
		$var17 = (array_slice($var16, -1, 1));
		$var18 = implode(',',$var17);
		$var19 = explode(']',$var18);
		$var20 = (array_slice($var19, -2, 1));
		$var21 = implode(',',$var20);
		$playervigils ="Vigils: ".$var21."\n";

		//Write player stats to file
		fwrite($myfile, $var1);//name
		fwrite($myfile, $var2);//UID
		fwrite($myfile, $playervigils);//vigils
		fwrite($myfile, $var3);//Generation
		fwrite($myfile, $var4);//Zombie Kills
		fwrite($myfile, $var5);//Headshots
		fwrite($myfile, $var6);//Murders
		fwrite($myfile, $var7);//Bandit Kills
		fwrite($myfile, $var8);//Distance travelled
		fwrite($myfile, $var9);//Minutes Survived
		fwrite($myfile, $var10);//Experience
		fwrite($myfile, $var11);//Total playtime
		//fwrite($myfile, $var12);//Inventory
		//fwrite($myfile, $packtype);//Backpack type
		//fwrite($myfile, $packcontents);//Backpack contents
		//fwrite($myfile, $var14);//Worldspace
		//fwrite($myfile, $var15);//Medical
		//fwrite($myfile, $playerblood);//Playerblood
		//fwrite($myfile, $playerinfected);//Infection
		fwrite($myfile, $spacer);	
    }
}
echo "Player stats: completed <br>";
//Global time played
$totaltime = ($totaltimeplogin - $totaltimedate);
$totaltimeplayed = secondsToTime($totaltime);

//Write Global stats to file
fwrite($myfile, $spacerline);
fwrite($myfile, $spacer);
	fwrite($myfile, "Total Alive Players: ".$totalplayers."\n");
	fwrite($myfile, "Total Player Deaths: ".$totaldeadplayers."\n");
	fwrite($myfile, $averagelifespan);
	fwrite($myfile, $totalzombiekills);
	fwrite($myfile, $totalbanditkills);
	fwrite($myfile, $totalmurders);
	fwrite($myfile, $totalheadshots);
	fwrite($myfile, "Global Playtime: ".$totaltimeplayed);
fwrite($myfile, $spacer);
fwrite($myfile, $spacerline);
fwrite($myfile, $spacer);



echo "stats saved to file.<br>";
//close text file
fclose($myfile);

?>
<!-- 
MEDICAL DATA break down

				infected									blood
[false,	false,	false,		false,	false,	false,	false,	12000,	[],	[0,0],	0,	[74,27.616]]
 -->