<?php
//Database Details
$servername = "localhost";
$username = "dayz";
$password = "dayz";
$dbname = "hivemind";
//SQL query
$sql = "
SELECT player_data.playerUID, player_data.playerName,character_data.Alive,character_data.Datestamp,character_data.Medical,character_data.Inventory,character_data.Worldspace,character_data.Backpack, character_data.LastLogin, character_data.Generation, character_data.KillsH,character_data.KillsB, character_data.KillsZ, character_data.distanceFoot, character_data.HeadshotsZ, character_data.duration, character_data.humanity 
FROM player_data 
LEFT JOIN character_data ON player_data.playerUID = character_data.playerUID
";
//Database connection
$con = mysql_connect($servername, $username, $password);
//select Database
mysql_select_db("hivemind");
//read database
$result = mysql_query($sql, $con);
//open player stats file
$myfile = fopen("playerstats.txt", "w") or die("Unable to open file!");
//cycle thru data
while ($row2 = mysql_fetch_array($result)) {
	//Alive player only
	if($row2["Alive"] == 1){
		//get login time in days
		$date1 = $row2["Datestamp"];
		$date2 = $row2["LastLogin"];
		$date3 = (strtotime($date2) - strtotime($date1));
		$date4 = floor($date3/(3600*24));
		//record other info as variables
		$var1 = "Player Name: " . $row2["playerName"]."\n";
		$var2 = "PlayerUID: " .$row2["playerUID"]."\n";
		$var3 = "Generation: " .$row2["Generation"]."\n";
		$var4 = "Zombie Kills: " . $row2["KillsZ"]."\n";
		$var5 = "Headshots: " . $row2["HeadshotsZ"]."\n";
		$var6 = "Murders: " . $row2["KillsH"]."\n";
		$var7 = "Bandit Kills: " . $row2["KillsB"]."\n";
		$var8 = "Distance Travelled: " . $row2["distanceFoot"]."\n";
		$var9 = "Minutes Survived: " . $row2["duration"]."\n";
		$var10 = "Experience: " . $row2["humanity"]."\n";
		$var11 = "Days Survived: ". $date4."\n";
		$var12 = "Inventory: ".$row2["Inventory"]."\n";
		$var13 = "Backpack: ".$row2["Backpack"]."\n";
		$var14 = "Worldspace: ".$row2["Worldspace"]."\n";
		$var15 = "Medical: ".$row2["Medical"]."\n";
		//overly complicated find vigil amount
		$var16 = explode(',',$row2["Inventory"]);
		$var17 = (array_slice($var16, -1, 1));
		$var18 = implode(',',$var17);
		$var19 = explode(']',$var18);
		$var20 = (array_slice($var19, -2, 1));
		$var21 = implode(',',$var20);
		$var22 ="Vigils: ".$var21."\n\n";
		

		//write data to text file
		fwrite($myfile, $var1);
		fwrite($myfile, $var2);
		fwrite($myfile, $var3);
		fwrite($myfile, $var4);
		fwrite($myfile, $var5);
		fwrite($myfile, $var6);
		fwrite($myfile, $var7);
		fwrite($myfile, $var8);
		fwrite($myfile, $var9);
		fwrite($myfile, $var10);
		fwrite($myfile, $var11);
		fwrite($myfile, $var12);
		fwrite($myfile, $var13);
		fwrite($myfile, $var14);
		fwrite($myfile, $var15);
		//vigils
		fwrite($myfile, $var22);
    }
}
echo "stats written to file!";
//close text file
fclose($myfile);

?>
<!-- 
MEDICAL DATA break down

				infected									blood
[false,	false,	false,		false,	false,	false,	false,	12000,	[],	[0,0],	0,	[74,27.616]]
 -->