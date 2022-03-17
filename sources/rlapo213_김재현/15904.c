#include<stdio.h>

char a[1008];
int main() {
	scanf("%[^\n]s", a);
	int b = 85;
	int l = 0;
	int k = 0;
	while (a[l] != '\0')
		l++;
	for (int i = 0; i < l; i++) {
		if (a[i] == b) {
			b = 67;
			if (k==1) 
				b = 80;
			k++;
			if (k == 4) {
				printf("I love UCPC");
				break;
			}
		}
	}
	if (k != 4) {
		printf("I hate UCPC");
	}
	

	return 0;
}