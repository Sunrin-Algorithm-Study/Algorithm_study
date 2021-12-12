K, N = map(int, input().split())
li = []

for i in range(K):
    li.append(int(input()))

i = max(li)
while True:
    su = 0
    for n in li:
        su += int(n / i)
    if su >= N:
        print(i)
        break
    i = int(i / 2)

# TODO: study binary search
