from sys import stdin
from collections import deque

N = int(stdin.readline())
d = deque()

for i in range(N):
    s = stdin.readline().strip()

    if 'push' in s:
        d.append(s.split()[1])
    elif 'pop' == s:
        print(-1 if len(d) == 0 else d.popleft())
    elif 'size' == s:
        print(len(d))
    elif 'empty' == s:
        print(1 if len(d) == 0 else 0)
    elif 'front' == s:
        print(-1 if len(d) == 0 else d[0])
    elif 'back' == s:
        print(-1 if len(d) == 0 else d[-1])
