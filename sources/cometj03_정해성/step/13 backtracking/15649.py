N, M = map(int, input().split())

def track(visit, count):
    if count == 1:
        for v in visit:
            print(v, end=' ')
        print()
        return
    for i in range(1, N+1):
        if i in visit: continue
        track(visit + [i], count-1)
        
for i in range(1, N+1):
    track([i], M)