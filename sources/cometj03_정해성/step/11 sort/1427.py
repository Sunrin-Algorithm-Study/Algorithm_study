# 1427 소트인사이드
arr = list(map(int, input()))
arr.sort()
for n in arr[::-1]:
    print(n, end='')