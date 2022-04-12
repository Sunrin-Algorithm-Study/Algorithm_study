# 2839 설탕 배달
N = int(input())

five_cnt = N // 5

while True:
  rest = N - five_cnt*5
  if rest % 3 == 0:
    print(five_cnt + rest//3)
    break

  if five_cnt > 0:
    five_cnt -= 1
    continue
  print(-1)
  break