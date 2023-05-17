#include <iostream>

using namespace std;

int main()
{
    long long int n, soma = 0;

    while (cin >> n)
    {
        
        soma = (n * (n + 1) / 2);
        cout << soma * soma << endl;
        soma = 0;
    }
    
    return 0;
}
