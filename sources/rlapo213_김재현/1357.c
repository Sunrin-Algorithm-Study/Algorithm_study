#include<stdio.h>
#include<math.h>
int x, y;

int  Rev(int a) {
	int l = 0;
	int z = a;
	while (z != 0) {
		z /= 10;
		l++;
	}
	while (!(a % 10) && l > 0) {
		a /= 10;
		l--;
	}

	int k = l / 2;
	for (int i = 1; i <= k; i++) {
		int p = pow(10, i - 1);
		int p1 = pow(10, i);
		int p2 = pow(10, (l - i));

		int cmp = a % p1;
		if (p1 == 100)cmp /= 10;
		int cmp2 = a / p2;
		if (p2 == 100)cmp2 %= 10;
		a -= cmp2 * p2;
		a += cmp * p2;

		a -= cmp * p;
		a += cmp2 * p;

	}
	return a;
}

int main() {
	scanf("%d %d", &x, &y);

	printf("%d", Rev(Rev(x) + Rev(y)));

	return 0;
}