# 1018 체스판 다시 칠하기
N, M = map(int, input().split())
arr = [input() for _ in range(N)]
mins = []

samples = [
  ['WBWBWBWB', 'BWBWBWBW'] * 4,
  ['BWBWBWBW', 'WBWBWBWB'] * 4
]

def check(arr88):
  return min(map(lambda s: diff(arr88, s), samples)) # 두 샘플 중 차이점이 작은 것

def diff(arr88, sample):
  d = 0
  for i in range(8):
    for j in range(8):
      if sample[i][j] != arr88[i][j]:
        d += 1
  return d

for y in range(N-8+1):
  for x in range(M-8+1):
    sliced = [arr[i][x:x+8] for i in range(y, y+8)]
    mins.append(check(sliced))

print(min(mins))
