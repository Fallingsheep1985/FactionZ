diag_log ( "[AGN] Starting Base Protection!" );

[] execVM 'custombases\CAGN\Faction1BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction2BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction3BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction4BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction5BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction6BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction7BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction8BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction9BaseProtection.sqf';
[] execVM 'custombases\CAGN\Faction10BaseProtection.sqf';
//Remove AI from bases
[] execVM "custombases\CAGN\SafeZonesAI.sqf";
//Outofbounds
[] execVM 'custombases\CAGN\outofbounds.sqf';
//Vehicle godmode
[] execVM "custombases\CAGN\safezonevehicle.sqf";

diag_log ( "[AGN] Base Protection Loaded!" );
