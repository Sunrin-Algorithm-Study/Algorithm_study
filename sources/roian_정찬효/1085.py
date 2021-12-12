x, y, w, h = map(int, input().split())

hor = x if (x < w - x) else w - x
ver = y if (y < h - y) else h - y
ans = hor if hor < ver else ver

print(ans)
