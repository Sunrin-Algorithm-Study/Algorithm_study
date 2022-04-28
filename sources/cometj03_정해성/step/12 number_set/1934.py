T = int(input())

def gcd(a, b):
    return a if b == 0 else gcd(b, a % b)

while T > 0:
    T -= 1
    a, b = map(int, input().split())
    print(a * b // gcd(a, b))
