def count_positions(n, a, b):
    result = (n - a) - (b + 1)
    return min(result)

n, a, b = map(int, input().split())

print(count_positions(n, a, b))
