#include <bits/stdc++.h>

using namespace std;

const int MAXN = 250;
int st[MAXN][MAXN];
char ps[MAXN][MAXN];

int dp(const string& s, int i, int j){

    if(i > j)
        return 0;
    
    if (i == j)
    {
        ps[i][j] = 'K';
        return 1;
    }
    
    if (st[i][j] != -1)
    {
        return st[i][j];
    }

    st[i][j] = max(dp(s, i+1, j), dp(s, i, j - 1));
    ps[i][j] = dp(s, i + 1, j) > dp(s, i, j - 1) ? 'L' : 'R';

    if (s[i] == s[j])
    {
        st[i][j] = max(st[i][j], dp(s, i + 1, j - 1) + 2);
        ps[i][j] = st[i][j] > dp(s, i + 1 , j - 1) + 2 ? ps[i][j] : 'B';
    }
    
    return st[i][j];

}

string solve(const string& s){

    memset(st, -1, sizeof st);
    memset(ps, 0, sizeof ps);

    int n = s.size();

    dp(s, 0, n - 1);

    int i = 0, j = n - 1;
    string L = "", R = "";

    while (i <= j)
    {
        auto p = ps[i][j];

        switch (p)
        {
        case 'L':
            ++i;
            break;

        case 'R':
            --j;
            break;

        case 'K':
            L += s[i];
            ++i;
            break;

        default:
            L += s[i];
            R = s[i] + R;
            ++i;
            --j;
            break;
        }
    }
    
    return L + R;
}


int main()
{
    string s;
    cin >> s;

    string result = solve(s);

    cout << result.size() << endl;
    cout << result << endl;

    return 0;
}
