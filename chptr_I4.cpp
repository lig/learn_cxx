#include "std_lib_facilities.h"

int main() {
	double num;
	double min;
	double max;
	bool is_first=true;
	cout << "Enter several numbers:\n";
	while (cin >> num) {
		if (!is_first) {
			if (num < min) {
				min = num;
				cout << "The lowest number of the previously entered is: " << min << endl;
			}
			if (num > max) {
				max = num;
				cout << "The highest number of the previously entered is: " << max << endl;
			}
		} else {
			min = num;
			max = num;
			is_first = false;
		}
	}
}
