# 4153 직각삼각형
while True:
    arr = list(map(int, input().split()))
    if arr.count(0) == 3:
        break
    arr.sort()
    if arr[2]**2 == arr[1]**2 + arr[0]**2:
        print('right')
    else:
        print('wrong')