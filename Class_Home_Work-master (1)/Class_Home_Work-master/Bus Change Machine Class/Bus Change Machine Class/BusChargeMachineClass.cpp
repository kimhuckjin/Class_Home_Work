#pragma once
#include "pch.h"
#include "BusChangeMachineClass.h"
using namespace std;




BusChangeMachine::BusChangeMachine(int a, int b, int c, int d, int e, int f) {

	adult = a;
	teenager = b;
	child = c;
	money = d;
	age = e;
	fare = f;
}

int BusChangeMachine::Pay() {

	if (moneycheck == true) {

		if (age < 14) {

			discount = (fare * (child / 100));

			if (money < discount) {

				cout << "���� ������ Ż�������ϴ�." << endl;

				moneycheck = false;

			}

			else if (money > discount) {

				money = money - (fare - discount);

				if (money > 0) {
					cout << "���� ���	: " << fare << endl;
					cout << "���� ������ : " << money << endl;

				}

				else if (money <= 0) {

					cout << "���� �����ϴ�." << endl;

					moneycheck = false;

				}

			}

		}

		else if (13 < age && age < 20) {

			discount = (fare * (teenager / 100));

			if (money < discount) {

				cout << "���� ������ Ż�������ϴ�." << endl;
				moneycheck = false;

			}

			else if (money > discount) {

				money = money - (fare - discount);

				if (money > 0) {

					cout << "���� ���	: " << fare << endl;
					cout << "���� ������ : " << money << endl;

				}

				else if (money == 0) {

					cout << "���� �����ϴ�." << endl;

					moneycheck = false;

				}

			}

		}

		else if (19 < age) {

			discount = (fare * (adult / 100));

			if (money < discount) {

				cout << "���� ������ Ż�������ϴ�." << endl;

				moneycheck = false;

			}

			else if (money > discount) {

				money = money - (fare - discount);

				if (money > 0) {

					cout << "���� ���	: " << fare << endl;
					cout << "���� ������ : " << money << endl;

				}

				else if (money == 0) {

					cout << "���� �����ϴ�." << endl;

					moneycheck = false;

				}

			}

		}

		return money;

	}

	else {

		cout << "���� ������ Ż�������ϴ�." << endl;

		exit;

	}

}

void BusChangeMachine::Info() {

	cout << "\n-------------Info-------------" << endl;
	cout << "\n1. ���� ��� : " << fare << endl;
	cout << "\n2. � ������ : " << adult << "%" << endl;
	cout << "\n3. û�ҳ� ������ : " << teenager << "%" << endl;
	cout << "\n4. ��� ������ : " << child << "%" << endl;
	cout << "\n5. ���� ���� : " << age << endl;
	cout << "\n6. ������	: " << money << endl;
	cout << "\n------------------------------\n" << endl;

}

bool BusChangeMachine:: MoneyCheck() {

	if (money == 0) {

		moneycheck = false;

		return Pay();

	}

	else {

		moneycheck = true;

		return Pay();

	}

}




