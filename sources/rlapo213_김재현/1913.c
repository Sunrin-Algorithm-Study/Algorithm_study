#include<stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int u, j, N, k, a,g,f;
int main() {
	scanf("%d\n%d", &N,&k);
    a = N*N;
    int** m = malloc(sizeof(int*) * N);   // ���� �����Ϳ� (int ������ ũ�� * row)��ŭ
                                             // ���� �޸� �Ҵ�. �迭�� ����

    for (int i = 0; i < N; i++)            // ���� ũ�⸸ŭ �ݺ�
    {
        m[i] = malloc(sizeof(int) * N);    // (int�� ũ�� * col)��ŭ ���� �޸� �Ҵ�. �迭�� ����
    }
    int p = (N / 2)+1;
    int y = N-1;
    int r = 0;
    while (p--) {
        for (j=r; j < y+1; j++) { 
            m[j][u] = a--;
        }
        for (j = 0; j < N-1-(2*r); j++) {
            m[y][++u] = a--;
        }

        for (j = 0; j < N - 1 - (2 * r); j++) {
            m[--u][y] = a--;
        }
        for (j = N - 2 - (2 * r); j >=1 ; j--) {
            m[u][--y] = a--;
        }
        y += N - 2 - (2 * r);
        r++; //1
        y--; //3
        u++;

    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%d ", m[i][j]);     
            if (m[i][j] == k) {
                g = i;
                f = j;
            }
        }
        printf("\n");          
    }
    printf("%d %d", g+1, f+1);


    for (int i = 0; i < N; i++)    // ���� ũ�⸸ŭ �ݺ�
    {
        free(m[i]);                  // 2���� �迭�� ���� ���� �޸� ����
    }

    free(m);    // 2���� �迭�� ���� ���� �޸� ����

    return 0;
}