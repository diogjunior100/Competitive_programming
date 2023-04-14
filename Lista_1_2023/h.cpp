#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int i = 0, j, count = 0, tam;

    getline(cin, str);
    tam = str.length();

    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }  
        }
        if (j == tam)
        {
            count++;
        } 
    }
    
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    

    return 0;
}