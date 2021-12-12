n = int(input())
li = []

for i in range(n):
    li.append(input())

for i in range(n):

    ans = 0
    n = 0

    for s in li[i]:
        if s == 'O':
            n += 1
            ans += n
        else:
            n = 0

    print(ans)
