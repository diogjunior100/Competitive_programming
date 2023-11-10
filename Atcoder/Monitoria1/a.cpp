#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;
const int MAX = 200100;

vector<vector<ll> > g(MAX);

void bfs_dist(ll s, ll n){
    vector<bool> used(n);
    queue<ll> q;
    vector<ll> d(n), p(n);
    int u;

    q.push(s);
    used[s] = true;
    p[s] = -1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u : g[v]) {

            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
            cout << u << endl;
        }
    }
  
}

int main()
{
    ll n, m, a ,b;
    cin >> n >> m;

    for (ll i = 1; i <= m; i++)
    {
        cin >> a >> b;
        a--;
        b--;

        g[a].push_back(b);
        g[b].push_back(a);

    }
        
    bfs_dist(1, n);


    return 0;
}
