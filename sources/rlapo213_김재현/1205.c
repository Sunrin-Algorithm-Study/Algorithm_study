#include<stdio.h>
int n, p;
int li[100];
unsigned long long int a,new_num;
int main() {
	scanf("%d %d %d", &n, &new_num, &p);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &li[i]);
	}
	int rcnt = 1;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (li[i] > new_num)
			rcnt++;
		else if (li[i] == new_num)
			cnt++;
	}
	if (cnt+rcnt <= p)
		printf("%d", rcnt);
	else
		printf("-1");

}