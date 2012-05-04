#include "std_lib_facilities.h"

void init_num_str(vector<string> &numstrv) {
	numstrv.push_back("zero");
	numstrv.push_back("one");
	numstrv.push_back("two");
	numstrv.push_back("three");
	numstrv.push_back("four");
	numstrv.push_back("five");
	numstrv.push_back("six");
	numstrv.push_back("seven");
	numstrv.push_back("eight");
	numstrv.push_back("nine");
}

int word2digit(string word) {
	vector<string> numstrv;
	init_num_str(numstrv);
	int digit = -1;
	for (int i = 0; i < numstrv.size(); ++i) {
		if (numstrv[i] == word) {
			digit = i;
			break;
		}
	}
	if (digit == -1) {
		throw runtime_error("Incorrect word");
	}
	return digit;
}

int get_number() {
	char in_flag = ' ';
	double val;
	string str_val;
	cin >> in_flag;
	switch (in_flag) {
		case '#':
			if (!(cin >> val)) {
				throw runtime_error("Bad number");
			}
			break;
		case '$':
			cin >> str_val;
			try {
				val = word2digit(str_val);
			} catch (runtime_error& e) {
				string msg = "Bad number: ";
				throw runtime_error(msg + e.what());
			}
			break;
		default:
			throw runtime_error("Bad type selector");
			break;
	}
	return val;
}

int main () {
	double lval = 0;
	double rval = 0;
	char op = ' ';
	cout << "Please enter two numbers and one of the operation symbols '+', '-', '*', '/'." << endl;
	cout << "Numbers must have prefix: '#' for digital form or '$' for word." << endl;
	try {
		lval = get_number();
	} catch (runtime_error& e) {
		string msg = "Incorrect first number: ";
		throw runtime_error(msg + e.what());
	}
	try {
		rval = get_number();
	} catch (runtime_error& e) {
		string msg = "Incorrect first number: ";
		throw runtime_error(msg + e.what());
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
