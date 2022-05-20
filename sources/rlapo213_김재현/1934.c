#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int k = a, l = b;
		while (k != l) {
			if (k < l)
				k += a;
			else
				l += b;
		}
		printf("%d\n", k);
	}


	return 0;
}