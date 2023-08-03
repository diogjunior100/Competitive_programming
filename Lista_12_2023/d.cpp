#include <iostream>

using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;

    if (a < k)
    {
        long long temp = 0;

        b = b - abs(a - k);

        if (b < 0)
        {
            b = 0;
        }
        
        cout << temp << " " << b << endl;
    }
    else{
        a = a - k;
        cout << a << " " << b << endl;
    }

    return 0;
}
