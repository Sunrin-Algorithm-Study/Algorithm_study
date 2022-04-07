# 5622 다이얼
dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']

s = input()

time = 0
for c in s:
    i = 0
    while i < 8:
        if c in dial[i]:
            break
        i += 1
    time += i + 3

print(time)