# 2577 숫자의 개수
a = int(input())
b = int(input())
c = int(input())

s = str(a*b*c)

for i in range(10):
  print(s.count(str(i)))