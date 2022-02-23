#include<stdio.h>

char array[10];
int main() {
	
	while (1) {

		scanf("%s", array);
		if (array[0] == '0')break;
		int l = 0;
		while (array[l] != '\0')l++;

		int i = 0;
		while (1) {
			if (array[i++] == array[--l]) {
				if (l < 2) {
					printf("yes\n");
					break;
				}
			}
			else {
				printf("no\n");
				break;
			}


			
		}
		char array[10] = {0,};
	}
	return 0;
}