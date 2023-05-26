#include <iostream>

using namespace std;

int main()
{
    long long a,b,x, result;

    cin >> a >> b >> x;
    
    result = (a/x);

    if ((a%x) == 0)
    {
        result--;
    }
    
    long long op = (b/x);

    result = op - result;

    cout << result << endl;
    


    return 0;
}
