s = input()
li = [-1 for i in range(26)]

for i, s1 in enumerate(s):
    pos = ord(s1) - ord('a')  # ord: char to ascii
    if li[pos] == -1:
        li[pos] = i

for i in range(26):
    print(li[i], end=' ')
