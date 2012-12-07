#include "std_lib_facilities.h"


class Name_value {
public:
	string name;
	int value;
	Name_value(string str, int val) :
			name(str), value(val) {
	}
};


int main() {
	string name;
	int score;
	vector<Name_value> nvs;
	bool input_error_flag = false;

	while (cin >> name >> score) {
		if (name == "NoName" && score == 0) {
			break;
		} else {
			nvs.push_back(Name_value(name, score));
		}
	}

	for (int i=0; i<nvs.size(); i++) {
		for (int j=i+1; j<nvs.size(); j++) {
			if (nvs[i].name == nvs[j].name) {
				input_error_flag = true;
				break;
			}
		}
		if (input_error_flag)
			break;
	}

	if (input_error_flag)
		cout << "Error: there are duplicates.\n";
	else
		for (int i=0; i<nvs.size(); i++) {
			cout << nvs[i].name << ": " << nvs[i].value << '\n';
		}
}
