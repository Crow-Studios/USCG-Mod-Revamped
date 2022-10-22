params ["_hook", "_vehicle", "_offset"];

private _myRope = ropeCreate [_hook, _offset, _vehicle, "SlingLoadCargo1", 1, []];
private _myRope = ropeCreate [_hook, _offset, _vehicle, "SlingLoadCargo2", 1, []];
private _myRope = ropeCreate [_hook, _offset, _vehicle, "SlingLoadCargo3", 1, []];
private _myRope = ropeCreate [_hook, _offset, _vehicle, "SlingLoadCargo4", 1, []];

_hook setVariable ["stretcherDetached", false, true];