#include<bits/stdc++.h>
using namespace std;

int main() {
	string x;
	cin >> x;
	int l = x.length();
	for (int i = 0; i < l / 2; i++) {
		if (x[i] != x[l - 1 - i]) {
			cout << 0;
			break;
		}
		else {
			if (i == (l / 2) - 1)
				cout << 1;
		}
	}
	if(l==1)
		cout << 1;
	return 0;
}