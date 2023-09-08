#include <iostream>

using namespace std;

int main()
{
    double n, p, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sum = sum + p;
    }
    
    double result = sum / n;

    cout << result << endl;
    return 0;
}
