ans = []

while True:
    try:
        A, B = map(int, input().split())
        if A == 0:
            break
        ans.append(A + B)
    except EOFError:
        break

for n in ans:
    print(n)
