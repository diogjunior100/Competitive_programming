#include<bits/stdc++.h>

using namespace std;

int main(){
    string b;
    int flag = 0;

    while (cin >> b)
    {
        long long int tam = b.size();

        for (int i = 0; i < tam; i++)
        {
            if (b[i] == '0')
            {
                //remove o 0 mais a esquerda e quebra o laço
                flag = 1;
                b.erase(b.begin()+i);
                break;
            }
        }

        if (flag == 0)
        {
            //remove o primeiro termo se o string for toda feita de 1s
            b.erase(b.begin());
        }
        
    
        tam = b.size();

        for (int i = 0; i < tam; i++)
        {
            cout << b[i];
        }
        cout << endl;
    }
    


    return 0;
}