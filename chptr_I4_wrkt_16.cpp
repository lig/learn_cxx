#include "std_lib_facilities.h"

int main() {
	double moda;
	int moda_count = 0;
	int count;
	vector<double> nums;
	vector<double> seen_nums;
	bool is_seen;
	double num;
	cout << "Enter several numbers:" << endl;
	while (cin >> num) {
		nums.push_back(num);
	}

	for (int i = 0; i < nums.size(); ++i) {
		is_seen = false;
		for (int j = 0; j < seen_nums.size(); ++j) {
			if (seen_nums[j] == nums[i]) {
				is_seen = true;
				break;
			}
		}
		if (is_seen) {
			continue;
		}

		count = 0;
		for (int j = i; j < nums.size(); ++j) {
			if (nums[j] == nums[i]) {
				++count;
			}
		}
		if (count > moda_count) {
			moda_count = count;
			moda = nums[i];
		}

		seen_nums.push_back(nums[i]);
	}

	cout << "Moda is " << moda << " with count " << moda_count << endl;
}
