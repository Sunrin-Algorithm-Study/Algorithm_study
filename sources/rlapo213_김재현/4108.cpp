#include <iostream>

using namespace std;
int R, C = 1;
char a[1000][1000];
void S(int x, int y) {
	int count = 0;
	if (x > 0 && a[x - 1][y] == '*') {
		count++;
	}
	if (y > 0 && a[x][y - 1] == '*') {
		count++;
	}
	if (x < R - 1 && a[x + 1][y] == '*') {
		count++;
	}
	if (y < C - 1 && a[x][y + 1] == '*') {
		count++;
	}
	if (x > 0 && y > 0 && a[x - 1][y - 1] == '*') {
		count++;
	}
	if (y > 0 && x < R - 1 && a[x + 1][y - 1] == '*') {
		count++;
	}
	if (x < R - 1 && y < C - 1 && a[x + 1][y + 1] == '*') {
		count++;
	}
	if (y < C - 1 && x>0 && a[x - 1][y + 1] == '*') {
		count++;
	}

	cout << count;
}
int main()
{
	while (1) {
		if (R == 0 && C == 0)
			break;
		cin >> R >> C;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (a[i][j] == '.') {
					S(i, j);
				}
				else
					cout << '*';
			}
			cout << '\n';

		}
		a[0][0] = '\0';
	}

	return 0;
}
