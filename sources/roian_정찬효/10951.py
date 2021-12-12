ans = []

while True:
    try:
        A, B = map(int, input().split())
        ans.append(A + B)
    except EOFError:
        break

for n in ans:
    print(n)
