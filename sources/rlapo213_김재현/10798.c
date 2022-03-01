#include<stdio.h>

char array[10][20];
int main() {
	for (int i = 0; i < 5; i++) {
		scanf("%s", array[i]);
	}

	for (int k = 0; k < 15; k++) {
		for (int i = 0; i < 5; i++) {
			if(array[i][k]!=NULL)
				printf("%c", array[i][k]);
		}
	}
	return 0;
}