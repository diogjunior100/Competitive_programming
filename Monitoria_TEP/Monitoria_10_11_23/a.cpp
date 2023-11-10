#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ll>> adj(MAX);
vector<ll> a(MAX);
vector<ll> b(MAX);
vector<ll> color(MAX);
ll NONE, BLUE, RED;

bool bfs(ll s){
    NONE = 0, BLUE = 1, RED = 2;
    queue<ll>q;
    q.push(s);
    color[s] = BLUE;

    while (not q.empty())
    {
        auto u = q.front(); q.pop();

        for (auto v : adj[u])
        {
            if (color[v] == NONE)
            {
                color[v] = 3 - color[u];
                q.push(v);            
            }
            else if(color[v] == color[u]){
                return false;
            }
            
        }
        
    }
    return true;

}

bool is_bipartite(ll n){
    for (ll u = 1; u <= n; ++u)
    {
        if (color[u] == NONE and not bfs(u))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n, m;

    cin >> n >> m;

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    for (ll i = 0; i < m; i++)
    {
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }
    

    cout << (is_bipartite(n) ? "Yes": "No") << endl;
    
    return 0;
}