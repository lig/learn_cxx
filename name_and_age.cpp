#include "std_lib_facilities.h"

int main() {
	cout << "Please enter you name and age\n";
	string first_name = "???";
	int age = -1;
	cin >> first_name >> age;
	cout << "Hello, " << first_name << " (age " << age << ")\n";
}
