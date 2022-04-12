# 10250 ACM 호텔
T = int(input())

while T > 0:
    T -= 1
    H, W, N = map(int, input().split())
    floor = N % H
    dong = N // H + 1
    if N % H == 0:
        floor = H
        dong -= 1
    print(floor*100 + dong)