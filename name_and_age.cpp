#include "std_lib_facilities.h"

int main() {
	cout << "Please enter you name and age\n";
	string first_name = "???";
	double age = -1;
	cin >> first_name >> age;
	int years = age;
	int months = (age - years) * 12;
	cout << "Hello, " << first_name << " (age " << years << "y " << months << "m)\n";
}
