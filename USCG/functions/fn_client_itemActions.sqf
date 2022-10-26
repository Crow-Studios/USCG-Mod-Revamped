params ["_unit"];

["USCG_Stretcher_Item", "Attach Stokes Basket To Hoist", [1,1,1,1], "", true, true, false, [(vehicle _unit), _unit], "uscg_mod_fnc_deployStretcher"] spawn uscg_mod_fnc_client_addItemActions;

["USCG_Basket_Item", "Attach Basket To Hoist", [1,1,1,1], "", true, true, false, [(vehicle _unit), _unit], "uscg_mod_fnc_deployBasket"] spawn uscg_mod_fnc_client_addItemActions;

/*["lost_hope_mag_bile", "Use Bile", [], "", true, true, true, [_unit, EAST, 60], "lost_hope_mod_fnc_client_useBile"] spawn lost_hope_mod_fnc_client_addItemActions*/