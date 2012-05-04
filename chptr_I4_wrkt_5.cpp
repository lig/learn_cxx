#include "std_lib_facilities.h"

int main () {
	double lval = 0;
	double rval = 0;
	char op = ' ';
	cout << "Please enter two numbers and one of the operation symbols '+', '-', '*', '/'." << endl;
	if (!(cin>>lval)) {
		throw runtime_error("Incorrect first number");
	}
	if (!(cin>>rval)) {
		throw runtime_error("Incorrect second number");
	}
	if (!(cin>>op)) {
		throw runtime_error("Incorrect operation symbol");
	}

	switch (op) {
		case '+':
			cout << "The sum of " << lval << " and " << rval << " is: " << lval + rval << endl;
			break;
		case '-':
			cout << "The difference of " << lval << " and " << rval << " is: " << lval - rval << endl;
			break;
		case '*':
			cout << "The product of " << lval << " and " << rval << " is: " << lval * rval << endl;
			break;
		case '/':
			cout << "The quotient of " << lval << " and " << rval << " is: " << lval / rval << endl;
			break;
		default:
			break;
	}
}
