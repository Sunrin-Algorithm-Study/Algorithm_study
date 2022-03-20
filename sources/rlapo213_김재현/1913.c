#include<stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int u, j, N, k, a,g,f;
int main() {
	scanf("%d\n%d", &N,&k);
    a = N*N;
    int** m = malloc(sizeof(int*) * N);   // 이중 포인터에 (int 포인터 크기 * row)만큼
                                             // 동적 메모리 할당. 배열의 세로

    for (int i = 0; i < N; i++)            // 세로 크기만큼 반복
    {
        m[i] = malloc(sizeof(int) * N);    // (int의 크기 * col)만큼 동적 메모리 할당. 배열의 가로
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


    for (int i = 0; i < N; i++)    // 세로 크기만큼 반복
    {
        free(m[i]);                  // 2차원 배열의 가로 공간 메모리 해제
    }

    free(m);    // 2차원 배열의 세로 공간 메모리 해제

    return 0;
}