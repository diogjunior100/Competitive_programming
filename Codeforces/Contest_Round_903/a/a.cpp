#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){    
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int op = 0;

        while (x.find(s) == string::npos && x.length() <= 25) 
        {
            x = x + x;
            op = op + 1;
        }

        if (x.find(s) == string::npos) 
        {
            op = -1;
        }

        cout << op << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    
    return 0;
}
