#include <bits/stdc++.h>

using namespace std;

const int MAX = 200100;
using ll = long long;
set<ll> s;


void solve(long long num) {
    for (int i = 1; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            s.insert(i);
            s.insert(num/i);
        }
    }

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << endl;
    }
    
}

int main()
{
    ll n;
    cin >> n;

    solve(n);
	return 0;
}
