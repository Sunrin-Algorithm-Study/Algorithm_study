#include<bits/stdc++.h>
using namespace std;

int n, c,m ;
int arr[15];
int main() {
	cin >> n;
	while (1) {
		int z = n % 10;
		if (z == 6 || z==9)
			c++;
		arr[z] ++;
		n /= 10;
		if (n == 0)
			break;
	}

	if (c % 2 == 0)
		arr[6] = arr[9] = c / 2;
	else {
		arr[6] = c / 2;
		arr[9] = c / 2 + 1;
	}
	
	for (int i = 0; i < 10; i++) {
		if(arr[i]>m)
			m = arr[i];
	}

	cout << m;

	return 0;
}

