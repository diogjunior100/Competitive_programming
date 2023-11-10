#include <bits/stdc++.h>

using namespace std;

const int MAX = 200100;
using ll = long long;
vector<ll> current;
vector<vector<ll> > g(MAX);

vector<ll> bfs_dist(ll s, ll n){
    vector<ll> dist(n+1, LONG_MAX);
    queue<ll> q;
    current = vector<ll> (n+1);
    ll previous;

    dist[s] = 0; 
    q.push(s);
    current[s] = s;

    while (not q.empty())
    {
        auto u = q.front();
        previous = u; 
        q.pop();

        for (auto v : g[u]) {
            if (dist[v] == LONG_MAX) 
            {
                dist[v] = dist[u] + 1; 
                q.push(v);
                current[v] = previous;
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

    if (dist[n] == LONG_MAX)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    else
    {
        stack<ll> p;
        ll it = n;

        p.push(it);

        while (current[it] != it)
        {
            p.push(current[it]);
            it = current[it];

        }

        cout << dist[n] + 1 << endl;

        while (!p.empty())
        {
            cout << p.top();
            p.pop();
            cout << " ";
        }
    }
    

    return 0;
}