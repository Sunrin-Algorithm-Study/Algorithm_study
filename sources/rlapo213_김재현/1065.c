#include<stdio.h>
int cnt;
int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (i < 100)
			cnt++;

		else if (2* ((i / 10) % 10) == i % 10 + i / 100)
			cnt++;

	}
	printf("%d", cnt);
	return 0;
}