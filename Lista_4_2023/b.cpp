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
    int p, result, count = 0;

    cin >> p;

    for (int x = 1; x < p; x++)
    {
        result = fast_exp(x, p-1);
        result = result - 1; 
        cout << result << endl;

        if ((result % p) == 0)
        {
            count++;
        }
        
    }

    return 0;
}
