# 1712 손익분기점
A, B, C = map(int, input().split())

cost = C - B

if cost > 0:
    print(A // cost + 1)
else:
    print(-1)