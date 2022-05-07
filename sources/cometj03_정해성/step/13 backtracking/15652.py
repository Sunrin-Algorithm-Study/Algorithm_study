N, M = map(int, input().split())
s = []
def f(start):
  if len(s) == M:
    print(*s)
    return
  for i in range(start, N+1):
    s.append(i)
    f(i)
    s.pop()
f(1)