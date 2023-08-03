#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i = i % n + 1)
    {
        m = m - i;
        
    }
    
    cout << m << endl;
    return 0;
}
