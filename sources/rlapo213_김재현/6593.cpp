#include<bits/stdc++.h>
using namespace std;
int l, r, c,ax,ay,az;
int dis[40][40][40];

int dx[6] = { 0,1,0,-1,0,0 };
int dy[6] = { 1,0,0,0,0,-1 };
int dz[6] = { 0,0,1,0,-1,0 };
int main() {
	while (1) {
		cin >> l >> r >> c;
		if (!l && !r && !c)
			break;

		queue<tuple<int, int, int>>q;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < r; j++) {
				for (int k = 0; k < c; k++) {
					dis[i][j][k] = -1;
				}
			}
		}
		string board[40][40];
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < r; j++) {
				cin >> board[i][j];
			}
		}

		for (int i = 0; i < l; i++) {
			for (int j = 0; j < r; j++) {
				for (int k = 0; k < c; k++) {
					if (board[i][j][k] == 'S') {
						q.push({ i,j,k });
						dis[i][j][k] = 0;
					}
					if (board[i][j][k] == 'E') {
						az = i;
						ax = j;
						ay = k;
						//2 3 4
					}
				}
			}
		}

		while (!q.empty()) {
			tuple<int, int, int>cur = q.front();
			q.pop();
			for (int dir = 0; dir < 6; dir++) {
				int nz = get<0>(cur)+dx[dir];
				int nx = get<1>(cur)+dy[dir];
				int ny = get<2>(cur)+dz[dir];

				if (nx < 0 || nx >= r || ny < 0 || ny >= c || nz < 0 || nz >= l)
					continue;
				if (dis[nz][nx][ny] != -1 || board[nz][nx][ny]=='#')
					continue;
				q.push({ nz,nx,ny });
				dis[nz][nx][ny] = dis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
			}
		}

		if (dis[az][ax][ay] != -1)
			cout << "Escaped in " << dis[az][ax][ay] << " minute(s).\n";
		else
			cout << "Trapped!\n";
	}

	return 0;
}
