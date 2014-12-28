/* Single Currency 3.0 uses storages to store money which can be accessed by anyone if open of course (safe,lockbox). Each storage has his own money, so no global access. */

// Name of your currency
CurrencyName = "Vigils"; 

// Objects that can hold money. Vehicles are added automaticly. Size of  money capacity is depended on ammount of magazines the object can hold.
ZSC_MoneyStorage = ["StorageShed_DZ","TentStorage","TentStorageDomed","TentStorageDomed2"];

// Multiplier how much money an object can hold. This number X ammount of magazines it can hold. ( so URAL -> 500 items * 1000 = 5 MIL cash).
ZSC_MaxMoneyInStorageMultiplier = 1000;


/* IF YOU USE different mods like P4L it's recommended to do changes yourself or it wont work */

