#include <bits/stdc++.h>

using namespace std;

using ii = pair<int, int>;
vector<ii> g;


int main()
{
    int n, m, temp1, temp2;

    cin >> n >> m;

    //vector<ii> g;

    for (int i = 0; i < m; ++i)
    {
        cin >> temp1 >> temp2;
        g.push_back(make_pair(temp1, temp2));
    }
    
    for (auto edge : g) {
        cout << edge.first << " " << edge.second << endl;
    }

    return 0;
}
