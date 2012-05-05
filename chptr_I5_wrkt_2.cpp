#include "std_lib_facilities.h"

double c2k(double c) {
	double k = c + 273.15;
	return k;
}

int main() {
	double c = 0;
	cin >> c;
	double k = c2k(c);
	cout << k << endl;
}
