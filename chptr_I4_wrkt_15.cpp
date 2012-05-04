#include "std_lib_facilities.h"

int main () {
	vector<int> primes;
	primes.push_back(0);
	primes.push_back(1);
	int k;
	bool is_prime;
	int n;
	cout << "Enter amount of prime prime numbers to search: ";
	if (!(cin >> n)) {
		throw runtime_error("Bad number");
	}

	for (int i = 2; primes.size() < n; ++i) {
		is_prime = true;
		k = sqrt(i);
		for (int j = 2; j < primes.size(); ++j) {
			if (primes[j] > k) {
				break;
			}
			if (i % primes[j] == 0) {
				is_prime = false;
				break;
			}
		}
	    if (is_prime) {
	    	primes.push_back(i);
	    }
	}

	for (int i = 0; i < primes.size(); ++i) {
		cout << primes[i] << endl;
	}
}
