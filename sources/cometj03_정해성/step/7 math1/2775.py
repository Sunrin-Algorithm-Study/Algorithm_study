# 2775 부녀회장이 될테야
'''
1 2 3 4 5
1 3 6 10 15
1 4 10 20 35
1 5 ...
'''

T = int(input())

arr = [[1] * 15]

for i in range(1, 15):
  arr[0][i] = i
  arr.append([1] * 15) # 내부 리스트 복사 방지

for i in range(1, 15):
  for j in range(2, 15):
    arr[i][j] = arr[i][j-1] + arr[i-1][j]

while T > 0:
  T -= 1
  k = int(input())
  n = int(input())
  print(arr[k][n])