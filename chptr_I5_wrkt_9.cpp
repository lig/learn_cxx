#include "std_lib_facilities.h"

int main() {
	vector<double> numbers;
	double number;

	cout << "Please enter several real numbers (end with '|' symbol):" << endl;
	while (cin >> number) {
		numbers.push_back(number);
	}
	cin.clear();
	cin.ignore();

	int count;
	cout << "Please enter how much numbers you want to sum up (not more than " << numbers.size() << "):" << endl;
	if (!(cin >> count)) {
		throw runtime_error("Incorrect number");
	}
	if (count > numbers.size()) {
		throw runtime_error("Number too big");
	}

	double sum = 0;
	for (int i = 0; i < count; ++i) {
		sum += numbers[i];
	}
	cout << "The sum of the first " << count << " numbers is " << sum << endl;

	vector<double> differences;
	for (int i = 1; i < count; ++i) {
		differences.push_back(numbers[i] - numbers[i-1]);
	}
	if (differences.size()) {
		cout << "Differences are:";
		for (int i = 0; i < differences.size(); ++i) {
			cout << " " << differences[i];
		}
		cout << endl;
	}
}
