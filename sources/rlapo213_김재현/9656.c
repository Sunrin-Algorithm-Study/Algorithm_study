#include<stdio.h>

int main() {
	int N,c=0;
	scanf("%d", &N);
	while (N>0) {
		if (N >= 3) // N이 3보다 클 때 3개를 가져가는 것과 1개를 가져가는 선택지가 있는데
			N -= 3; // 둘 중 무엇을 택하든 결과는 같으므로 그냥 3을 빼준다
		else
			N--;

		c++;
	}
	if (!(c % 2))printf("SK");
	else
		printf("CY");
	return 0;
}