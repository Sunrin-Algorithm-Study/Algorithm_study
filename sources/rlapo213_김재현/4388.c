#include<stdio.h>

int main() {
	long long int a, b;
	int u;
	while (1) {
		scanf("%lld %lld", &a, &b);
		if (a == 0 && !b)
			break;
		int carry = 0;
		u = 0;
		while (1) {
			int k1 = a % 10;
			int k2 = b % 10;
			a /= 10;
			b /= 10;
			
			if (k1 + k2 + u > 9) {
				carry++;
				u = 1;
			}
			else
				u = 0;
			if (!a && !b)
				break;
		}
		printf("%d\n", carry);
	}
}