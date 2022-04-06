S = input()
alphabets = "abcdefghijklmnopqrstuvwxyz"
indices = [-1] * 30

for i in range(len(alphabets)):
    indices[i] = S.find(alphabets[i])

for i in range(len(alphabets)):
    print(indices[i], end=' ')
