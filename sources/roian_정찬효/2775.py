T = int(input())

li = [list(range(1, 15))]

for i in range(1, 15):
    li.append([1])
    su = 1
    for j in range(1, 14):
        su += li[i - 1][j]
        li[i].extend([su])

for i in range(T):
    k = int(input())
    n = int(input())
    print(li[k][n - 1])
