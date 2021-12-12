li = list(map(int, input().split()))
su = 0

for i, n in enumerate(li):
    su += li[i] * li[i]

ans = su % 10
print(ans)
