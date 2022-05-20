#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		getchar();

		char a[10000];
		scanf("%[^\n]s", a);
		int len = 0;
		while (a[len] != '\0')
			len++;
		for (int i = 0; i < len; i++) {
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= 32;
		}
		int flag = 0;
		for (int i = 0; i < len/2; i++) {
			if (a[i] != a[len-1 - i]) {
				flag = 1;
				break;
			}
		}
		if (!flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
	


	return 0;
}