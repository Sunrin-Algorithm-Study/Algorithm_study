# 9020 골드바흐의 추측
def is_prime(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

T = int(input())
while T > 0:
    T -= 1
    n = int(input())
    h = n//2
    
    for i in range(h):
        if is_prime(h - i) and is_prime(h + i):
            print(h - i, h + i)
            break
