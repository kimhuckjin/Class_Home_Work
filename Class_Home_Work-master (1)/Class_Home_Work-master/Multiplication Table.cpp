#include "pch.h"

#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	for (a = 2; a <= 9; a++) {

		cout << a << "단" << endl;

		for (b = 1; b <= 9; b++) {

			c = a * b;

			cout << a << " x " << b << " = " << c << endl;

		}

	}

	return 0;

}