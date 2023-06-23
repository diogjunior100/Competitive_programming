#include <iostream>

using namespace std;

long long powMod(long long b, long long p, long long mod) {
    long long result = 1;
        
    while (p > 0) 
    {
        if (p & 1) 
        {
            result = (result * b) % mod;
        }

        b = (b * b) % mod;
        p >>= 1;

    }

    return result;
}


int main()
{
    long long t, b, p, value;
    cin >> t;

    while (t > 0)
    {
        cin >> b >> p;

        cout << powMod(b, p) << endl;
        
    }
    
    return 0;
}
