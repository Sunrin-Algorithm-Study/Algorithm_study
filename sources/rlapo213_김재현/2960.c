#include<stdio.h>
int n, k;
int main() {
	int u[1001];
	scanf("%d %d", &n, &k);
	int cnt = 0;
	for (int i = 2; i <= n; i++)
		u[i] = i;
	for (int i = 2; i <= n; i++) {
		if (!u[i])
			continue;
		for (int j = i; j <= n; j += i) {
			if (!u[j])
				continue;
			cnt++;
			if (cnt == k) {
				printf("%d", u[j]);
				return 0;
			}
			u[j] = 0;
		}
	}
}