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
	double f_val = 0;
	double t_val = 0;
	char f_scale = ' ';
	char t_scale = ' ';
	cin >> f_val >> f_scale;
	switch (f_scale) {
		case 'C':
			t_val = c2k(f_val);
			t_scale = 'K';
			break;
		case 'K':
			t_val = k2c(f_val);
			t_scale = 'C';
			break;
		default:
			throw runtime_error("Unknown scale");
			break;
	}
	cout << t_val << t_scale << endl;
}
