N = int(input())

for i in range(N):
    for j in range(N):
        print(' ' if N-j > i+1 else '*', end='')
    print('')
