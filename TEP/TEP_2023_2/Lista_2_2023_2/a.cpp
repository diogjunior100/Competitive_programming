#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(string s, string t){

    cout << max(abs(s[0] - t[0]), abs(s[1] - t[1])) << endl;

    while (s != t)
    {
        if (s[0] < t[0])
        {
            cout << "R";
            s[0] = s[0] + 1;
        }
        else if (s[0] > t[0])
        {
            cout << "L";
            s[0] = s[0] - 1;
        }

        if (s[1] < t[1])
        {
            cout << "U";
            s[1] = s[1] + 1;
        }
        else if (s[1] > t[1])
        {
            cout << "D";
            s[1] = s[1] - 1;
        }

        cout << endl;
    }
}


int main()
{
    string s, t;
    cin >> s >> t;

    solve(s, t);
  
    return 0;
}