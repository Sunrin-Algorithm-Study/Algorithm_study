N, X = map(int, input().split())
ans = list(map(int, input().split()))

for n in ans:
    if n < X:
        print(n, end=' ')
