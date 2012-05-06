#include "std_lib_facilities.h"

vector<int> get_secret() {
	vector<int> secret;
	secret.push_back(1);
	secret.push_back(3);
	secret.push_back(5);
	secret.push_back(9);
	return secret;
}

vector<int> num2vector(int num) {
	vector<int> v;
	v.push_back(num / 1000);
	num %= 1000;
	v.push_back(num / 100);
	num %= 100;
	v.push_back(num / 10);
	num %= 10;
	v.push_back(num);
	return v;
}

int main () {
	vector<int> secret = get_secret();
	vector<int> guess;
	int guess_num;
	int bulls = 0;
	int cows = 0;
	cout << "Enter 4 digits: ";
	cin >> guess_num;
	guess = num2vector(guess_num);
	for (int i = 0; i < guess.size(); ++i) {
		if (guess[i] == secret[i]) {
			bulls += 1;
		} else {
			for (int j = 0; j < secret.size(); ++j) {
				if (guess[i] == secret[j]) {
					cows += 1;
				}
			}
		}
	}
	cout << "bulls: " << bulls << "\tcows: " << cows << endl;
}
