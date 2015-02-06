<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Untitled Document</title>
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
//read database
$result = mysql_query($sql, $con);

//Global data
$sql2 = "SELECT AVG(duration) FROM character_data";
$result2 = mysql_query($sql2, $con);
//Average Life span
while ($row3 = mysql_fetch_array($result2)) {
	$b = (array_slice($row3, 0, -1));
	$avg1 = implode(',',$b);
	$arr1 = str_split($avg1, 1);
	$a1 = (array_slice($arr1, 0, 1));
	$a2 = (array_slice($arr1, 1, 1));
	$a3 = (array_slice($arr1, 2, 1));
	$a4 = (array_slice($arr1, 3, 1));
	$b1 = implode('',$a1);
	$b2 = implode('',$a2);
	$b3 = implode('',$a3);
	$b4 = implode('',$a4);
	$averagelifespan = floor($avg1)."\n";
}
//Total Zombie Kills
$sql3 = "SELECT SUM(KillsZ)FROM character_data";
$result3 = mysql_query($sql3, $con);
while ($row3 = mysql_fetch_array($result3)) {
	$b = (array_slice($row3, 0, -1));
	$avg2 = implode(',',$b);
	$totalzombiekills = $avg2."\n";
}
//Total Bandit kills
$sql4 = "SELECT SUM(KillsB)FROM character_data";
$result4 = mysql_query($sql4, $con);
while ($row3 = mysql_fetch_array($result4)) {
	$b = (array_slice($row3, 0, -1));
	$avg3 = implode(',',$b);
	$totalbanditkills = $avg3."\n";
}
//Total Murders
$sql5 = "SELECT SUM(KillsH)FROM character_data";
$result5 = mysql_query($sql5, $con);
while ($row3 = mysql_fetch_array($result5)) {
$b = (array_slice($row3, 0, -1));
$avg4 = implode(',',$b);
$totalmurders = $avg4."\n";
}
//Total Headshots
$sql6 = "SELECT SUM(HeadshotsZ)FROM character_data";
$result6 = mysql_query($sql6, $con);
while ($row3 = mysql_fetch_array($result6)) {
$b = (array_slice($row3, 0, -1));
$avg5 = implode(',',$b);
$totalheadshots = $avg5."\n";
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
//Get player data
while ($row2 = mysql_fetch_array($result)) {
	if($row2["Alive"] == 1){
		//Total Alive players
		$totalplayers += $row2["Alive"];//total alive players
	}
	//get login time in days
	$date1 = $row2["Datestamp"];
	$date2 = $row2["LastLogin"];
	$date3 = (strtotime($date2) - strtotime($date1));
	$date4 = secondsToTime($date3);
	$totaltimedate += strtotime($date1);
	$totaltimeplogin += strtotime($date2);

}
//Global time played
$totaltime = ($totaltimeplogin - $totaltimedate);
$totaltimeplayed = secondsToTime($totaltime);

?>

<body>

<div id="titlebar">
<b>The Remaining</b>
</div>
<div>
<center>
<img src="images\woodpanel.png" alt="3" width="250" height="93">
<?php include 'averagelife.php';?>
</center>
</div>
<div id="Globalstats">
<center>
<br>
<img src="images\globalstats.png" alt="Leaderboard" width="250" height="93">
<table class="fixed_table">
<tr><td>Total Alive Players:</td><td align="center"><?php echo $totalplayers; ?></td></tr>
<tr><td>Total Player Deaths:</td><td align="center"><?php echo $totaldeadplayers; ?></td></tr>
<tr><td>Total Zombies Killed:</td><td align="center"><?php echo $totalzombiekills; ?></td></tr>
<tr><td>Total Bandits Killed:</td><td align="center"><?php echo $totalbanditkills; ?></td></tr>
<tr><td>Total Murders:</td><td align="center"><?php echo $totalmurders; ?></td></tr>
<tr><td>Total Headshots:</td><td align="center"><?php echo $totalheadshots; ?></td></tr>
<tr><td>Global Playtime:</td><td align="center"><?php echo $totaltimeplayed; ?></td></tr>
</table>
</center>
</div>
<div id="leaderboards">
<center>
<br>
<img src="images\leaderboard.png" alt="Leaderboard" width="250" height="93">
<table class="fixed_table">
<tr><td>Most Zombie Kills:</td><td align="center"><?php echo $kzname." - ".$highestkillsZ; ?></td></tr>
<tr><td>Most Murders:</td><td align="center"><?php echo $khname." - ".$highestkillsH; ?></td></tr>
<tr><td>Most Bandit kills:</td><td align="center"><?php echo $kbname." - ".$highestkillsB; ?></td></tr>
<tr><td>Travelled Furthest:</td><td align="center"><?php echo $hdname." - ".$highestdistance; ?></td></tr>
<tr><td>Survived Longest:</td><td align="center"><?php echo $lsname." - ".$longest; ?></td></tr>
<tr><td>Most deaths:</td><td align="center"><?php echo $dthname." - ".$mostdeaths; ?></td></tr>
</table>
</center>
</div>
<div id="playerstats">
<a href="loadplayerstats.php">Indvidual Stats</a>
</div>


</body>
</html>