#include<bits/stdc++.h>
using namespace std;
int n, cnt;
bool a[100004];
bool b[100004];
bool c[100004];

bool s() {
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i])
			return false;
	}
	return true;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%1d", &c[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%1d", &b[i]);
	}
	//�׳� ��ư� ������������
	//�Ǿ� �ǵ� 2���� bitmask�� ������ ����ġ�� i ������ i+1, i+2 �ٲ�ٰ� �����ϸ�
	//�� ĭ �Ѿ�� �ٲ� �� �����ϱ� �ٸ��� �ٲٴ� ������

	for (int u = 0; u < (1 << 2); u++) {
		for (int i = 0; i < n; i++)
			a[i] = c[i];
		cnt = 0;
		if (u & (1 << 0)) {
			a[0] = !a[0];
			a[1] = !a[1];
			cnt++;
		}
		if (u & (1 << 1)) {
			a[n - 1] = !a[n - 1];
			a[n - 2] = !a[n - 2];
			cnt++;
		}
		for (int i = 0; i < n - 2; i++) {
			if (a[i] != b[i]) {
				a[i] = !a[i];
				a[i + 1] = !a[i + 1];
				a[i + 2] = !a[i + 2];
				cnt++;
			}
		}

		if (s()) {
			cout << cnt;
			return 0;
		}

	}

	cout << -1;
	return 0;
}