#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;



int main()
{
    int x, result = 0;

    cin >> x;

    for (int p = 2; p < x; p++)
    {
        result = p*p;
        if (result > x)
        {
            break;
        }
        
        
        
    }
    
    cout << result << endl;
    
    return 0;
}
