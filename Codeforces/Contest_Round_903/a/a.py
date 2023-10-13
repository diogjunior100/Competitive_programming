t = int(input())
    
while (t > 0):
    n, m = map(int, input().split())
    x = input()
    s = input()

    op = 0

    while (s not in x and len(x) <= 25):
        x = x + x
        op = op + 1

    if s not in x:
        op = -1

    print(op)    
    t = t - 1

    