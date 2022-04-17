# 1085 직사각형에서 탈출
x, y, w, h = map(int, input().split())

print(min(min(x, w-x), min(y, h-y)))