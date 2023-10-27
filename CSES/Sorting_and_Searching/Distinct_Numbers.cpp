#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll solve(ll n, vector<ll>& v){
    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 0; i < n; i++) {
 
        while (i < n - 1 && v[i] == v[i + 1])
            i++;
 
        res++;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll n;
    cin >> n;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    cout << solve(n, v) << endl; 
    
    return 0;
}