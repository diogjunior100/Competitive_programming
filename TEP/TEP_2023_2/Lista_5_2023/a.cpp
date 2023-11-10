#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ii>> adj;
bitset<MAX> processed;
vector<ll> pred;
vector<ll> dist;


pair < vector<ll> , vector<ll> > dijkstra (ll s, ll N) {
    
    dist.resize(N+1, oo); 
    pred.resize(N+1, -1);

    dist[s] = 0;
    pred[s] = s;

    processed.reset();

    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.emplace(0, s);

    while (not pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();

        if(processed[u])
            continue;

        processed[u] = true;

        for (auto [v, w] : adj[u])
        {
            if(dist[v] > d + w){
                dist[v] = d + w;
                pred[v] = u;
                pq.emplace(dist[v], v);
            }
        }
        
    }
    
    return {dist, pred};
    
}

vector<ll> path(ll s, ll u){
    vector<ll> p;
    ll v = u;

    do
    {
        p.push_back(v);
        v = pred[v];

        if (v < 0)
            return vector<ll> {};

    } while (v != s);
    
    p.push_back(s);
    reverse(p.begin(), p.end());

    return p;
}

int main()
{
    ll n, m, a, b, w;

    cin >> n >> m;

    adj.resize(n + 1);

    while (m > 0)
    {
        cin >> a >> b >> w;

        adj[a].push_back(ii{b, w});
        adj[b].push_back(ii{a, w});

        m--;
    }

    dijkstra(1, n);

    vector<ll> result(n+1);
    result = path(1, n); 

    if (!result.empty()) {
        for (ll i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else{
        cout << -1 << endl;
    }

    return 0;
}
