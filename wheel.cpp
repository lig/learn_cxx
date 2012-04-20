#include "std_lib_facilities.h"


int main() {

	cout << "Input the number of times to spin the wheel\n";
	int num;
	cin >> num;

	cout << "The wheel is spinning\n";
	for (int i = 1; i <= num; ++i) {
		cout << "\tand spinning (" << i << ")\n";
	}
	return 0;

}
