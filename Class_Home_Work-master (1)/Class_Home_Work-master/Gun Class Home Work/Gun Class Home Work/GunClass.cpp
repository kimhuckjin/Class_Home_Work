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
	cout << "���� �Ѿ� �� : " << ammo << endl;
	cout << "�ѿ� �µ� : " << temperature << endl;
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

		cout << "�ѿ� ������" << endl;

		for (int i = 0; temperature > 0; i++) {

			temperature--;

			Sleep(500);

			cout << "�ѿ� �µ� : " << temperature << "\n" << endl;

		}

		return temcheck = false;

	}

	else if (temcheck == false) {

		cout << "�ѿ� ������" << endl;

		if (temperature == 0) {

			cout << "���̻� ������ �����ϴ�." << endl;

			return temcheck = false;
		}

		else if (temperature > 0) {

			temperature--;

			Sleep(200);

			cout << "�ѿ� �µ� : " << temperature << "\n" << endl;

			return temcheck = false;

		}

	}

}

bool GunClass::Reload(int a) {

	if (ammo == 0) {

		cout << "�Ѿ��� �����ϴ�!" << endl;

		cout << "������" << endl;

		ammo = a;

		cout << "���� �Ѿ˼� : " << ammo << endl;

	}

	else {

		cout << "������!" << endl;

		if (ammo != 0) {

			ammo = a + 1;

			cout << "���� �Ѿ˼� : " << ammo << endl;

		}

		else if (ammo == 0) {

			ammo = a;

			cout << "���� �Ѿ˼� : " << ammo << endl;

		}

	}

	return ammo;

}

bool GunClass ::Fire(int a) {

	if (ammo == 0)return Reload(a);

	else if (temcheck == true || ((temperature + heat) > tem)) {

		temcheck = true;

		cout << "�ѿ��� �߰ſ� ��� �����ϴ�." << endl;

		return GunCooling();

	}

	else {

		cout << "��!" << endl;

		ammo = ammo - 1;

		return Temperature();

	}

}