#include<stdio.h>
#include<string.h>
char Q[100];
int N[100];
int midcheck, s;
int main() {
    scanf("%s", Q);
    int len = strlen(Q);
    for (int i = 0; i < len; i++) {
        N[Q[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (N[i] != 0) {
            while (1) {
                if (N[i] == 0 || N[i] == 1)
                    break;
                Q[len - s - 1] = Q[s] = i + 'A';
                s++;
                N[i] -= 2;

            }
            if (N[i] == 1) {
                if (len % 2 == 0) {
                    printf("I'm Sorry Hansoo");
                    return 0;
                }

                if (!midcheck) {
                    midcheck = 1;
                    Q[(len / 2)] = i + 'A';
                }
                else {
                    printf("I'm Sorry Hansoo");
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c", Q[i]);
    }
    return 0;
}