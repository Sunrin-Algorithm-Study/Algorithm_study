#include<bits/stdc++.h>

using namespace std;
long long int n;

int main() {
	cin >> n;
	long long int m = n;

	getchar();
	while (n--) {
		string x;
		int ck[30] = { 0 };
		getline(cin, x);

		for (int i = 0; i < x.length(); i++) {
			if ((x[i] >= 'a' && x[i] <= 'z')) {
				ck[x[i] - 'a']++;
			}
			else if (x[i] >= 'A' && x[i] <= 'Z') {
				ck[x[i] - 'A']++;
			}
		}
		int Tflag = 0;
		int Dflag = 0;
		int Pflag = 0;
		for (int i = 0; i < 26; i++) {
			if (ck[i] >= 3) {
				Tflag++;
			}
			if (ck[i] >= 2) {
				Dflag++;
			}
			if (ck[i] >= 1) {
				Pflag++;
			}
		}
		if (Tflag == 26)
			printf("Case %lld: Triple pangram!!!\n", m - n);
		else if (Dflag == 26)
			printf("Case %lld: Double pangram!!\n", m - n);
		else if (Pflag == 26)
			printf("Case %lld: Pangram!\n", m - n);
		else
			printf("Case %lld: Not a pangram\n", m - n);

	}
	return 0;
}