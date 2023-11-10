import math

n = int(input())
x = list(map(int, input().split()))

abss = [abs(i) for i in x]

print(sum(abss))
print(math.sqrt(sum([i ** 2 for i in abss])))
print(max(abss))