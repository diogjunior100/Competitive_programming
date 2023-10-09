#include <iostream>

using namespace std;

unsigned long mod(unsigned long a, unsigned long m){
    return ((a%m) + m) % m;
}

int main()
{
    unsigned long t, value, flag;

    cin >> t;

    while (t > 0)
    {
        cin >> value;
        flag = 0;

        for (long long i = 3; i <= value; i = i + 2)
        {
            if (mod(value, i) == 0)
            {
                flag = 1;
                break;
            }
        }

        cout << ((flag == 1) ? "YES" : "NO") << endl;
        t--;
    }
    
    return 0;
}

