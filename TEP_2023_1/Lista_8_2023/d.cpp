#include <iostream>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;
    
    int result = (n-a) < (b+1) ? (n-a) : (b+1);
    
    cout << result << endl;
    
    return 0;
}
