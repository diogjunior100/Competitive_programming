#include <iostream>

using namespace std;
unsigned long long fast_exp(unsigned long long a, unsigned long long n){
    
    unsigned long long res = 1, base = a;

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
    unsigned long long n, sum = 0,exp;

    for (unsigned long long i = 0; i < 64; i++)
    {
        cin >> n;
        exp = fast_exp(2,i);
        sum += n*exp;
    }

    cout << sum << endl;
    return 0;
}



