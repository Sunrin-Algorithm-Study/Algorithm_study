#include<stdio.h>
int N, L, D, St, Rt;

int main() {
    scanf("%d %d %d", &N, &L, &D); //N곡의 길이 L. 노래 사이 5초 공백 2 5 7
    //전화벨은 D초에 1번씩, 1초동안
    St += L;
    N--;
    while (1) {
        if (Rt >= St && Rt < St + 5) {
            printf("%d", Rt);
            break;
        }
        else if (Rt > St) {
            St += 5;
            if (N > 0) {
                St += L;
                N--;
            }
        }
        if (Rt < St) {
            Rt += D;
        }
    }
    return 0;
}