#include<stdio.h>
#include<string.h>

int P;
int q[10];
int main() {
	scanf("%d", &P);

	while (P--) {
		char x[50] = { 0, };
		scanf("%s", x);

		for (int j = 0; j < 38; j++) {
			char array[5] = { 0, };
			array[0] = x[j];
			array[1] = x[j + 1];
			array[2]= x[j + 2];
			if (strcmp(array,"TTT")==0)q[0]++;
			else if (strcmp(array,"TTH") == 0)q[1]++;
			else if (strcmp(array,"THT") == 0)q[2]++;
			else if (strcmp(array,"THH") == 0)q[3]++;
			else if (strcmp(array,"HTT") == 0)q[4]++;
			else if (strcmp(array,"HTH") == 0)q[5]++;
			else if (strcmp(array, "HHT") == 0)q[6]++;
			else q[7]++;
		}

		for (int i = 0; i < 8; i++) {
			printf("%d ", q[i]);
			q[i] = 0;
		}
		printf("\n");
	}

	return 0;
}



