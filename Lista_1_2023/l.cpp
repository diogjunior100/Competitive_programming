#include <iostream>

using namespace std;

int main(){
    long long int valor, funcao;

    cin >> valor;

    if (valor%2 == 0)
    {
        funcao = valor/2;
    }
    else
    {
        funcao = (valor/2) - valor;
    }
    
    cout << funcao << endl;


    return 0;
}