N = int(input())
rings = list(map(int, input().split()))

def gcd(a, b):
  return a if b == 0 else gcd(b, a%b)

for i in range(1, N):
  a, b = rings[0], rings[i]
  g = gcd(a, b)
  print(f"{a//g}/{b//g}")