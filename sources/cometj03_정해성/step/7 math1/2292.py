# 2292 벌집
N = int(input())

block = 1
step = 1
while block <= 2_000_000_000:
    if N == 1:
        print(1)
        break
    addBlock = step * 6
    if block < N <= block + addBlock:
        print(step + 1)
        break
    block += addBlock
    step += 1