#include "std_lib_facilities.h"

int main () {
	// const string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	// vector<string> num_str(arr, arr + sizeof(arr) / sizeof(arr[0]));
	vector<string> num_str;
	num_str.push_back("zero");
	num_str.push_back("one");
	num_str.push_back("two");
	num_str.push_back("three");
	num_str.push_back("four");
	num_str.push_back("five");
	num_str.push_back("six");
	num_str.push_back("seven");
	num_str.push_back("eight");
	num_str.push_back("nine");

	int num = -1;
	cout << "Enter digit: ";
	cin >> num;
	if (!(num >= 0 and num <= 9)) {
		throw runtime_error("Incorrect digit");
	}
	cout << num_str[num] << endl;
}
