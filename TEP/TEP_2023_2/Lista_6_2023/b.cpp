#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ll>> adj(MAX);

void dfs(ll u, ll p, vector<ll>& tl){
    for (auto v : adj[u])
    {
        if (v == p)
        {
            continue;
        }
        
        dfs(v, u, tl);
        tl[u] = max(tl[u], 1 + tl[u]);
    }
    
}

vector<ll> to_leaf(ll u, ll n){
    vector<ll> tl(n+1, 0);

    dfs(u, 0, tl);

    return tl;
}

int main()
{
    ll n;

    cin >> n;

    for (ll i = 1; i <= n; ++i)
    {
        ll aux;
        cin >> aux;

        if (aux )
        {
            /* code */
        }
        
        
    }
    

    return 0;
}
