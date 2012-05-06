#include "std_lib_facilities.h"

class negative_discriminant {};

double discriminant(double &a, double &b, double &c) {
	double d;
	d = b * b - 4 * a * c;
	return d;
}

vector<double> quadratic_roots(double &a, double &b, double &c) {
	double d = discriminant(a, b ,c);
	if (d < 0) {
		throw negative_discriminant();
	}
	vector<double> roots;
	roots.push_back((-b + sqrt(d)) / 2 * a);
	roots.push_back((-b - sqrt(d)) / 2 * a);
	return roots;
}

int main() {
	double a;
	double b;
	double c;
	cout << "Enter real coefficients of the quadratic equation (ax²+bx+c=0):" << endl;
	if (!(cin >> a >> b >> c)) {
		throw runtime_error("Bad coefficients");
	}
	try {
		vector<double> roots = quadratic_roots(a, b, c);
		cout << "Roots are: " << roots[0] << " and " << roots[1] << endl;
	} catch (negative_discriminant& e) {
		cout << "No roots" << endl;
	}
}
