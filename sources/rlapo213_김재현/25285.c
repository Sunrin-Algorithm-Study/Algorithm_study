#include<stdio.h>

int main() {
	int t;
	double a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%lf %lf", &a, &b);
		double bmi = b / (a/100 * a/100);
		if (a < 140.1) {
			printf("6\n");
		}
		else if (a < 146) {
			printf("5\n");
		}
		else if (a < 159) {
			printf("4\n");
		}
		else if (a < 161) {
			if (bmi >= 16 && bmi < 35) {
				printf("3\n");
			}
			else {
				printf("4\n");
			}
		}
		else if (a < 204) {
			if (bmi >= 20 && bmi < 25) {
				printf("1\n");
			}
			else if ((bmi >= 18.5 && bmi < 20) || (bmi >= 25 && bmi < 30)) {
				printf("2\n");
			}
			else if ((bmi >= 16 && bmi <18.5) || (bmi >= 30 && bmi < 35)) {
				printf("3\n");
			}
			else
				printf("4\n");

		}
		else {
			printf("4\n");
		}
	}

	return 0;
}