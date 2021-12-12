T = int(input())

for i in range(T):
    su = 0
    s = input()

    for s1 in s:
        if s1 == '(':
            su += 1
        else:
            su -= 1
        if su < 0:
            break

    print('YES' if su == 0 else 'NO')
