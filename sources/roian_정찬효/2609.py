A, B = map(int, input().split())
n = A if A < B else B
ma = 1

for i in range(n, 1, -1):
    if A % i == 0 and B % i == 0:
        ma = i
        break

mi = int(A * B / ma)

print(ma)
print(mi)
