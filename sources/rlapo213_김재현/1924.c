#include<stdio.h>
int x, y;
int main() {
	scanf("%d %d", &x, &y);
	int k=1;
	int day=0;
	while (k != x) {
		if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12)
			day += 31;
		else if (k == 2)
			day += 28;
		else
			day += 30;
		k++;
	}
	day += y;
	day--;
	day %= 7;
	switch (day)
	{
	case 0:
		printf("MON");
		break;
	case 1:
		printf("TUE");
		break;
	case 2:
		printf("WED");
		break;
	case 3:
		printf("THU");
		break;
	case 4:
		printf("FRI");
		break;
	case 5:
		printf("SAT");
		break;
	case 6:
		printf("SUN");
		break;
	}

	return 0;
}