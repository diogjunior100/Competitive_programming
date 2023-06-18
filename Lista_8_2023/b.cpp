#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, k;

    cin >> a >> b >> c >> k;

    if (k <= a)
    {
        cout << k << endl;
        return 0;
    }

    long long result = k <= (a + b) ? a : a - (k - a - b);
    
    cout << result << endl;

    return 0;
}