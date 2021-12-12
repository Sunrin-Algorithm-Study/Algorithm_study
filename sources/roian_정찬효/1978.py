import math

N = int(input())
li = list(map(int, input().split()))
ans = 0

for i in range(N):
    n = li[i]
    if n == 1:
        continue
    for j in range(2, int(math.sqrt(n)) + 1):
        if n % j == 0:
            break
    else:
        ans += 1

print(ans)
