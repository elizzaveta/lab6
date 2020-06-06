#include "functions.h"
#include "additional.h"


double tg::calculate()
{
	if ((x == p2) || (x == -p2)) {
		cout << "x cant be pi/2 or /pi/2" << endl;
		return 0;
	}
	vector<double> bern = Bernoulli_numbers(50);
	double eps = 0.00001;
	double next = 1;
	double sum = 0;
	int n = 1;
	while (abs(next) > eps) {
		next = bern[n - 1] * pow(-4, n) * (1 - pow(4, n)) * pow(x, 2 * n - 1) / fact1(2 * n);
		sum += next;
		n++;
	}
	return sum;
}

double arctg::calculate() {
	if (x > 1 || x < -1) {
		cout << "x must be from [-1;1]" << endl;
		return 0;
	}
	double eps = 0.00001;
	double next = 1;
	double sum = 0;
	int n = 0;
	while (abs(next) > eps) {
		next = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
		sum += next;
		n++;
	}
	return sum;
}
