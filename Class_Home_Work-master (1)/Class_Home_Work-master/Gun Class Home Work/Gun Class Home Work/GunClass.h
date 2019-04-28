#pragma once

#include <iostream>
#include <Windows.h>
using namespace std;

class GunClass {

public:

	GunClass(int a, int b, int c);
	void Info();
	int Temperature();
	int GunCooling();
	bool Reload(int a);
	bool Fire(int a);

private:

	int ammo;
	int heat;
	int tem;
	int temperature = 0;
	bool temcheck;
	bool reload;

};