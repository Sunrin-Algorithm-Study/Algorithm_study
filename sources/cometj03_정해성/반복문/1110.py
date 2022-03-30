start = int(input())

def hap(n):
    if n < 10:
        return n
    return n % 10 + n // 10

A = start
count = 0

while True:
    count += 1
    B = hap(A)
    new_num = A % 10 * 10 + B % 10
    A = new_num
    if start == new_num:
        break

print(count)