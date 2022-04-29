N = int(input())
cnt2 = 0
cnt5 = 0

while N > 0:
    n = N
    while n % 2 == 0:
        cnt2 += 1
        n //= 2
    while n % 5 == 0:
        cnt5 += 1
        n //= 5
    N -= 1
print(min(cnt2, cnt5))