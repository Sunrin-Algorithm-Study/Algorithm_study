li = []

for i in range(10):
    li.append(int(input()) % 42)

ans = len(set(li))
print(ans)
