'''
각 수의 형태는 a*q + r를 띄고 있을 때,
그 중 최솟값 m = p*q + r을 각각 빼주면
리스트의 원소들은 (a-p)*q 형태를 띠게 됨.
각 원소의 최대 공약수는 q임.
'''
import sys
input = sys.stdin.readline

def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)

N = int(input())
arr = [int(input()) for _ in range(N)]

m = min(arr)
arr_m = list(map(lambda x: x - m, arr))

gcd_list = []
for i in range(N-1):
    gcd_list.append(gcd(arr_m[i], arr_m[i+1]))

gcd_m = min(gcd_list)
ans = []
# gcd 중 최솟값(최대 공약수)의 약수
for i in range(2, int(gcd_m**0.5)+1):
    if gcd_m % i == 0:
        ans.append(i)
        ans.append(gcd_m//i)
ans.append(gcd_m)
ans = sorted(list(set(ans)))
print(' '.join(map(str, ans)))