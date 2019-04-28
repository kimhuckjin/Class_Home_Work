#pragma once

#include "BusChangeMachineClass.h"

#include <iostream>
using namespace std;

int Start() {

	int a, b, c, d, e, f, g;
Introerror0:

	cout << "버스요금을 입력 : ";

	cin >> f;

	cout << "어른 할인 : ";
	Introerror1:

	cin >> a;

	if (a < 0 || a > 100) {

		cout << "\nYou can chose 0 ~ 100! Please re-enter the number.\n" << endl;

		goto Introerror1;

	}

	cout << "청소년 할인 : ";

	Introerror2:

	cin >> b;

	if (b < 0 || b > 100) {

		cout << "1~100사이의 수를 입력하세요." << endl;

		goto Introerror2;

	}

	cout << "어린이 할인 : ";

	Introerror3:

	cin >> c;

	if (c < 0 || c > 100) {

		cout << "1~100사이의 수를 입력하세요." << endl;

		goto Introerror3;

	}

	cout << "소지금 입력 : ";

	cin >> d;

	cout << "당신의 나이는? : ";

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

	while (1)
	{
		system("cls");
		cout << "\n-----------------Menu-----------------" << endl;
		cout << "\n1. 버스요금 지불" << endl;
		cout << "\n2. 정보보기" << endl;
		cout << "\n3. 다시하기" << endl;
		cout << "\n4. 나가기" << endl;
		cout << "\n--------------------------------------\n" << endl;

		cin >> g;

		switch (g) {

		case 1:
			system("cls");
			Test.MoneyCheck();

			system("pause");
			break;

		case 2:
			system("cls");
			Test.Info();
			system("pause");

			break;

		case 3:
			system("cls");
			goto Introerror0;

		case 4:

			cout << "ByeBye" << endl;
			exit(0);

		default:

			cout << "잘못입력하셨습니다." << endl;
			system("pause");

			break;

		}

	}
	return 0;

}