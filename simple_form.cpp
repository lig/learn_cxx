#include "std_lib_facilities.h"

int main() {
	cout << "Please type recipient name than press enter:\n";
	string first_name;
	cin >> first_name;
	cout << "Please type friend name than press enter:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Please specify " << friend_name << "'s sex (type 'm' if mail or 'f' if female):\n";
	char friend_sex=0;
	cin >> friend_sex;
	cout << "Dear " << first_name << ",\n";
	cout << "\n";
	cout << "Whazup?\n";
	cout << "Have you seen " << friend_name << " recently?\n";
	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << ", tell him to call me.\n";
	}
	if (friend_sex == 'f') {
		cout << "If you see " << friend_name << ", tell her to call me.\n";
	}
}
