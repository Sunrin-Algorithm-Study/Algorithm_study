N, K = map(int, input().split())
li = list(range(1, N + 1))
ans = []
n = 0
i = -1

while len(li) != 0:
    n += 1
    i += 1
    if i >= len(li):
        i = 0
    if n % K == 0:
        ans.append(li[i])
        del li[i]
        i -= 1

print('<', end='')
for i in range(N - 1):
    print(ans[i], end=', ')
print(f'{ans[N - 1]}>')
