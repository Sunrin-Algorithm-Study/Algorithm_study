#include<stdio.h>
int N,i;

int main() {
	scanf("%d", &N);
	while (N > 0) {
		i++;
		N -= i;
	}
	N += i;
	if((i+1)%2==0)
		printf("%d/%d", i + 1 - N,N);
	else {
		printf("%d/%d", N, i + 1 - N);
	}
	
	return 0;
}