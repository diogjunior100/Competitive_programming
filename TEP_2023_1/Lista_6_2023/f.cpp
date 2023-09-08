#include <iostream>
#include <string>

using namespace std;

bool is_prime(long long n){

    if (n < 2)
    {
        return false;
    }
    
    if (n == 2)
    {
        return true;
    }
    
    if (n % 2 == 0)
    {
        return false;
    }
    
    for (int i = 3; i * i <= n ; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    
    return true;
}


int main()
{
    long long  n, a, b, i, max = 0;
    long long  tempa, tempb;

    
    while (cin >> n && n != 0)
    {
        a = 2;
        b = n - a;
        i = 0;

        while (i <= n/2)
        {
            if (is_prime(a) && is_prime(b))
            {
                if (max <= (b-a))
                {
                    max = (b-a);
                    tempa = a;
                    tempb = b;
                }
            }
            a++;
            b--;

            if (b <= 0)
            {
                break;
            }

            i++;
        }

        cout << n << " = " << tempa << " + " << tempb << endl;
        tempa = 0;
        tempb = 0;
    }
    
    return 0;
}
