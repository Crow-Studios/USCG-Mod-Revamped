private _allowedHooks =
[
	"USCG_Stretcher",
	"USCG_RescueBasket",
	"vtx_hook"
];

{
	private _hookName = getText (configFile >> "cfgVehicles" >> _x >> "displayName");
	lbAdd [2200, _hookName];
	lbSetData [2200, _forEachIndex, _x];
} forEach _allowedHooks;