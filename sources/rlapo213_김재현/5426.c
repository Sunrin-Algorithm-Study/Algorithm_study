#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int T;
    char a[100000];
    scanf("%d", &T);
    while (T--) {
        scanf("%s", a);
        int l = strlen(a);
        int s = sqrt(l);
        for (int j = 1; j <= s; j++) {
            for (int i = 1; i <= s; i++) {
                printf("%c", a[s * i - j]);
            }

            l++;
        }

        printf("\n");
        a[0] = '\0';
    }
    return 0;
}