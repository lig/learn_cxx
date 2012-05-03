#include "std_lib_facilities.h"

int main() {
	vector<double> temps;
	double temp;
	while (cin>>temp) {
		temps.push_back(temp);
	}

	// average temp calculation
	double sum = 0;
	for (int i = 0; i < temps.size(); ++i) {
		sum += temps;
	}
	cout << "Average temp is: " << sum/temps.size() << endl;

	// median temp calculation
	sort(temps.begin(), temps.end());
	cout << "Median temp is: " << temps[temps.size()/2] << endl;
}
