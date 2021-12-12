N, M = map(int, input().split())
li = list(map(int, input().split()))

ans = 0
ma = M

for i in range(N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):
            su = li[i] + li[j] + li[k]
            mi = M - su
            if 0 <= mi < ma:
                ma = mi
                ans = su

print(ans)
