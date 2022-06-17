import sys
input = sys.stdin.readline

N = int(input())

dp = [0, 1, 2] + [0]*N

for i in range(3, N+1):
  dp[i] = (dp[i-1] + dp[i-2]) % 15746

print(dp[N])