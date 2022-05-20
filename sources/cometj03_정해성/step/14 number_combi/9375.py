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
        ans *= result[k] + 1 # 안 입는 경우와 입는 경우 모두 포함해서 곱함
    print(ans-1) # 모든 옷을 안 입는 경우만 제외