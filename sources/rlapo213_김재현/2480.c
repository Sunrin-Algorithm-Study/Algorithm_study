#include<stdio.h>
int max(int a, int b) {
	return (((a) > (b)) ? (a) : (b));
}


int main() {
	int a, b, c;
	int k = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		k = a * 1000 + 10000;
	}
	else if (a != b && b != c && c != a) {
		k = max(a, max(b, c)) * 100;
	}
	else {
		int z;
		if (a == b)
			z = a;
		else if (b == c)
			z = b;
		else if (a == c)
			z = c;
		k = z * 100 + 1000;
	}

	printf("%d", k);

	return 0;
}