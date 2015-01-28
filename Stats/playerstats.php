<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Player Stats</title>
</head>
<style>
#titlebar{
	color:red;
	text-align:center;
	font-family:Cambria, "Hoefler Text", "Liberation Serif", Times, "Times New Roman", serif;
	font-size:25px;
}
#Globalstats{
	color:red;
	text-align:center;
	font-family:Cambria, "Hoefler Text", "Liberation Serif", Times, "Times New Roman", serif;
	font-size:20px;
}
#leaderboards{
	color:red;
	text-align:center;
	font-family:Cambria, "Hoefler Text", "Liberation Serif", Times, "Times New Roman", serif;
	font-size:20px;
}
#playerstats{
	color:red;
	text-align:center;
	font-family:Cambria, "Hoefler Text", "Liberation Serif", Times, "Times New Roman", serif;
	font-size:20px;
}
.fixed_table{
	color:white;
	background-image:url(images/tablebg1.png);
	background-repeat:repeat;
}
/* unvisited link */
a:link {
    color: #FF0000;
	text-decoration:none;
}

/* visited link */
a:visited {
    color: #00FF00;
	text-decoration:none;
}

/* mouse over link */
a:hover {
    color: #FF00FF;
	text-decoration:none;
}

/* selected link */
a:active {
    color: #0000FF;
	text-decoration:none;
}
html { 
  background: url(images/background.jpg) no-repeat center center fixed; 
  -webkit-background-size: cover;
  -moz-background-size: cover;
  -o-background-size: cover;
  background-size: cover;
}

</style>
<body>
<div id="playerstats">
<center>
<br>
<img src="images\playerstats.png" alt="3" width="250" height="93">
<?php
//Functions
function secondsToTime($seconds) {
    $dtF = new DateTime("@0");
    $dtT = new DateTime("@$seconds");
    return $dtF->diff($dtT)->format('%a days, %h hours, %i minutes and %s seconds');
}
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
//Database connection
$con = mysql_connect($servername, $username, $password);
//select Database
mysql_select_db("hivemind");
//read database
$result = mysql_query($sql, $con);
while ($row2 = mysql_fetch_array($result)) {
	//Alive player only
	if($row2["Alive"] == 1){
		//get login time in days
		$date1 = $row2["Datestamp"];
		$date2 = $row2["LastLogin"];
		$date3 = (strtotime($date2) - strtotime($date1));
		$date4 = secondsToTime($date3);
		
		
		//record other info as variables
		$var1 = $row2["playerName"]."\n";
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
echo "<div><center><table class='fixed_table'>
<tr><td align='center'><b>".$var1."</b></td></tr>";		
echo "<tr><td>".$var2."</td></tr>";
echo "<tr><td>".$playervigils."</td></tr>";
echo "<tr><td>".$var3."</td></tr>"; 
echo "<tr><td>".$var4."</td></tr>"; 
echo "<tr><td>".$var5."</td></tr>"; 
echo "<tr><td>".$var6."</td></tr>"; 
echo "<tr><td>".$var7."</td></tr>"; 
echo "<tr><td>".$var8."</td></tr>"; 
echo "<tr><td>".$var9."</td></tr>"; 
echo "<tr><td>".$var10."</td></tr>";
echo "<tr><td>".$var11."</td></tr>";
echo "</table></center></div>";
echo "<br>";
	}
}
?>
</center>
</div>
<div id="playerstats">
<a href="loadstats.php">Global Stats</a>
</div>
</body>
</html>