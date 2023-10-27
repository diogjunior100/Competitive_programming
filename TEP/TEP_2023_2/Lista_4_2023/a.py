from typing import List

max = 200010

dfs_low = [[] for _ in range(max)]
dfs_num = [[] for _ in range(max)]
v = [[] for _ in range(max)]

def dfs_bridge(u, p, next, bridges):
    dfs_num[u] = next
    dfs_low[u] = next
    next += 1

    for i in v[u]:
        if not dfs_num[i]:
            dfs_bridge(i, u, next, bridges)

            if dfs_low[i] > dfs_num[u]:
                bridges.append((u, i))

            dfs_low[u] = min(dfs_low[u], dfs_low[i])

        elif i != p:
            dfs_low[u] = min(dfs_low[u], dfs_num[i])

def solve (n):
    dfs_num = [0] * (n + 1)
    dfs_low = [0] * (n + 1)
    bridges: List[tuple[int, int]] = []

    for u in range(1, n + 1):
        if dfs_num[u] == 0:
            dfs_bridge(u, u, 1, bridges)

    return len(bridges)

def main():
    n,m = map(int, input().split())
    while m > 0:
       a,b = map(int, input().split())
       v[a].append(b)
       v[b].append(a)
       m = m - 1
    
    print(solve(n))


main()