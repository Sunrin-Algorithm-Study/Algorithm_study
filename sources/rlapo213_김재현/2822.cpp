#include<iostream>
#include <algorithm>
using namespace std; 
int arr[15][15],k[8];
int main() {
	for (int i = 0; i < 8; i++) {
		scanf("%d", &k[i]);
		arr[i][0] = k[i];
		arr[i][1] = i;
	}
	sort(k, k + 8);

	printf("%d\n", k[7] + k[6] + k[5] + k[3] + k[4]);
	for (int j = 0; j < 8; j++) {
		for (int i = 7; i > 2; i--) {
			if (arr[j][0] == k[i])
				printf("%d ", arr[j][1]+1);
		}
	}
	

	return 0;
}