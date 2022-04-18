# 11729 하노이 탑 이동 순서
steps = []
def hanoi(n, pos, target):
    if n == 1:
        steps.append(f'{pos} {target}')
        return

    # new_target = pos와 target이 아닌 곳
    new_target = 1+2+3 - pos - target

    hanoi(n-1, pos, new_target)
    steps.append(f'{pos} {target}')
    hanoi(n-1, new_target, target)


N = int(input())
hanoi(N, 1, 3)

print(len(steps))
for s in steps:
    print(s)