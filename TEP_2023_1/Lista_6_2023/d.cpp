#include <iostream>
#include <vector>

using namespace std;

long long nod (long long n){
    long long res = 0;

    for (long long d = 1; d*d <= n; d++)
    {
        if (n % d == 0)
        {
            res += (d == n/d ? 1 : 2);
        }
        
    }
    return res;

}

int main()
{
    int x;
    vector<int> v(4);

    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int n = 2;
    int resultado = (n * (n + 1) / 2) * (n * (n + 1) / 2);

    cout << resultado << endl;

    
    return 0;
}
