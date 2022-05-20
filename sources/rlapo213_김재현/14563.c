#include<stdio.h>
int main() {
	int n;
	int k;
	scanf("%d", &k);
	while (k--) {
		scanf("%d", &n);

		int sum = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
			}
		}
		if (sum == n) {
			printf("Perfect\n");
		}
		else if (sum > n) {
			printf("Abundant\n");
		}
		else {
			printf("Deficient\n");

		}

	}
	return 0;
}