#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;
const ll MAX { 200010 };
vector<ll> v(MAX);

bool solve(ll n, const vector<ll>& v){
    for (ll a = 1; a <= n; ++a)
    {
        ll b = v[a];
        ll c = v[b];

        if (v[c] == a)
        {
            return true;
        }
        
    }
    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    for (ll i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
    
    cout << (solve(n, v) ?  "YES" : "NO") << endl;

    return 0;
}


