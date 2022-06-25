#include<stdio.h>
long long int L, R,Lcpy,Rcpy;
int mcnt = 9, cnt, Lcnt,Rcnt;
int main() {
	scanf("%lld %lld", &L, &R);
	Lcpy = L;
	Rcpy = R;
	while (1) {
		Lcpy /= 10;
		Lcnt++;
		if (!Lcpy)break;
	}

	while (1) {
		Rcpy /= 10;
		Rcnt++;
		if (!Rcpy)break;
	}
	if (Rcnt != Lcnt) {
		printf("0");
	}
	else {
		for (long long int i = L; i < R + 1; i++) {
			long long int u = i;
			cnt = 0;
			while (1) {
				int k = u % 10;
				if (k == 8)
					cnt++;
				u /= 10;
				if (!u)break;
			}
			if (cnt < mcnt)
				mcnt = cnt;
			if (!mcnt)
				break;
		}
		printf("%d", mcnt);
	}
	

	return 0;
}