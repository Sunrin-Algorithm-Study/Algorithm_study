# 2869 달팽이는 올라가고 싶다
A, B, V = map(int, input().split())

up = A - B

if (V - A) % up == 0:
    print((V - A) // up + 1)
else:
    print((V - A) // up + 2)