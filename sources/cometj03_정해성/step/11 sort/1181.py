# 1181 단어 정렬
N = int(input())
words = list(set([input() for _ in range(N)]))
words.sort()
words.sort(key=len)

for w in words:
    print(w)
