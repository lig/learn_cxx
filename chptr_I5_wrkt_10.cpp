#include "std_lib_facilities.h"

int main() {
	long int first = 0;
	long int second = 1;
	bool good = true;
	cout << first << endl;
	while (good) {
		cout << second << endl;
		second += first;
		first = second - first;
		if (second < 0) {
			good = false;
		}
	}
}
