N = int(input())
li = []

for i in range(N):
    t = tuple(map(int, input().split()))
    t = tuple(reversed(t))
    li.append(t)

li = sorted(li)

for i in range(N):
    print(li[i][1], li[i][0])
