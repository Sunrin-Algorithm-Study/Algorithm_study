# 1333 부재중 전화
N, L, D = map(int, input().split())

for i in range(1, N+1):
    current = L*i + 5*(i-1) # 음악이 끝난 시점
    
    if current % D == 0:
        print(current)
        break
    elif (current+4) % D < 4: # 음악이 끝난 시점 + (1~4)
        print((current // D + 1) * D)
        break
else:
    end = L*N + 5*(N-1)
    print((end // D + 1) * D)
