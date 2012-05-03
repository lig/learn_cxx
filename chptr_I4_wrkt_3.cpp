#include "std_lib_facilities.h"

int main () {
	vector<double> distances;
	double distance;
	while (cin >> distance) {
		distances.push_back(distance);
	}
	if (distances.size() == 0) {
		throw runtime_error("Empty input");
	}
	double sum = distances[0];
	double min = distances[0];
	double max = distances[0];
	double avg = 0;
	for (int i = 1; i < distances.size(); ++i) {
		sum += distances[i];
		if (distances[i] < min) {
			min = distances[i];
		}
		if (distances[i] > max) {
			max = distances[i];
		}
	}
	avg = sum / distances.size();
	cout << "sum: " << sum << endl;
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	cout << "avg: " << avg << endl;
}
