#include <bits/stdc++.h>

using namespace std;

const int MAX = 200100;
using ll = long long;
vector<ll> g(MAX);
vector<ll> t(MAX);


void solve(vector<ll> g, ll k){
    ll a = 1, temp = 1;

    while (k)
    {
        a = g[a];
        t[a] = temp;
        temp++;
        k--; 

        if (t[g[a]] != 0)
        {
            ll tam = t[a] - t[g[a]] + 1; 
            k = k % tam;

            while (k)
            {
                a = g[a];
                k--;
            }  
        }
        
        if (a == g[a]){
            break;
        }
    }
    
    cout << a << endl;
}

int main() {
    ll n, k, a;

    cin >> n >> k;

    for (ll i = 1; i <= n; i++)
    {
        cin >> g[i];
    }
    solve(g, k);

    return 0;
}