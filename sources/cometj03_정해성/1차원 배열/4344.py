# 4344 평균은 넘겠지
n = int(input())
while n > 0:
  n -= 1
  t = list(map(int, input().split()))
  scores = t[1:]
  scores.sort()
  mean = sum(scores) / t[0]

  i = 0
  while t[0] > i:
    if scores[i] > mean:
        break
    i += 1
  p = (t[0] - i) / t[0] * 100
  print('%.3f%%' % p)