//Vigil Trader Setup

/*

2. Finish Ammo Trader
3. Redo trade menus into dialog ones
4. Add sell option to traders
5. create small trader camp (it will have stages that can be added removed by us, eg medical tent adds medic trader, garage adds mechanical trader etc)
6. Create a Banker/safe storage for vigils 

player addWeapon 'NVGoggles';
player addWeapon 'ItemCompass';
player addWeapon 'ItemHatchet';
player addWeapon 'ItemKnife';
player addWeapon 'Itemmatchbox';
player addWeapon 'Itemetool';
player addWeapon 'Itemtoolbox';
player addWeapon 'ItemSledge';
player addWeapon 'ItemWatch';
player addWeapon 'ItemGPS';

_result = [player,_item] call BIS_fnc_invAdd;
    if (_result) then {
        cutText [format["You now have a %1!", _itemName], "PLAIN DOWN"];
    }else{
        cutText [format["I cannot give you %1, not enough room in your pockets sir!", _itemName], "PLAIN DOWN"];
    }