# 1316 그룹 단어 체커
flags = [0] * 30

N = int(input())
count = 0
init = ord('a')

def check(s):
    index = ord(s[0]) - init
    flags[index] += 1

    for i in range(1, len(s)):
        index = ord(s[i]) - init
        if flags[index] != 0 and s[i-1] != s[i]:
            return False
        flags[index] += 1         
    return True

while N > 0:
    s = input()
    flags = [0] * 30
    if check(s):
        count += 1
    N -= 1

print(count)