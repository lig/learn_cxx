#include "std_lib_facilities.h"

int main() {
	vector<int> nums;
	int num;
	cout << "Enter several numbers:\n";
	while (cin >> num) {
		nums.push_back(num);
	}
	for (int i = 0; i < nums.size(); ++i) {
		cout << "Number " << i+1 << ": " << nums[i] << endl;
	}
}
