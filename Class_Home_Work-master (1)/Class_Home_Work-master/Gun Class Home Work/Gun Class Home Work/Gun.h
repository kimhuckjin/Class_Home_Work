#pragma once

#include "GunClass.h"

#include <iostream>
using namespace std;

int Gun() {
regame:
	int a, b, c, d;

	cout << "�Ѿ� �� ���� : " ;

	cin >> a;

	cout << "�� �ִ�µ� ���� : ";

	cin >> b;

	cout << "��ݽ� ������ �µ� : " ;

	cin >> c;

	GunClass Test(a, b, c);

Reset:

	cout << "\n-------------Menu-------------" << endl;
	cout << "1. �ѽ��" << endl;
	cout << "2. ������" << endl;
	cout << "3. ������" << endl;
	cout << "4. ����" << endl;
	cout << "5. �缳�� " << endl;
	cout << "6. ���� " << endl;
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

		cout << "�߸��Է��ϼ̽��ϴ�." << endl;
		system("pause");
		system("cls");
		goto MenuReset;

		break;

	}

	return 0;

}