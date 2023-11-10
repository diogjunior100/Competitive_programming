def divisor(index, current, v):
    if current == len(v):
        print(current)
        exit()

    for _ in range(v[current][0] + 1):
        divisor(current+1, current,v)
        current *= v[index][1]


def findDivisors(n): 
    v = []
     
    i = 2
    while(i * i <= n):
        if (n % i == 0):
            count = 0
            while (n % i == 0):
                n //= i 
                count += 1
                 
            v.append([count, i]) 
      
    if (n > 1):
        v.append([1, n]) 
     
    index = 0
    current = 1
      
    divisor(index, current, v)

    print(v) 

n = int(input())
findDivisors(n)