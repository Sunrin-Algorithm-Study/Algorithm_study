# 2108 통계학
from collections import Counter

N = int(input())
arr = [int(input()) for _ in range(N)]
arr.sort()

count = Counter(arr).most_common()

print(round(sum(arr) / len(arr)))
print(arr[(N-1)//2])
if len(count) > 1 and count[0][1] == count[1][1]:
    print(count[1][0])
else:
    print(count[0][0])
print(arr[-1] - arr[0])