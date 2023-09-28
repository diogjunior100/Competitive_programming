def solve(N):
    s = ['-' for _ in range(N+1)]
    
    for i in range(N+1):
        for j in range(1, 10):
            if j <= N and N % j == 0 and i % (N//j) == 0:
                s[i] = str(j)
                break
            else:
                continue
    
    return ''.join(s)


N = int(input())

result = solve(N)
print(result)