import math

n = int(input())
v = list(map(int, input().split()))
m = 0
e = 0

abss = [abs(i) for i in v]

for i in range(n):
    m = m + abss[i]
    e = e + abss[i]**2


print(m)
print(math.sqrt(e))
print(max(abss))
