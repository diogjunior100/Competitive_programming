#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

int main()
{
    ll x, y;
    cin >> x >> y;

    ll result = abs(x - y);
 
    if (x < y)
    {
        if (result > 2)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    else
    {
        if (result > 3)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}

