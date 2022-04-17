# 1002 터렛
T = int(input())
while T > 0:
    T -= 1
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    d = ((x1-x2)**2 + (y1-y2)**2)**0.5

    if d == 0:
        print(-1 if r1 == r2 else 0)
        continue

    if abs(r1 - r2) < d < r1 + r2:
        print(2)
    elif abs(r1 - r2) == d or d == r1 + r2:
        print(1)
    else:
        print(0)