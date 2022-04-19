# 2447 별 찍기 - 10
N = int(input())
arr = [[' ']*N for _ in range(N)]

def star(x, y, n):
  if n == 1:
    arr[x][y] = '*'
    return
  for i in range(3):
    for j in range(3):
      if i == j == 1:
        continue
      t = n//3
      star(x + t*j, y + t*i, t)


star(0, 0, N)
for row in arr:
  for e in row:
    print(e, end='')
  print()