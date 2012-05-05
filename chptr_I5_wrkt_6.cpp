#include "std_lib_facilities.h"

double k2c(double k) {
	if (k < 0) {
		throw runtime_error("Incorrect K value");
	}
	double c = k - 273.15;
	return c;
}

double k2f(double k) {
	if (k < 0) {
		throw runtime_error("Incorrect K value");
	}
	double f = k * 1.8 - 459.67;
	return f;
}

double f2c(double f) {
	if (f < k2f(0)) {
		throw runtime_error("Incorrect F value");
	}
	double c = (f - 32) / 1.8;
	return c;
}

double c2f(double c) {
	if (c < k2c(0)) {
		throw runtime_error("Incorrect C value");
	}
	double f = c * 1.8 + 32;
	return f;
}

int main() {
	double f_val = 0;
	double t_val = 0;
	char f_scale = ' ';
	char t_scale = ' ';
	cin >> f_val >> f_scale;
	switch (f_scale) {
		case 'C':
			t_val = c2f(f_val);
			t_scale = 'F';
			break;
		case 'F':
			t_val = f2c(f_val);
			t_scale = 'C';
			break;
		default:
			throw runtime_error("Unknown scale");
			break;
	}
	cout << t_val << t_scale << endl;
}
