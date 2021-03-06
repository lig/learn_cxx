#include "std_lib_facilities.h"

double k2c(double k) {
	if (k < 0) {
		throw runtime_error("Incorrect K value");
	}
	double c = k - 273.15;
	return c;
}

double c2k(double c) {
	if (c < k2c(0)) {
		throw runtime_error("Incorrect C value");
	}
	double k = c + 273.15;
	return k;
}

int main() {
	double c = 0;
	cin >> c;
	double k = c2k(c);
	cout << k << endl;
}
