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

	int digit = -1;
	string word = "";
	cout << "Enter digit as word: ";
	cin >> word;

	for (int i = 0; i < num_str.size(); ++i) {
		if (num_str[i] == word) {
			digit = i;
			break;
		}
	}
	if (digit == -1) {
		throw runtime_error("Incorrect word");
	}
	cout << digit << endl;
}
