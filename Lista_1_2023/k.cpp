#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string str;
    string s;
    int tam;

    getline(cin, str);
    tam = str.length();

    for (int i = 0; i < tam; i++)
    {   
        if (str[i] == '0' || str[i] == '1')
        {
            s = s + '0';
        }
        
        else if (str[i] == '1')
        {
            s = s + '1';
        }

        else if (str[i] == 'B')
        {
            s = s + ' ';
        }
    }
    
    cout << s << endl;

    return 0;
}