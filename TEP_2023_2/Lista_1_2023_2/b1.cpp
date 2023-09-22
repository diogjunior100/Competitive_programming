#include <bits/stdc++.h>

using namespace std;

const int MAX = 200010;
vector<vector<int> > g(MAX); 

vector<bool> bfs(int s, int N) 
{
    vector<bool> dist(N + 1, false);
    queue<int> q;

    dist[s] = 0; q.push(s);

    while (not q.empty())
    {
        auto u = q.front(); q.pop();
        for (auto v : g[u]) {
            if (dist[v] == false) 
            {
                dist[v] = dist[u] + 1; q.push(v);
            }
        }
    }
    return dist;
}
int main()
{
    int n, m, temp1, temp2;

    cin >> n >> m;

    for (int i = 0; i < m; ++i) 
    {
        cin >> temp1 >> temp2;
        g[temp1].push_back(temp2);
        g[temp2].push_back(temp1); 
    }
    
    vector<bool> dist = bfs(1, n);
    cout << dist.size() << endl;

    
    return 0;
}
