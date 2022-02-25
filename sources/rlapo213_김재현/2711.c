#include<stdio.h>
int t ,p;

int main() {
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		char array[100] = { 0, };
		scanf("%d %s", &p, array);
		int l = 0;
		while (array[l] != '\0') {
			l++;
		}
		for (int j = 0; j < l; j++) {
			if (j == p - 1)continue;
			printf("%c", array[j]);
		}
		printf("\n");
	}
}