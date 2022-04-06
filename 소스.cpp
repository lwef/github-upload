#include <stdio.h>
#include <math.h>

double function(double x) {
	return sin(x) + cos(1 + x * x) - 1;
}

int main() {
	int i,j;
	double x1, x2, result, error;

	x1 = 1.5;
	x2 = 2.25;

	for (i = 0; i < 4; i++) {
		//scanf("%lf %lf", &x1, &x2);
		printf("%d번째 반복:\n", i+1);
		result = x2 - (function(x2) * (x1 - x2)) / (function(x1) - function(x2));
		printf("x%d = %lf f(x%d) = %lf\n", i - 1, x1, i - 1, function(x1));
		printf("x%d = %lf f(x%d) = %lf\n", i, x2, i, function(x2));
		printf("x%d = %lf\n\n", i + 1, result);
		x1 = x2;
		x2 = result;
	}
	error = fabs((1.9466 - result) / 1.9446) * 100;
	printf("참백분율 상대오차: %.2lf%%", error);
}

