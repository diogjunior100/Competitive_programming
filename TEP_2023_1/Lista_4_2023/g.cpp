#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, t;
    double sum;

    cin >> n;

    while (n > 0) {
        cin >> t;

        sum = 0;
        for (int i = 2; i <= t; i++) 
        {
            sum = sum + log10(i);
        }

        int result = (floor(sum)) + 1;
        cout << result << endl;

        n--;
    }
    
    return 0;
}