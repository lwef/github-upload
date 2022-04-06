#include <stdio.h>
#include <math.h>
double fun(double a);
double fun2(double a, double b, double c );

double fun(double a) {
	double temp = 4 * a - 1.8 * a * a + 1.2 * a * a * a - 0.3 * a * a * a * a;
	//double temp = 2 * sin(a) - a * a / 10;
	return temp;
}

double getx3(double a, double b, double c) {
	double temp1 = (fun(a) * (b * b - c * c) + fun(b) * (c * c - a * a) + fun(c) * (a * a - b * b));
	double temp2 = 2 * fun(a) * (b - c) + 2 * fun(b) * (c - a) + 2 * fun(c) * (a - b);
	return temp1 / temp2;
}

int main() {
	double a = 2.311244;
	double b = 2.326019;
	double c = 2.334058;
	printf("%lf %lf %lf\n", fun(a), fun(b), fun(c));
	printf("%lf %lf ", getx3(a, b, c), fun(getx3(a, b, c)));
}