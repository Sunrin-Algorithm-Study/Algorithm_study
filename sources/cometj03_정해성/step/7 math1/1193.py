# 1193 분수찾기
X = int(input())

n, s = 1, 1
while not (s <= X < s + n):
    s += n
    n += 1

rest = X - (n * (n-1))//2

if n % 2 == 0:
    print(f'{rest}/{n - rest + 1}')
else:
    print(f'{n - rest + 1}/{rest}')