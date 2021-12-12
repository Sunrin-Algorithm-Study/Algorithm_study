N = int(input())
n = 1
ans = 1

while True:
    if N <= n:
        break
    n += ans * 6
    ans += 1

print(ans)
