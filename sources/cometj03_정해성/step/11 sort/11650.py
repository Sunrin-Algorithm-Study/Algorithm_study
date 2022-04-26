# 11650 좌표 정렬하기
N = int(input())
points = [tuple(map(int, input().split())) for _ in range(N)]
points.sort(key=lambda x: x[1])
points.sort(key=lambda x: x[0])

for p in points:
    print(p[0], p[1])