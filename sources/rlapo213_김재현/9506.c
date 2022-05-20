#include<stdio.h>
int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == -1)break;
		int sum = 0;
		int key;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				key = i;
			}
		}
		if (sum == n) {
			printf("%d = ", n);
			for (int i = 1; i < n; i++) {
				if (i == key)
					break;
				if (n % i == 0) {
					printf("%d + ", i);
				}
			}
			printf("%d\n", key);
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}

	}
}