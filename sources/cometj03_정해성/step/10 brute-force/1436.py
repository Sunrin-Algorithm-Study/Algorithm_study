# 1436 영화감독 숍
def six(n):
    if n <= 6:
        return (n-1)*1000 + 666
    if n <= 15:
        return 6660 + n - 6
    if n <= 18:
        return (n-9)*1000 + 666
    return str(n//18) + ',' + str(six(n%19))

N = int(input())
print(six(N))