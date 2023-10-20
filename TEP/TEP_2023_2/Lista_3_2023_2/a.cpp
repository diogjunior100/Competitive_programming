#include <bits/stdc++.h>

using namespace std;

const int MAX = 200100;
using ll = long long;
vector<vector<ll> > g(MAX);



int main()
{
    ll n, k, a;

    cin >> n >> k;

    vector<vector<ll> > g(n+1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a;

        g[i].push_back(a);
    }
    

    return 0;
}
