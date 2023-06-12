#include <iostream>

using namespace std;

unsigned long long number_of_divisors(unsigned long long n){
    unsigned long long res = 0;

    for (unsigned long long d = 1; d*d <= n; ++d)
    {
        if (n % d == 0)
        {
            res += (d == n/d ? 1 : 2);
        }
    }

    return res*n;
}

int main()
{
    unsigned long long n, result, divisors, sum = 0;

    cin >> n;
    long long i = 1;
    while (i <= n)
    {
        divisors = number_of_divisors(i);
        //cout << divisors << endl;
        sum += divisors;
        i++;
    }
    
    cout << sum << endl;
    return 0;
}
