def fact(n, end):
  result = 1
  while n > end:
    result *= n
    n -= 1
  return result

def nCr(n, r):
  return fact(n, r) // fact(n - r, 1)

n, r = map(int, input().split())
print(nCr(n, r) % 10007)