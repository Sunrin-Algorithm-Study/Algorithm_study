while True:
    li = list(map(int, input().split()))

    if 0 in li:
        break

    li = sorted(li)

    print("right" if li[2] ** 2 == li[0] ** 2 + li[1] ** 2 else 'wrong')
