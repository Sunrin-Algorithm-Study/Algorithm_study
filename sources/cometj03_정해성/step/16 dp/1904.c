#include <stdio.h>

int dp[1000001] = {
    0,
    1,
    2,
};
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 3; i <= N; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    printf("%d\n", dp[N]);
}