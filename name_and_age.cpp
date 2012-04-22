#include "std_lib_facilities.h"

int main() {
	cout << "Please enter you name and age\n";
	string first_name = "???";
	double age = -1;
	cin >> first_name >> age;
	age *= 12;
	cout << "Hello, " << first_name << " (age " << age << "m)\n";
}
