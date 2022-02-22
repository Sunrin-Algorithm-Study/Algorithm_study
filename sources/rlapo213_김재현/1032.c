#include<stdio.h>
int n;
int l;
int main() {
	char ans[51] = { 0, };
	char c[51] = { 0, };
	scanf("%d", &n);
	scanf("%s", ans);
	while (ans[l] != '\0')
		l++;
	n -= 1;
	for (int i = 0; i < n; i++) {
		scanf("%s", c);
		for (int j = 0; j < l; j++) {
			if (c[j] != ans[j]) {
				ans[j] = 63;
			}
		}
	}

	printf("%s", ans);
	return 0;
}

