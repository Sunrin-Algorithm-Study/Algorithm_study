n = 1
for i in range(3):
    n *= int(input())

s = str(n)
li = [0 for i in range(10)]

for s1 in s:
    li[int(s1)] += 1

for i in range(10):
    print(li[i])
