#include <iostream>
#include <math.h>

using namespace std;

long long fast_exp(long long a, long long n){
    
    long long res = 1, base = a;

    while (n)
    {
        if (n & 1)
        {
            res = res * base;
        }
        base = base * base;
        n >>= 1;
    }
    
    return res;
}

int main()
{
    long long n, b, c1, c2;

    while (cin >> n >> b)
    {
        long long exp = b - 1000;
        c1 = pow(2, exp);

        if (n <= c1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        
    }
    
    return 0;
}
