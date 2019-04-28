#pragma once

#include "GunClass.h"

#include <iostream>
using namespace std;

int Gun() {
regame:
	int a, b, c, d;

	cout << "총알 수 설정 : " ;

	cin >> a;

	cout << "총 최대온도 설정 : ";

	cin >> b;

	cout << "사격시 오르는 온도 : " ;

	cin >> c;

	GunClass Test(a, b, c);

Reset:

	cout << "\n-------------Menu-------------" << endl;
	cout << "1. 총쏘기" << endl;
	cout << "2. 재장전" << endl;
	cout << "3. 식히기" << endl;
	cout << "4. 정보" << endl;
	cout << "5. 재설정 " << endl;
	cout << "6. 종료 " << endl;
	cout << "------------------------------\n" << endl;

MenuReset:

	cin >> d;

	switch (d) {

	case 1:

		Test.Fire(a);
		system("pause");
		system("cls");

		goto Reset;

		break;

	case 2:

		Test.Reload(a);
		system("pause");
		system("cls");
		goto Reset;

		break;

	case 3:

		Test.GunCooling();
		system("pause");
		system("cls");
		goto Reset;

		break;

	case 4:

		Test.Info();
		system("pause");
		system("cls");
		goto Reset;

		break;

	case 5:
		system("cls");
		goto regame;

		break;

	case 6:

		exit(1);
	default:

		cout << "잘못입력하셨습니다." << endl;
		system("pause");
		system("cls");
		goto MenuReset;

		break;

	}

	return 0;

}