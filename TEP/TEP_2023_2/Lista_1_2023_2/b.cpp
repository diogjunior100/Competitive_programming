#include <bits/stdc++.h>

using namespace std;

const int MAX = 200100;
using ll = long long;

vector<vector<ll> > g(MAX);

vector<ll> bfs_dist(ll s, ll n){
    vector<ll> dist(n+1, LONG_MAX);
    queue<ll> q;

    dist[s] = 0; 
    q.push(s);

    while (not q.empty())
    {
        auto u = q.front(); q.pop();

        for (auto v : g[u]) {
            if (dist[v] == LONG_MAX) 
            {
                dist[v] = dist[u] + 1; q.push(v);
            }
        }
    }
    
    return dist;
}

int main()
{
    ll n, m, a ,b;
    cin >> n >> m;

    for (ll i = 0; i < m; i++)
    {
        cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);

    }
        
    vector<ll> dist = bfs_dist(1, n);

    auto result = (dist[n] == 2 ? "POSSIBLE\n" : "IMPOSSIBLE\n");

    cout << result << endl;

    return 0;
}
