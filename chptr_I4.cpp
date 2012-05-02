#include "std_lib_facilities.h"

int main() {
	vector<int> nums;
	int num;
	cout << "Enter several numbers:\n";
	while (cin >> num) {
		nums.push_back(num);
	}
}
