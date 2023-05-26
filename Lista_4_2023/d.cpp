#include <iostream>
#include <cmath>

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
    long long n, b;

    while (cin >> n >> b)
    {
       long long c1 = pow(2, b);
       long long c2 = pow(2, 1000) * n;

       if (c1 <= c2)
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
