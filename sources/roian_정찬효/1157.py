S = input().upper()
d = dict()
m = 0
ans = ''

for s in S:
    # count
    if s in d:
        d[s] += 1
    else:
        d[s] = 1

    # detect max value
    if m < d[s]:
        m = d[s]
        ans = s
    elif m == d[s]:
        ans = '?'

print(ans)
