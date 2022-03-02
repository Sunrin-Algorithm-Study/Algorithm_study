#include<stdio.h>

char array[110];
int main() {

	scanf("%[^\n]s", array);
	int l = 0;
	while (array[l] != '\0')l++;
	for (int i = 0; i < l; i++) {
		char a = array[i];
		if (a == 32)printf(" ");
		else if (a > 47 && a < 58)
			printf("%c", a);
		else if (a > 64 && a< 91) {
			a += 13;
			if (a > 90)
				a -= 26;
			printf("%c", a);
		}
		else {
			if (a+13 > 122)
				a -= 13;
			else {
				a += 13;
			}
			printf("%c", a);
		}
	}

	return 0;
}