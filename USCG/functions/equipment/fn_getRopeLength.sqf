private _ropeLength = ctrlText 1100;

hint str _ropeLength;

[parseNumber _ropeLength, (vehicle player)] call uscg_mod_fnc_setRopeLength;