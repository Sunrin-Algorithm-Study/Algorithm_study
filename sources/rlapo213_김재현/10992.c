#include<stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);
	int c = n;
	int z = 1;
	for (int i = 0; i < n; i++) {
		if (c == 1)
			for (int k = 0; k < (2*n)-1; k++)
				printf("*");
		else{
			for (int j = 0; j < c - 1; j++) {
				printf(" ");
			}
			printf("*");
			if (c != n) {
				for (int l = 0; l < z; l++) {
					printf(" ");
				}
				z+=2;
				printf("*");
			}
			
		}
		c--;
		printf("\n");
	}
	return 0;
}