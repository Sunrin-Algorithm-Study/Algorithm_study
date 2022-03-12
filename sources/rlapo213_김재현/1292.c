#include<stdio.h>
int a, b, sum,c;
int main() {
	int k = 1;
	scanf("%d %d", &a, &b);

	for (int i = 1; i <= b; i++) {
		for (int j = 0; j < k; j++) {
			c++;
			if (c >= a && c <= b)
				sum += i;
		}
		k++;
	}
	printf("%d", sum);
	return 0;
}