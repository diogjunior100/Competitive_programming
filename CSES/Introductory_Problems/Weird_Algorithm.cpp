#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(ll n){
    cout << n;
    while (n != 1){
        cout << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n;
        }
        else
        {
            n = (3*n) + 1;
            cout << n;
        }
    }
}

int main(int argc, char const *argv[])
{
    ll n, result;
    cin >> n;

    solve(n);
    
    return 0;
}
