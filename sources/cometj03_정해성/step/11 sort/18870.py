# 18870 좌표 압축
N = int(input())
rawArr = list(map(int, input().split()))

s = sorted(list(set(rawArr)))
L = len(s)

dic = dict()
for i in range(L):
    key = str(s[i])
    dic[key] = i

for n in rawArr:
    print(dic[str(n)], end=' ')