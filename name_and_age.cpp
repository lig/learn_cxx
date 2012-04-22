#include "std_lib_facilities.h"

int main() {
	cout << "Please enter you name and age\n";
	string first_name = "???";
	double age = -1;
	cin >> first_name >> age;
	int months = age * 12;
	int years = months / 12;
	months -= years * 12;
	cout << "Hello, " << first_name << " (age " << years << "y " << months << "m)\n";
}
