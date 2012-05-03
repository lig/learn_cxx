#include "std_lib_facilities.h"

int main () {
	int min = 1;
	int max = 100;
	bool guessed = false;
	int num;
	char answer = ' ';
	int tries = 0;
	cout << "Choose and memorize number from " << min << " to " << max << endl;
	cout << "Please enter symbol '<' if your number less or '>' if greater than number shown or enter '=' if guessed." << endl;
	while (not guessed) {
		num = (min + max) / 2;
		cout << num << endl;
		cin >> answer;
		switch (answer) {
			case '<':
				max = num;
				break;
			case '>':
				min = num;
				break;
			case '=':
				guessed = true;
				break;
			default:
				continue;
				break;
		}
		++tries;
	}
	cout << "Guessed in " << tries << " tries:)" << endl;
}
