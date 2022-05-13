N = int(input())
num = list(map(int, input().split()))
op = list(map(int, input().split())) # + - * //
results = []

def dfs(depth, val):
  if depth == N:
    results.append(val)
    return
  if op[0]:
    op[0] -= 1
    dfs(depth+1, val + num[depth])
    op[0] += 1
  if op[1]:
    op[1] -= 1
    dfs(depth+1, val - num[depth])
    op[1] += 1
  if op[2]:
    op[2] -= 1
    dfs(depth+1, val * num[depth])
    op[2] += 1
  if op[3]:
    op[3] -= 1
    dfs(depth+1, int(val / num[depth]))
    op[3] += 1

dfs(1, num[0])
print(max(results))
print(min(results))