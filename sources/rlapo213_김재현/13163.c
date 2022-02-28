#include<stdio.h>
#include<string.h>

int N;
int main() {
	
	scanf("%d", &N);
	while (N--) {
		while (getchar() != '\n');
		char array[110] = { 0, };
		scanf("%[^\n]s", array);
		int i = strlen(array);
		printf("god");
		int c = 0;
		for (int j = 0; j < i; j++) {
			if (array[j] == 32)c++;
			else if (c > 0) //array[j] != 32
				printf("%c", array[j]);
			
		}
		printf("\n");
	}
	return 0;
}







