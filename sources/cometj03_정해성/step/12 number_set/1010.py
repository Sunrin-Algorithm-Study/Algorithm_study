def fact(n, end):
  result = 1
  while n > end:
    result *= n
    n -= 1
  return result

def nCr(n, r):
  return fact(n, r) // fact(n - r, 1)

T = int(input())
while T > 0:
    T -= 1
    N, M = map(int, input().split())
    print(nCr(M, N))