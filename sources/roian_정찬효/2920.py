li = list(map(int, input().split()))

ans = 'ascending' if li[0] < li[1] else 'descending'

for i in range(1, 7):
    if ans == 'ascending' and li[i] > li[i + 1]:
        ans = 'mixed'
        break
    elif ans == 'descending' and li[i] < li[i + 1]:
        ans = 'mixed'
        break

print(ans)
