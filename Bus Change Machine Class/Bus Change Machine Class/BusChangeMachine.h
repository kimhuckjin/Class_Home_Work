#pragma once

#include "BusChangeMachineClass.h"

#include <iostream>
using namespace std;

int ChangeMachine() {

	int a, b, c, d, e, f, g;

	cout << "Please enter bus fare.\n" << endl;

	cin >> f;

	cout << "\nPlease enter adult discount rate.\n" << endl;

	Introerror1:

	cin >> a;

	if (a < 0 || a > 100) {

		cout << "\nYou can chose 0 ~ 100! Please re-enter the number.\n" << endl;

		goto Introerror1;

	}

	cout << "\nPlease enter teenager discount rate.\n" << endl;

	Introerror2:

	cin >> b;

	if (b < 0 || b > 100) {

		cout << "\nYou can chose 0 ~ 100! Please re-enter the number.\n" << endl;

		goto Introerror2;

	}

	cout << "\nPlease enter child discount rate.\n" << endl;

	Introerror3:

	cin >> c;

	if (c < 0 || c > 100) {

		cout << "\You can chose 0 ~ 100! Please re-enter the number.\n" << endl;

		goto Introerror3;

	}

	cout << "\nPlease enter your money.\n" << endl;

	cin >> d;

	cout << "\nPlease eneter your age.\n" << endl;

	Introerror4:

	cin >> e;

	if (e < 6) {

		cout << "\nDo not cost under the 6age. Please re-enter the number.\n" << endl;

		goto Introerror4;

	}

	else if (e > 95) {

		cout << "\nThe age is too old! Please re-enter the number.\n" << endl;

		goto Introerror4;

	}

	BusChangeMachine Test(a, b, c, d, e, f);

	menureset1:

	cout << "\n-----------------Menu-----------------" << endl;
	cout << "\n1. Pay" << endl;
	cout << "\n2. Info" << endl;
	cout << "\n3. Quit" << endl;
	cout << "\n--------------------------------------\n" << endl;

	menureset2:

	cin >> g;

	switch (g){

	case 1:
		
		Test.MoneyCheck();

		goto menureset1;

		break;

	case 2:

		Test.Info();

		goto menureset1;

		break;

	case 3:

		cout << "ByeBye" << endl;

		break;

	default:

		cout << "\nError! Please re-enter the number.\n" << endl;

		goto menureset2;

		break;

	}

	return 0;

}