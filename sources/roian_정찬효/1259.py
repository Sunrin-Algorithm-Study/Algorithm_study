while True:
    s = input()
    if s == '0':
        break

    if len(s) == 1:
        print('yes')
        continue

    mid = int(len(s) / 2)
    f = s[:mid]
    r = s[-1:-(mid + 1):-1]

    print('yes' if f == r else 'no')
