N, M = map(int, input().split())
s = []
def f():
  if len(s) == M:
    print(*s)
    return
  for i in range(1, N+1):
    s.append(i)
    f()
    s.pop()
f()