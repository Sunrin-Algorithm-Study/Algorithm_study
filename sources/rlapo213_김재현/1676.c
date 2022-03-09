#include<stdio.h>
int cnt;
int q, r;
int t = 0;

void ftu(int x) {
	if (!(x % 10)) {
		cnt++;
		ftu(x / 10);
	}
	else if (!(x % 2)) {
		q++;
		ftu(x / 2);
	}
	else if (!(x % 5)) {
		r++;
		ftu(x / 5);
	}
}
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		ftu(i);
	}
	while (q > 0 && r > 0) {
		cnt++;
		q--;
		r--;
	}

	printf("%d", cnt);

}