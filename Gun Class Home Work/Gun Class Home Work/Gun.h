#pragma once

#include "GunClass.h"

#include <iostream>
using namespace std;

int Gun() {

	int a, b, c, d;

	cout << "Please enter your ammo in magazine" << endl;

	cin >> a;

	cout << "Please enter your gun heat limit" << endl;

	cin >> b;

	cout << "Please enter your gun heat point when you fire" << endl;

	cin >> c;

	GunClass Test(a, b, c);

Reset:

	cout << "\n-------------Menu-------------" << endl;
	cout << "1. Fire" << endl;
	cout << "2. Reload" << endl;
	cout << "3. Cooling the gun" << endl;
	cout << "4. Gun Info" << endl;
	cout << "------------------------------\n" << endl;

MenuReset:

	cin >> d;

	switch (d) {

	case 1:

		Test.Fire(a);

		goto Reset;

		break;

	case 2:

		Test.Reload(a);

		goto Reset;

		break;

	case 3:

		Test.GunCooling();

		goto Reset;

		break;

	case 4:

		Test.Info();

		goto Reset;

		break;

	default:

		cout << "\nError! Please reenter the number" << endl;

		goto MenuReset;

		break;

	}

	return 0;

}