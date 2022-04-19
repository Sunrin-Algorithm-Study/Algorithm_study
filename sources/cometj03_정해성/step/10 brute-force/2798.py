# 2798 블랙잭
from itertools import combinations

N, M = map(int, input().split())
items = list(map(int, input().split()))

item_combi = combinations(items, 3)
item_combi_sum = list(map(sum, item_combi))

item_combi_sum.sort()

ans = 0
for i in item_combi_sum:
    if i > M:
        break
    ans = i
print(ans)