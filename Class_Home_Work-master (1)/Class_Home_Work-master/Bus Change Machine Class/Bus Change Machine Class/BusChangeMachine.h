#pragma once

#include "BusChangeMachineClass.h"

#include <iostream>
using namespace std;

int Start() {

	int a, b, c, d, e, f, g;
Introerror0:

	cout << "��������� �Է� : ";

	cin >> f;

	cout << "� ���� : ";
	Introerror1:

	cin >> a;

	if (a < 0 || a > 100) {

		cout << "\nYou can chose 0 ~ 100! Please re-enter the number.\n" << endl;

		goto Introerror1;

	}

	cout << "û�ҳ� ���� : ";

	Introerror2:

	cin >> b;

	if (b < 0 || b > 100) {

		cout << "1~100������ ���� �Է��ϼ���." << endl;

		goto Introerror2;

	}

	cout << "��� ���� : ";

	Introerror3:

	cin >> c;

	if (c < 0 || c > 100) {

		cout << "1~100������ ���� �Է��ϼ���." << endl;

		goto Introerror3;

	}

	cout << "������ �Է� : ";

	cin >> d;

	cout << "����� ���̴�? : ";

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
		cout << "\n1. ������� ����" << endl;
		cout << "\n2. ��������" << endl;
		cout << "\n3. �ٽ��ϱ�" << endl;
		cout << "\n4. ������" << endl;
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

			cout << "�߸��Է��ϼ̽��ϴ�." << endl;
			system("pause");

			break;

		}

	}
	return 0;

}