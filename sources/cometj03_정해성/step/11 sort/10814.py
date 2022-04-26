# 10814 나이순 정렬
N = int(input())
arr = [input().split() for _ in range(N)]
arr.sort(key=lambda x: int(x[0]))

for a in arr:
    print(a[0], a[1])