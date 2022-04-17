# 4948 베르트랑 공준
while True:
    n = int(input())

    if n == 0: break
    
    count = 0
    for i in range(n + 1, 2*n + 1):
        for j in range(2, int(i**0.5) + 1):
            if i % j == 0:
                break
        else:
            count += 1
    print(count)