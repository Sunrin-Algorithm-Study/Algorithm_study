#include<stdio.h>
int N, L, D, St, Rt;

int main() {
    scanf("%d %d %d", &N, &L, &D); //N���� ���� L. �뷡 ���� 5�� ���� 2 5 7
    //��ȭ���� D�ʿ� 1����, 1�ʵ���
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