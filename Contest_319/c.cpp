#include <iostream>

using namespace std;

const int MAX = 3;
int g[MAX+1][MAX+1];

int main()
{
    ios_base::sync_with_stdio(false);
    
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> g[i][j];
        }
        
    }
    
    
    return 0;
}