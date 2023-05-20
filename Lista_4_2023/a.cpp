#include <iostream>
#include <math.h>

using namespace std;

long long fast_exp(long long a, int n){
    
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
    long long int x, result = 0;
    int max = 0, p, b;

    cin >> x;

    if (x == 1 || x == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    

    for (b = 1; b < x; b++)
    {
        for (p = 2; p < x; p++)
        {
            result = fast_exp(b,p);
            if (result <= x)
            {
                if (result > max)
                {
                    max = result;
                }
            }
        }  
    }
    
    cout << max << endl;

    
    return 0;
}
