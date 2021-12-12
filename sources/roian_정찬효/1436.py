N = int(input())
i = 666
pos = 0

while True:
    if '666' in str(i):
        pos += 1
        if pos == N:
            break
    i += 1

print(i)
