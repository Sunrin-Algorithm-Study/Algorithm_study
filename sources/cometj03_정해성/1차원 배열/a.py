# 2577 숫자의 개수
'''a = int(input())
b = int(input())
c = int(input())

s = str(a*b*c)

for i in range(10):
  print(s.count(str(i)))'''

# 3052 나머지
'''s = set()

for i in range(10):
  n = int(input())
  s.add(n%42)

print(len(s))'''

# 1546 평균
'''n = int(input())
scores = list(map(int, input().split()))

m = max(scores)
newscore = list(map(lambda x: x/m * 100, scores))

print(sum(newscore)/n)'''

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