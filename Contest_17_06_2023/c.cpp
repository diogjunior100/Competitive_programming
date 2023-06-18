#include <iostream>

using namespace std;

typedef struct vetor
{
    long long x;
    long long pos;
}v;


int main()
{
    long long n;
    cin >> n;

    v vetor[n+10];

    for (long long i = 0; i < 3*n; i++)
    {
        cin >> vetor[i].x;
        vetor[i].pos = i; 
    }
    
    sort(vetor[0].pos, vetor[3*n].pos);

    for (long long i = 0; i < 3*n; i++)
    {
        cout << vetor[i].x << endl;
    }
    
    return 0;
}
