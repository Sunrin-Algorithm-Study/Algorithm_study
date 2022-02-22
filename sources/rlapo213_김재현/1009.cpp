#include<iostream>
#include<cmath>

using namespace std;
int a, b, n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a>> b;
		while(b != (1||2||3) && b>4 ){
			b -= 4;
		}
		int c = pow(a, b);
		if ((c % 10) == 0) {
			cout << 10 << endl;
		}
		else {
			cout << (c % 10) << endl;
		}
		
	}
	return 0;
}