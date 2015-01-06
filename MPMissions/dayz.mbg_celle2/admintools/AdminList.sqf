// Epoch Admin Lists

//Super Admins
SuperAdminList = [
"76561197960475835", // <Your In-Game Name here>
"76561198046457653", // <S-Admin In-Game Name>
"76561198087015545"
];
//Admins
AdminList = [
"76561198087015545", // <Admin In-Game Name>
"999999999" // <Admin In-Game Name>
];
//Mods
ModList = [
"76561198087015545", // <Moderator In-Game Name>
"999999999" // <Moderator In-Game Name>
];

//set adminlist to be all admins
AdminList = AdminList + SuperAdminList; 

broadcastToolUse = false;

	logMajorTool = false;

	logMinorTool = false;

tempList = [];

adminListLoaded = true;
diag_log("Admin Tools: AdminList.sqf loaded");
