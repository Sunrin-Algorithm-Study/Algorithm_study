T = int(input())
ans = ''

for i in range(T):
    R, S = input().split()
    R = int(R)

    for s in S:
        ans += s * R
    ans += '\n'

print(ans, end='')
