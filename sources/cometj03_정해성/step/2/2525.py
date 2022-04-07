h, m = map(int, input().split())
c = int(input())

time = h * 60 + m + c

nh = time // 60 % 24
nm = time % 60
print(nh, nm)