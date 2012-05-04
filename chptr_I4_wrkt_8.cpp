#include "std_lib_facilities.h"

int main () {
	int amount;
	cout << "Enter desired amount of rice:" << endl;
	if (!(cin >> amount)) {
		throw runtime_error("Bad amount");
	}

	int sum = 0;
	int current = 1;
	cout << "#\tAmount\tCurrent" << endl;
	for (int i = 1; i <= 64; ++i) {
		sum += current;
		cout << i << "\t" << sum << "\t" << current << endl;
		if (sum >= amount) {
			cout << "Enough rice." << endl;
			break;
		}
		current *= 2;
	}
}
