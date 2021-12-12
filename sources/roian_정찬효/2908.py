A, B = map(int, input().split())

A = (A % 10 * 100) + (int(A % 100 / 10) * 10) + int(A / 100)
B = (B % 10 * 100) + (int(B % 100 / 10) * 10) + int(B / 100)

print(A if A > B else B)
