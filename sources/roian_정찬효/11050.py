N, K = map(int, input().split())

a = 1
for i in range(N, N - K, -1):
    a *= i

b = 1
for i in range(K, 1, -1):
    b *= i

print(int(a / b))
