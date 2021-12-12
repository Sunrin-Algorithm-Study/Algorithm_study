T = int(input())

for i in range(T):
    H, W, N = map(int, input().split())

    w = int(N / H) + 1
    h = N % H

    if N % H == 0:
        h = H
        w -= 1

    ans = h * 100 + w

    print(ans)
