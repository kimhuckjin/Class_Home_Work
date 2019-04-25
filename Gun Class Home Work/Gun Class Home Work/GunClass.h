#pragma once

#include <iostream>
#include <Windows.h>
using namespace std;

class GunClass {

public:

	GunClass(int a, int b, int c) {

		ammo = a;

		tem = b;

		heat = c;

	}

	void Info() {

		cout << "--------------Info--------------\n" << endl;
		cout << "Current ammunition volume : " << ammo << endl;
		cout << "\nDegree of heating : " << temperature << endl;
		cout << "\n--------------------------------" << endl;

	}

	int Temperature() {

		if (temperature >= tem) return temcheck = true;

		else if (temperature < tem) {

			temperature += heat;

			if (temperature >= tem)return temcheck = true;

			else return temcheck = false;

		}

	}

	int GunCooling() {

		if (temcheck == true) {

			cout << "\nCooling the gun\n" << endl;

			for (int i = 0; temperature > 0; i++) {

				temperature--;

				Sleep(1000);

				cout << "\nDegree of heating : " << temperature << "\n" << endl;

			}

			return temcheck = false;

		}

		else if (temcheck == false) {

			cout << "\nCooling the gun\n" << endl;

			if (temperature == 0) {

				cout << "\nYou can't cooling the gun" << endl;

				return temcheck = false;
			}

			else if (temperature > 0) {

				temperature--;

				Sleep(200);

				cout << "\nDegree of heating : " << temperature << "\n" << endl;

				return temcheck = false;
			
			}

		}

	}

	bool Reload(int a) {

		if (ammo == 0) {

			cout << "\nAmmo is empty!\n" << endl;

			cout << "Reload!\n" << endl;

			ammo = a;

			cout << "Current ammunition volume : " << ammo << endl;

		}

		else {

			cout << "\nReload!\n" << endl;

			if (ammo != 0) {

				ammo = a + 1;

				cout << "Current ammunition volume : " << ammo << endl;

			}

			else if (ammo == 0) {

				ammo = a;

				cout << "Current ammunition volume : " << ammo << endl;

			}

		}

		return ammo;

	}

	bool Fire(int a) {

		if (ammo == 0)return Reload(a);

		else if (temcheck == true || ((temperature + heat) > tem)) {

			temcheck = true;

			cout << "\nYou can't shot! The gun is hot!\n" << endl;

			return GunCooling();

		}

		else {

			cout << "\nBang!\n" << endl;

			ammo = ammo - 1;

			return Temperature();

		}

	}

private:

	int ammo;

	int heat;

	int tem;

	int temperature = 0;

	bool temcheck;

	bool reload;

};