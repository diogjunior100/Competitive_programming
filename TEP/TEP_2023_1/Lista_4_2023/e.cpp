#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    long double k, p, potencia;
    //log k = log pˆ1/n
    //log k = 1/n * log p
    //k = 10.0ˆp;

    while (cin >> n >> p)
    {
        potencia = (1.0l/n) * log10l(p);
        k = pow(10.0, potencia);
        cout << setprecision(0) << fixed << k << endl;
    }
    
    return 0;
}
