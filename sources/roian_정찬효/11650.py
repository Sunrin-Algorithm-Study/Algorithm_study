N = int(input())
li = []

for i in range(N):
    li.append(tuple(map(int, input().split())))

li = sorted(li)

for i in range(N):
    print(li[i][0], li[i][1])
