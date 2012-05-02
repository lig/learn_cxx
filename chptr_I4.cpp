#include "std_lib_facilities.h"

int main() {
	vector<double> nums;
	double num;
	cout << "Enter several numbers:\n";
	while (cin >> num) {
		nums.push_back(num);
	}
	if (nums.size() == 0) {
		simple_error("Nothing to do.");
	}
	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] == nums[i-1]) {
			cout << nums[i] << " is equal with previous.\n";
		}
	}
}
