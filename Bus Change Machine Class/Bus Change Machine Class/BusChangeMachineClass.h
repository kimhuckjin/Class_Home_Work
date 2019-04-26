#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

class BusChangeMachine{

public:

	BusChangeMachine(int a, int b, int c, int d, int e, int f) {

		adult = a;

		teenager = b;

		child = c;

		money = d;

		age = e;

		fare = f;

	}

	int Pay() {

		if (moneycheck == true) {

			if (age < 14) {

				discount = (fare * (child / 100));

				if (money < discount) {

					cout << "\nYou are short of money. You can't ride the bus\n" << endl;

					moneycheck = false;

				}

				else if (money > discount){

					money = money - (fare - discount);

					if (money > 0) {

						cout << "\nYour remaining money : " << money << "\n" << endl;

					}

					else if (money == 0) {

						cout << "\nYour money is ZERO!\n" << endl;

						moneycheck = false;

					}

				}

			}

			else if (13 < age && age < 20) {

				discount = (fare * (teenager / 100));

				if (money < discount) {

					cout << "\nYou are short of money. You can't ride the bus\n" << endl;

					moneycheck = false;

				}

				else if(money > discount){

					money = money - (fare - discount);

					if (money > 0) {

						cout << "\nYour remaining money : " << money << "\n" << endl;

					}

					else if (money == 0) {

						cout << "\nYour money is ZERO!\n" << endl;

						moneycheck = false;

					}

				}

			}

			else if (19 < age) {

				discount = (fare * (adult / 100));

				if (money < discount) {

					cout << "\nYou are short of money. You can't ride the bus\n" << endl;

					moneycheck = false;

				}

				else if(money > discount){

					money = money - (fare - discount);

					if (money > 0) {

						cout << "\nYour remaining money : " << money << "\n" << endl;

					}

					else if (money == 0) {

						cout << "\nYour money is ZERO!\n" << endl;

						moneycheck = false;

					}

				}

			}

			return money;

		}

		else {

			cout << "\nYou are short of money. You can't ride the bus\n" << endl;

			exit;

		}

	}

	void Info() {

		cout << "\n-------------Info-------------" << endl;
		cout << "\n1. Bus fare : " << fare << endl;
		cout << "\n2. Adult discount rate : " << adult << "%" << endl;
		cout << "\n3. Teenager discount rate : " << teenager << "%" << endl;
		cout << "\n4. Child discount rate : " << child << "%" << endl;
		cout << "\n5. Your age : " << age << endl;
		cout << "\n6. Your Money : " << money << endl;
		cout << "\n------------------------------\n" << endl;

	}

	bool MoneyCheck() {

		if (money == 0){

			moneycheck = false;

			return Pay();

		}

		else{

			moneycheck = true;

			return Pay();

		}

	}

private:

	float adult;

	float teenager;

	float child;

	int money;

	int fare;

	int age;

	float discount = 0;

	bool moneycheck;

};