# 10872 팩토리얼
def factorial(n):
    return n * factorial(n-1) if n > 1 else 1

N = int(input())
print(factorial(N))