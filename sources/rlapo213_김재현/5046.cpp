#include<bits/stdc++.h>
using namespace std;
int N, B, H, W, p, a;
int M = 500001;

int main() {
	cin >> N >> B >> H >> W;
	for (int k = 0; k < H; k++) {
		cin >> p;
		for (int i = 0; i < W; i++) {
			cin >> a;
			if (a > N && p*N<=B && p * N<M) {
				M = p * N;
			}
		}
	}
	if (M == 500001)
		cout << "stay home";
	else
		cout << M;
	return 0;
}