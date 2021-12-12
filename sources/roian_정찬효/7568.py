N = int(input())
li = []
ans = [1 for i in range(N)]

for i in range(N):
    a = tuple(map(int, input().split()))
    rank = 1

    for j, t in enumerate(li):
        if a[0] > t[0] and a[1] > t[1]:
            ans[j] += 1
        elif a[0] < t[0] and a[1] < t[1]:
            rank += 1

    li.append(a)
    ans[i] = rank

for i in range(N):
    print(ans[i], end=' ')
