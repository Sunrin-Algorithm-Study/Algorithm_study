cnt = 0
cnt_dp = 0
def fib(n):
  global cnt
  if (n == 1 or n == 2):
    cnt += 1
    return 1;
  return fib(n-1) + fib(n-2)

def fibonacci(n):
  global cnt_dp
  f = [0, 1, 1]
  for i in range(3, n+1):
    cnt_dp += 1
    f.append(f[i-1] + f[i-2])
  return f[n]

n = int(input())
fib(n)
fibonacci(n)
print(cnt, cnt_dp)