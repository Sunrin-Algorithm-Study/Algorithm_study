#include<stdio.h>

int main() {
	int N,c=0;
	scanf("%d", &N);
	while (N>0) {
		if (N >= 3) // N�� 3���� Ŭ �� 3���� �������� �Ͱ� 1���� �������� �������� �ִµ�
			N -= 3; // �� �� ������ ���ϵ� ����� �����Ƿ� �׳� 3�� ���ش�
		else
			N--;

		c++;
	}
	if (!(c % 2))printf("SK");
	else
		printf("CY");
	return 0;
}