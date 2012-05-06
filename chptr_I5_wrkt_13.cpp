#include "std_lib_facilities.h"

const string monday = "Monday";
const string tuesday = "Tuesday";
const string wednesday = "Wednesday";
const string thursday = "Thursday";
const string friday = "Friday";
const string saturday = "Saturday";
const string sunday = "Sunday";

void to_canonical_day(string &day) {
	for (int i = 0; i < day.size(); ++i) {
		day[i] = tolower(day[i]);
	}
	if (day == "monday" or day == "mon" or day == "mo") {
		day = monday;
	} else if (day == "tuesday" or day == "tue" or day == "tu") {
		day = tuesday;
	} else if (day == "wednesday" or day == "wed" or day == "we") {
		day = wednesday;
	} else if (day == "thursday" or day == "thu" or day == "th") {
		day = thursday;
	} else if (day == "friday" or day == "fri" or day == "fr") {
		day = friday;
	} else if (day == "saturday" or day == "sat" or day == "sa") {
		day = saturday;
	} else if (day == "sunday" or day == "sun" or day == "su") {
		day = sunday;
	} else {
		day = "";
	}
}

int main () {
	string day;
	int value;
	vector<int> mo_values;
	vector<int> tu_values;
	vector<int> we_values;
	vector<int> th_values;
	vector<int> fr_values;
	vector<int> sa_values;
	vector<int> su_values;
	int mo_sum = 0;
	int tu_sum = 0;
	int we_sum = 0;
	int th_sum = 0;
	int fr_sum = 0;
	int sa_sum = 0;
	int su_sum = 0;
	int bad_count = 0;
	while (cin >> day >> value) {
		to_canonical_day(day);
		if (day == monday) {
			mo_values.push_back(value);
			mo_sum += value;
		} else if (day == tuesday) {
			tu_values.push_back(value);
			tu_sum += value;
		} else if (day == wednesday) {
			we_values.push_back(value);
			we_sum += value;
		} else if (day == thursday) {
			th_values.push_back(value);
			th_sum += value;
		} else if (day == friday) {
			fr_values.push_back(value);
			fr_sum += value;
		} else if (day == saturday) {
			sa_values.push_back(value);
			sa_sum += value;
		} else if (day == sunday) {
			su_values.push_back(value);
			su_sum += value;
		} else {
			++bad_count;
		}
	}

	cout << endl;
	cout << monday << " sum: " << mo_sum << endl;
	cout << tuesday << " sum: " << tu_sum << endl;
	cout << wednesday << " sum: " << we_sum << endl;
	cout << thursday << " sum: " << th_sum << endl;
	cout << friday << " sum: " << fr_sum << endl;
	cout << saturday << " sum: " << sa_sum << endl;
	cout << sunday << " sum: " << su_sum << endl;
	cout << endl;
	cout << "Bad values count: " << bad_count << endl;
}
