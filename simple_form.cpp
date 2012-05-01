#include "std_lib_facilities.h"

int main() {
	cout << "Please type recipient name than press enter:\n";
	string first_name;
	cin >> first_name;
	cout << "Please type friend name than press enter:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Dear " << first_name << ",\n";
	cout << "\n";
	cout << "Whazup?\n";
	cout << "Have you seen " << friend_name << " recently?";
}
