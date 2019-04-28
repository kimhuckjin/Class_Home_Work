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

				cout << "돈이 부족해 탈수없습니다." << endl;

				moneycheck = false;

			}

			else if (money > discount) {

				money = money - (fare - discount);

				if (money > 0) {
					cout << "버스 요금	: " << fare << endl;
					cout << "남은 소지금 : " << money << endl;

				}

				else if (money <= 0) {

					cout << "돈이 없습니다." << endl;

					moneycheck = false;

				}

			}

		}

		else if (13 < age && age < 20) {

			discount = (fare * (teenager / 100));

			if (money < discount) {

				cout << "돈이 부족해 탈수없습니다." << endl;
				moneycheck = false;

			}

			else if (money > discount) {

				money = money - (fare - discount);

				if (money > 0) {

					cout << "버스 요금	: " << fare << endl;
					cout << "남은 소지금 : " << money << endl;

				}

				else if (money == 0) {

					cout << "돈이 없습니다." << endl;

					moneycheck = false;

				}

			}

		}

		else if (19 < age) {

			discount = (fare * (adult / 100));

			if (money < discount) {

				cout << "돈이 부족해 탈수없습니다." << endl;

				moneycheck = false;

			}

			else if (money > discount) {

				money = money - (fare - discount);

				if (money > 0) {

					cout << "버스 요금	: " << fare << endl;
					cout << "남은 소지금 : " << money << endl;

				}

				else if (money == 0) {

					cout << "돈이 없습니다." << endl;

					moneycheck = false;

				}

			}

		}

		return money;

	}

	else {

		cout << "돈이 부족해 탈수없습니다." << endl;

		exit;

	}

}

void BusChangeMachine::Info() {

	cout << "\n-------------Info-------------" << endl;
	cout << "\n1. 버스 요금 : " << fare << endl;
	cout << "\n2. 어른 할인율 : " << adult << "%" << endl;
	cout << "\n3. 청소년 할인율 : " << teenager << "%" << endl;
	cout << "\n4. 어린이 할인율 : " << child << "%" << endl;
	cout << "\n5. 나의 나이 : " << age << endl;
	cout << "\n6. 소지금	: " << money << endl;
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




