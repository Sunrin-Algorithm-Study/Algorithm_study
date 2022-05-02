n, m = map(int, input().split())
m = min(m, n-m)

def count_two(n):
    two = 0
    while n:
        n //= 2
        two += n
    return two

def count_five(n):
    five = 0
    while n:
        n //= 5
        five += n
    return five

# nCm = n!/(m!(n-m)!)
two_cnt = count_two(n) - count_two(m) - count_two(n-m)
five_cnt = count_five(n) - count_five(m) - count_five(n-m)
print(min(two_cnt, five_cnt))