#include "std_lib_facilities.h"

double c2k(double c) {
	double k = c + 273.15;
	return k;
}

int main() {
	double c = 0;
	cin >> c;
	if (c < -273.15) {
		throw runtime_error("Incorrect value");
	}
	double k = c2k(c);
	cout << k << endl;
}
