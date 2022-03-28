#include<stdio.h>
int T, N, M;
int main() {
	scanf("%d", &T);
	while (T--) {
		int cnt = 0;
		scanf("%d %d", &N, &M);
		for (int i = N; i <= M; i++) {
			int k = i;
			while ((k / 10) != 0) {
				if (k % 10 == 0)
					cnt++;
				k /= 10;
			}
			if (k == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}