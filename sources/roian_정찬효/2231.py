N = int(input())
s = str(N)

if N - (len(s) * 9) > 0:
    n = N - (len(s) * 9)
else:
    n = 1

for i in range(n, N + 1):
    su = i
    for s1 in str(i):
        su += int(s1)
    if su == N:
        print(i)
        break
else:
    print(0)
