#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double v[10000001];
void precalculation()
{
    v[0]=1;
    v[1]=1;
    double sum = 0;
    for(int i=2; i<11; i++)
    {
        sum = sum + log10((double)i);
        v[i] = ceil(sum);
        cout << v[i] << endl;
    }
}

int main()
{
    precalculation();
    int n, test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        printf("%0.0lf\n",v[n]);
    }
    return 0;
}
