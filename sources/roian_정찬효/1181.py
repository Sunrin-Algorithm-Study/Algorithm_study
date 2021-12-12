N = int(input())
li = []

for i in range(N):
    li.append(input())

li = list(set(li))
li = sorted(li)

for i in range(50):
    for s in li:
        if len(s) == i + 1:
            print(s)
