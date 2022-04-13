# 10757 큰 수 A+B
A, B = input().split()
a = list(map(int, A))[::-1]
b = list(map(int, B))[::-1]


if len(a) < len(b):
    a, b = b, a

answer = []
length = len(b) # 길이 중 최소

for i in range(length):
    answer.append(a[i] + b[i])
answer += a[length:] + [0]

for i in range(len(answer) - 1):
    if answer[i] >= 10:
        answer[i+1] += 1
        answer[i] %= 10

if answer[-1] == 0:
    del answer[-1]

for n in answer[::-1]:
    print(n, end='')
