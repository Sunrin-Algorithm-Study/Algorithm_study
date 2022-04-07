# 1157 단어공부
counts = [0] * 30
init = ord('A')

S = input().upper()

for x in S:
    i = ord(x) - init
    counts[i] += 1

index = counts.index(max(counts))

counts.sort(reverse=True)

if counts[0] == counts[1]:
    print('?')
else:
    print(chr(init + index))
