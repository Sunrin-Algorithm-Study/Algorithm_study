# 4673 셀프 넘버
selfnum = [False] * 10100

def d(n):
    return n + sum(map(int, str(n)))

for i in range(1, 10001):
    selfnum[d(i)] = True

for i in range(1, 10001):
    if not selfnum[i]:
        print(i)