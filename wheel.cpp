#include "std_lib_facilities.h"

int main() {
	int i=0;
	cout << "The wheel is spinning\n";
	while (1) {
		cout << "\tand spinning (" << ++i << ")\n";
	}
	return 0;
}
