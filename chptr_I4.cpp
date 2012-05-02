#include "std_lib_facilities.h"

int main() {
	vector<int> nums;
	int num;
	cout << "Enter several numbers:\n";
	while (cin >> num) {
		nums.push_back(num);
	}
	if (nums.size() == 0) {
		simple_error("Nothing to do.");
	}
	int min = nums[0];
	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	cout << "Minimal number is: " << min << endl;
}
