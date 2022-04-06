#include <stdio.h>
/*Gauss-Seidel법*/
double myabs(double a) {
	if (a >= 0) return a;
	else return -a;
}
int main() {
	int num = 1;
	double x1 = 0;
	double x2 = 0;
	double x3 = 0;
	double a, b, c;
	while (num != 15) {
		printf("%d번째 반복:\n", num);
		a = (-2 * x2 + x3 + 27) / 10;
		b = (-3 * a + 2 * x3 + 61.5) / 6;
		c = (-a - b - 21.5) / 5;
		printf("x1: %lf\nx2: %lf\nx3: %lf\n\n", a, b, c);
		if (myabs((0.5 - x1) / 0.5) * 100 < 5 && myabs((8 - x2) / 8) * 100 < 5 && myabs((-6 - x3) / (-6)) * 100 < 5) {
			printf("%lf %lf %lf", myabs((0.5 - x1) / 0.5) * 100, myabs((8 - x2) / 8) * 100, myabs((-6 - x3) / (-6)) * 100);
			printf("조건 만족");
			break;
		}
		x1 = a;
		x2 = b;
		x3 = c;
		num++;
	}
}