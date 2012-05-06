#include "std_lib_facilities.h"

vector<int> get_secret(int seed) {
	vector<int> secret;
	srand(seed);
	for (int i = 0; i < 4; ++i) {
		secret.push_back(randint(10));
	}
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
	int seed;
	cout << "Enter integer number: ";
	cin >> seed;

	vector<int> secret = get_secret(seed);
	vector<int> guess;
	int guess_num;
	int bulls;
	int cows;

	while (bulls != 4) {
		bulls = 0;
		cows = 0;
		cout << "Enter 4 digits: ";
		while (!(cin >> guess_num)) {} ;
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
}
