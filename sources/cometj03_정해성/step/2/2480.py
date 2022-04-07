a, b, c = map(int, input().split())

s = set([a, b, c])

if len(s) == 1:
    num = max(s)
    print(10000 + num*1000)
elif len(s) == 3:
    num = max(s)
    print(num*100)
else:
    num = a + b + c - sum(s)
    print(1000 + num*100)