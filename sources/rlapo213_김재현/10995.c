#include<stdio.h>
int n, c;

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		if (c) {
			printf(" ");
			c--;
		}
		else 
			c++;
		for (int j = 0; j < n; j++) {
			printf("* ");
		}

		printf("\n");
	}

	return 0;
}

