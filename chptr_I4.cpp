#include "std_lib_facilities.h"

const double precision = 1.0/100;

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
		if (abs(nums[i] - nums[i-1]) < precision) {
			cout << nums[i] << " is equal to previous number " << nums[i-1];
			cout << " (precision is " << precision << ").\n";
		}
	}
}
