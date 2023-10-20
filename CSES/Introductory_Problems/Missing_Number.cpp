#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(ll n){
    ll temp, sum = 0, sum_new = 0;

    for (ll i = 1; i < n; ++i)
    {
        cin >> temp;
        sum_new = sum_new + i;
        sum = sum + temp;
    }
    
    cout << (sum_new + n) - sum << endl;
}

int main()
{
    ll n, result;
    cin >> n;

    solve(n);
    
    return 0;
}
