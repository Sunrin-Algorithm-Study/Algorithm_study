#include<stdio.h>
int a, b, i, j, u, k;
int E[10000000];//0이면 소수 //1이면 소수 아님   *천만 이상 1억 이하인 소수인 팰린드롬은 없다* 
//팰린드롬을 먼저 구하고 그것들 중 소수를 구하는 방법도 있다
int main() {
	scanf("%d %d", &a, &b);
	for (i = 2; i <= 10000000; i++) {
		if (E[i] == 1)
			continue;
		for (j = 2 * i; j <= 10000000; j += i) {
			E[j] = 1;
		}
	}
	if (b > 10000000)
		b = 9999999;
	for (i = a; i <= b; i++) {
		if (E[i])
			continue;
		u = i, k = i;
		int len = 0;
		int p = 1;
		while (u != 0) {
			len++;
			p *= 10;
			u /= 10;
		}
		p /= 10;
		int f = 0;
		for (j = 0; j < len / 2; j++) {
			int s = k / p % 10;
			int e = k % 10;
			p /= 100;
			k /= 10;
			if (s != e) {
				f = 1;
				break;
			}
		}
		if (!f)
			printf("%d\n", i);
	}
	printf("-1");
	return 0;
}