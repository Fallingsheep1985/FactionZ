<?php
$servername = "localhost";
$username = "dayz";
$password = "dayz";
$dbname = "hivemind";

//HIDE UID
$hideUID = true;

$sql = "
SELECT player_data.playerUID, player_data.playerName,character_data.Alive,character_data.Datestamp, character_data.LastLogin, character_data.Generation, character_data.KillsH,character_data.KillsB, character_data.KillsZ, character_data.distanceFoot, character_data.HeadshotsZ, character_data.duration, character_data.humanity 
FROM player_data 
LEFT JOIN character_data ON player_data.playerUID = character_data.playerUID
";

$con = mysql_connect($servername, $username, $password);
mysql_select_db("hivemind");
$result = mysql_query($sql, $con);

while ($row2 = mysql_fetch_array($result)) {
if($row2["Alive"] == 1){
$date1 = $row2["Datestamp"];
$date2 = $row2["LastLogin"];
$date3 = (strtotime($date2) - strtotime($date1));
$date4 = floor($date3/(3600*24));


		echo "Player Name: " . $row2["playerName"]."<br>";
		if($hideUID = false){
		echo "PlayerUID: " .$row2["playerUID"]."<br>";
		} else{
		echo "PlayerUID: XXXXXXXX <br>";
		}
		echo "Generation: " .$row2["Generation"]."<br>";
		echo "Zombie Kills: " . $row2["KillsZ"]."<br>";
		echo "Headshots: " . $row2["HeadshotsZ"]."<br>";
		echo "Murders: " . $row2["KillsH"]."<br>";
		echo "Bandit Kills: " . $row2["KillsB"]."<br>";
		echo "Distance Travelled: " . $row2["distanceFoot"]."<br>";
		echo "Minutes Survived: " . $row2["duration"]."<br>";
		echo "Experience: " . $row2["humanity"]."<br>";
		echo "Days Survived: ". $date4 ."<br><br>";

    }
	}

?>