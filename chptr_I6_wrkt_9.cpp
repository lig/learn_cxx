#include "std_lib_facilities.h"


int main() {
	char ch;
	vector<char> digits;
	int num_digits;
	int number = 0;

	while (cin >> ch) {
		int chval = ch - '0';
		if (chval >= 0 && chval <= 9)
			digits.push_back(chval);
		else
			break;
	}

	num_digits = digits.size();
	for (int i = 0; i < num_digits; i++) {
		number += digits[i] * pow(10, num_digits - i - 1);
	}

	cout << number << '\n';
}
