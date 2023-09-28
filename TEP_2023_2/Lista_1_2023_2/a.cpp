#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, flag;
    cin >> n >> m;
    vector<int> H (n+1);
    vector<vector<int> > g (n+1);

    for (int i = 0; i < n; ++i)
    { 
        cin >> H[i];
    }

    for (int i = 0; i < m; ++i)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        temp1--; temp2--;
        g[temp1].push_back(temp2);
        g[temp2].push_back(temp1);   
    }

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int h = H[i];
        int flag = 1;

        for (int j = 0; j < g[i].size(); ++j)
        {
            if (h <= H[g[i][j]])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            sum++;
        }
    }
    
    cout << sum << endl;
        

    return 0;
}