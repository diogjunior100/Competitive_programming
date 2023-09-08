#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int tam;

    getline(cin, s);
    tam = s.length();

    string str = "";

    for (int i = 0; i < tam; i++) 
    {

        if (s[i] == '0') 
        {
            str = str +'0';
        } 

        else if (s[i] == '1') 
        {
            str = str + '1';

        }

        else if (s[i] == 'B') 
        {
            if (!str.empty()) 
            {
                str.pop_back();
            }
        }
    }

    cout << str << endl;

    return 0;
}
