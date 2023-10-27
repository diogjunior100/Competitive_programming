#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll solve(ll n, vector<ll>& v){
    ll key, j, op = 0;

    for (ll i = 1; i < n; i++)
    {
        key = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
            op++;
        }
        v[j + 1] = key;
    }
    
    return op;
}

int main()
{
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
