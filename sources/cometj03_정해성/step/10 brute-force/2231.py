# 2231 분해합
N = int(input())

def sum_digit(n):
    if n < 10:
        return n
    return n%10 + sum_digit(n//10)

t = int(len(str(N))) * 9

for x in range(N-t, N):
    if N == sum_digit(x) + x:
        print(x)
        break
else:
    print(0)