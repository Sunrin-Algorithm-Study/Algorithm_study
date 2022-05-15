#include<stdio.h>
int L[1000000];
int cnt, u;
int sorted[1000000];
void check(int p) {
    cnt++;
    if (cnt == u) {
        printf("%d", sorted[--p]);
    }
}

void Merge(int* arr, int l, int m, int r) {
    int i = l;
    int j = m + 1;
    int k = l;

    while (i <= m && j <= r) {
        if (arr[i] > arr[j]) {
            sorted[k++] = arr[j++];
        }
        else {
            sorted[k++] = arr[i++];
        }
        check(k);
    }
    while (i <= m) { //이렇게 검사하는 방법도 있다
        sorted[k++] = arr[i++];
        check(k);
    }
    while (j <= r) { //이렇게 검사하는 방법도 있다
        sorted[k++] = arr[j++];
        check(k);
    }
    for (int h = l; h <= r; h++)
        arr[h] = sorted[h];
}

void Merge_Sort(int* arr, int l, int r) {
    if (l >= r)
        return;
    int m = (l + r) / 2;
    Merge_Sort(arr, l, m);
    Merge_Sort(arr, m + 1, r);
    Merge(arr, l, m, r);
}


int main() {
    int n;
    scanf("%d %d", &n, &u);
    for (int i = 0; i < n; i++)
        scanf("%d", &L[i]);
    Merge_Sort(L, 0, n - 1);
    if (cnt < u)
        printf("-1");


    return 0;
}