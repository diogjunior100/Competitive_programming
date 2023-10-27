#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using edge = pair<ll, ll>;

const ll MAX { 200010 };
ll dfs_num[MAX], dfs_low[MAX];
vector<ll> v[MAX];

void dfs_bridge(ll u, ll p, ll& next, vector<edge>& bridges){
    dfs_low[u] = dfs_num[u] = next++;

    for (auto i : v[u])
    {
        if (not dfs_num[i])
        {
            dfs_bridge(i, u, next, bridges);

            if (dfs_low[i]>dfs_num[u])
            {
                bridges.emplace_back(u,i);
            }
            dfs_low[u] = min(dfs_low[u], dfs_low[i]);
        }
        else if (i != p)
        {
            dfs_low[u] = min(dfs_low[u], dfs_num[i]);
        }
        
    }
    
}

auto solve (ll n){
    memset(dfs_num, 0, (n+1)*sizeof(ll));
    memset(dfs_low, 0, (n+1)*sizeof(ll));

    vector<edge> bridges;

    for (ll u = 1, next = 1; u <= n; ++u)
    {
        if (not dfs_num[u])
        {
            dfs_bridge(u, u, next, bridges);
        }
        
    }
    
    return bridges.size();
}


int main()
{
    ll n,m,a,b;

    cin >> n >> m;

    while (m > 0)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        
        m--;
    }
    
    cout << solve(n) << endl;

    return 0;
}