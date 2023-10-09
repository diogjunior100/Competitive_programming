#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, value, max = 0, sum = 0;
    vector<long long> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        
        if (value > max)
        {
            max = value;
        }
        
        v.push_back(value);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + abs(v[i] - max);
    }
    
    
    cout << sum << endl;

    return 0;
}
