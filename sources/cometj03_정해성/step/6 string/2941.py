# 2941 크로아티아 알파벳
alpha = ('c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=')

S = input()

for a in alpha:
    S = S.replace(a, '.')

print(len(S))