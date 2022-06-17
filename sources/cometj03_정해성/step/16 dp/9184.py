arr = [[[0]*51 for _ in range(51)] for _ in range(51)]

def w(a, b, c):
  if a <= 0 or b <= 0 or c <= 0:
    return 1
  if a > 20 or b > 20 or c > 20:
    return w(20, 20, 20)
    
  T = arr[a][b][c]
  if T: return T
    
  if a < b < c:
    T = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
    arr[a][b][c] = T
    return T
  
  T = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
  arr[a][b][c] = T
  return T

while True:
  a, b, c = map(int, input().split())
  if a == b == c == -1:
    break
  print(f"w({a}, {b}, {c}) = {w(a, b, c)}")