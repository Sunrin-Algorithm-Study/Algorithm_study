m = 0
pos = 0

for i in range(9):
    n = int(input())
    if n > m:
        m = n
        pos = i + 1

print(m)
print(pos)
