L = int(input())
s = input()
ans = 0

for (i, s1) in enumerate(s):
    n = ord(s1) - ord('a') + 1
    ans += n * pow(31, i)

print(ans % 1234567891)
