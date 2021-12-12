T = int(input())
ans = []

for i in range(T):
    A, B = map(int, input().split())
    ans.append(A + B)

for n in ans:
    print(n)
