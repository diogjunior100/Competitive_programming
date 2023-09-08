#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct pessoas
{
    string nome;
    int idade;
};

int main()
{
    int n, result, menor = 1;
    pessoas p[110];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].nome >> p[i].idade;
    }

    menor = p[0].idade;

    for (int i = 0; i < n; i++)
    {
        if (p[i].idade < menor)
        {
            menor = p[i].idade;
            result = i;
        }
        
    }
    
    for (int i = result; i < n; i++)
    {
        cout << p[i].nome << endl;
    }
    
    for (int i = 0; i < result; i++)
    {
        cout << p[i].nome << endl;
    }
    
    return 0;
}
