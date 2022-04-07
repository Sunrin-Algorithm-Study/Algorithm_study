# 1065 한수
def isHansu(n):
    newList = list(map(int, str(n)))
    
    length = len(newList)
    if length <= 2:
        return True
    
    d = newList[0] - newList[1]
    for i in range(1, length - 1):
        if newList[i] - newList[i+1] != d:
            return False
    return True

N = int(input())

count = 0
for i in range(1, N+1):
    if isHansu(i):
        count += 1

print(count)