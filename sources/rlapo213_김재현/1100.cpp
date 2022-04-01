
#include<iostream>
using namespace std;

char C[20][20];
int main() {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin>>C[i][j];
        }
    }
    int j = 0;
    for (int i = 0; i < 8; i++) {
        if (i % 2)
            j = 1;
        else
            j = 0;
        for (; j < 8; j += 2) {
            if (C[i][j] == 70) {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}