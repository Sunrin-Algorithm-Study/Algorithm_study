# 1546 평균
n = int(input())
scores = list(map(int, input().split()))

m = max(scores)
newscore = list(map(lambda x: x/m * 100, scores))

print(sum(newscore)/n)