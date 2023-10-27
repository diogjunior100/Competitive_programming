#include <bits/stdc++.h>

using ll = long long;
using namespace std;
using ii = pair<ll, ll>;

ll solve(string s){
    ll length, max_length = 0, i = 0;

    while (i+1 != s.size())
    {
        if (s[i] == s[i+1])
        {
            ll k = i;
            while (s[i] == s[i+1])
            {
                i++;
            }
            length = i - k + 1;
            max_length = max(max_length, length);
        }
        else
        {
            i++;
        }      
    }

    if (max_length == 0) {
        max_length = 1;
    }

    return max_length;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    cout << solve(s) << endl;
    
    return 0;
}