#include<bits/stdc++.h>
using namespace std;
int t, n, nxt;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout.tie(0);

    cin >> t;

    while (t--) {

        cin >> n;

        int l[100004];
        int c[100004];
        fill(c, c + n + 1, -2);
        queue<int>m;

        for (int i = 1; i <= n; i++)
            cin >> l[i];

        for (int s = 1; s <= n; s++) {
            if (c[s] == 0)
                continue;

            nxt = l[s];
            m.push(s);
            c[s] = 1; //start

            while (1) {


                if (c[nxt] == 1) { // 1
                    c[nxt] = 0;
                    break;

                }

                else if (c[nxt] == -2) { //not visited
                    c[nxt] = 0;
                    m.push(nxt);
                    nxt = l[nxt];
                }

                else {
                    while (!m.empty()) {

                        if (l[m.back()] == m.front()) {
                            break;
                        }
                        c[m.front()] = -1;

                        m.pop();

                    }
                    break;
                }
            }

            while (!m.empty()) {

                m.pop();

            }

        }

        int cnt = 0;

        for (int s = 1; s <= n; s++) {

            if (c[s] == -1)

                cnt++;

        }

        cout << cnt << '\n';

    }

    return 0;

}