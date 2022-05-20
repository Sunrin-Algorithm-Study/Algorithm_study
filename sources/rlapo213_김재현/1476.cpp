#include<bits/stdc++.h>

using namespace std;
int a, b, c,Y;
int main() {
	int E, S, M;
	cin >> E >> S >> M;
	while (1) {
		a++;
		b++; 
		c++;
		Y++;
		if (a == 16)
			a = 1;
		if (b == 29)
			b = 1;
		if (c == 20)
			c = 1;
		if (a == E && b == S && c == M)
			break;
	}
	cout << Y;
}