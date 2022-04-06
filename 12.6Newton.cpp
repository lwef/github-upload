#include <stdio.h>

double myabs(double a) {
	if (a >= 0) return a;
	else return -a;
}
double error(double a, double b) {
	double err = myabs((a - b) / a) * 100;
	printf("error: %lf\n", err);
	return err;
}
double fun(double a) {
	double temp1 = 4 - 3.6 * a + 3.6 * a * a - 1.2 * a * a * a;
	double temp2 = -3.6 + 7.2 * a - 3.6 * a * a;
	return a - temp1 / temp2;
}
double fun2(double a) {
	double temp = 4 * a - 1.8 * a * a + 1.2 * a * a * a - 0.3 * a * a * a * a;
	//double temp = 2 * sin(a) - a * a / 10;
	return temp;
}

int main() {
	int num = 1;
	double x = 3;
	double a;
	while (num != 10) {
		a = fun(x);
		printf("%d번째 반복: %lf", num, a);
		if (error(a, x) < 1) {
			printf("조건 만족\n");
			printf("%lf", fun2(a));
			break;
		}
		x = a;
		num++;
	}
}