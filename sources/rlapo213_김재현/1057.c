#include<stdio.h>

int N,a, b;
int u = 1;
int ftu(int x) {
	if (x % 2)
		return 0;
}
int main() {
	scanf("%d %d %d", &N, &a, &b);
	if (a > b) {
		int cmp = b;
		b = a;
		a = cmp;
	}
	while (1) {
		if (b % 2 == 0 && b - 1 == a) {
			printf("%d", u);
			break;
		}
		if (ftu(a))
			a /= 2;
		else {
			a++;
			a /= 2;
		}
		if (ftu(b))
			b /= 2;
		else {
			b++;
			b /= 2;
		}
		u++;
	}
	return 0;
}