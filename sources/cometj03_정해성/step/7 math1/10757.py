# 10757 큰 수 A+B
A, B = input().split()
a = list(map(int, A))[::-1]
b = list(map(int, B))[::-1]

length = max(len(a), len(b))
answer = []
