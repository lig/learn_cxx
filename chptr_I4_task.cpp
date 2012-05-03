#include "std_lib_facilities.h"

const double cm2m = 0.01;
const double in2m = cm2m * 2.54;
const double ft2m = in2m * 12;

int main() {
	double num;
	string units;
	double min;
	double max;
	double sum = 0;
	int count = 0;
	bool is_first=true;
	cout << "Enter several numbers (possible units are: 'cm', 'in', 'ft', 'm'):\n";
	while (cin >> num) {
		cin >> units;
		if (units == "m") {
			// not converting
		} else if (units == "cm") {
			num *= cm2m;
		} else if (units == "in") {
			num *= in2m;
		} else if (units == "ft") {
			num *= ft2m;
		} else {
			// pass
			continue;
		}
		if (!is_first) {
			if (num < min) {
				min = num;
			}
			if (num > max) {
				max = num;
			}
		} else {
			min = num;
			max = num;
			is_first = false;
		}
		sum += num;
		++count;
	}
	cout << "The lowest length in meters is: " << min << "m" << endl;
	cout << "The highest length in meters is: " << max << "m" << endl;
	cout << "The summary length in meters is: " << sum << "m" << endl;
	cout << "The number of entered lengths is: " << count << endl;
}
