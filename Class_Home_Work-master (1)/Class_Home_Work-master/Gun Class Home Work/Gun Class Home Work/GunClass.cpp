#pragma once

#include "pch.h"
#include "GunClass.h"


GunClass::GunClass(int a, int b, int c) {

		ammo = a;

		tem = b;

		heat = c;

	}

void GunClass::Info() {

	cout << "----------------------------------" << endl;
	cout << "³²Àº ÃÑ¾Ë ¼ö : " << ammo << endl;
	cout << "ÃÑ¿­ ¿Âµµ : " << temperature << endl;
	cout << "--------------------------------" << endl;

}

int GunClass::Temperature() {

	if (temperature >= tem) return temcheck = true;

	else if (temperature < tem) {

		temperature += heat;

		if (temperature >= tem)return temcheck = true;

		else return temcheck = false;

	}

}

int GunClass::GunCooling() {

	if (temcheck == true) {

		cout << "ÃÑ¿­ ½ÄÈ÷±â" << endl;

		for (int i = 0; temperature > 0; i++) {

			temperature--;

			Sleep(500);

			cout << "ÃÑ¿­ ¿Âµµ : " << temperature << "\n" << endl;

		}

		return temcheck = false;

	}

	else if (temcheck == false) {

		cout << "ÃÑ¿­ ½ÄÈ÷±â" << endl;

		if (temperature == 0) {

			cout << "´õÀÌ»ó ½ÄÈú¼ö ¾ø½À´Ï´Ù." << endl;

			return temcheck = false;
		}

		else if (temperature > 0) {

			temperature--;

			Sleep(200);

			cout << "ÃÑ¿­ ¿Âµµ : " << temperature << "\n" << endl;

			return temcheck = false;

		}

	}

}

bool GunClass::Reload(int a) {

	if (ammo == 0) {

		cout << "ÃÑ¾ËÀÌ ¾ø½À´Ï´Ù!" << endl;

		cout << "ÀçÀåÀü" << endl;

		ammo = a;

		cout << "³²Àº ÃÑ¾Ë¼ö : " << ammo << endl;

	}

	else {

		cout << "ÀçÀåÀü!" << endl;

		if (ammo != 0) {

			ammo = a + 1;

			cout << "³²Àº ÃÑ¾Ë¼ö : " << ammo << endl;

		}

		else if (ammo == 0) {

			ammo = a;

			cout << "³²Àº ÃÑ¾Ë¼ö : " << ammo << endl;

		}

	}

	return ammo;

}

bool GunClass ::Fire(int a) {

	if (ammo == 0)return Reload(a);

	else if (temcheck == true || ((temperature + heat) > tem)) {

		temcheck = true;

		cout << "ÃÑ¿­ÀÌ ¶ß°Å¿ö ½ò¼ö ¾ø½À´Ï´Ù." << endl;

		return GunCooling();

	}

	else {

		cout << "ÅÁ!" << endl;

		ammo = ammo - 1;

		return Temperature();

	}

}