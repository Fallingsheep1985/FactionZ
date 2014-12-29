if(isServer) exitWith {};
private["_build"];
_build = 3;
// don't initialize more than once
if(isNil "CELLE_CLICK_ACTIONS_BUILD") then {
    diag_log text "CLICK ACTIONS: loading...";
    call compile preprocessFileLineNumbers "click_actions\config.sqf";
    CELLE_CLICK_ACTIONS_BUILD = _build;
} else {
    if(_build != CELLE_CLICK_ACTIONS_BUILD) then {
        diag_log text format["CLICK ACTIONS: tried to load build #%1 but #%2 already loaded!",_build,CELLE_CLICK_ACTIONS_BUILD];
    } else {
        diag_log text "CLICK ACTIONS: already loaded (not an error)!";
    };
};