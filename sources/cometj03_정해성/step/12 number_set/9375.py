from collections import Counter

T = int(input())
while T > 0:
    T -= 1
    
    kinds = []
    n = int(input())
    while n > 0:
        n -= 1
        name, kind = input().split()
        kinds.append(kind)
    
    result = Counter(kinds)
    ans = 1
    for k in result:
        ans *= result[k] + 1
    print(ans-1)