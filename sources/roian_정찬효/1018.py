N, M = map(int, input().split())
li = []

# input
for i in range(N):
    li.append(list(input()))

# B: 1 W: -1
for i in range(N):
    for j in range(M):
        li[i][j] = 1 if li[i][j] == 'B' else -1

ans = 32  # 8 * 8 / 2


def scan(lis, c, n, m, fin):
    f = 0
    for k in range(n, n + 8):
        for l in range(m, m + 8):
            if c * lis[k][l] != -1:
                f += 1
                if f == fin:
                    break
            c *= -1
        else:
            c *= -1
            continue
        break  # exceed current minimum try
    return f


for i in range(N - 7):
    for j in range(M - 7):

        b = scan(li, 1, i, j, ans)
        w = scan(li, -1, i, j, ans)
        s = b if b < w else w

        if s < ans:
            ans = s

print(ans)
