#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    int n, count = 0;

    cin >> n;
    cin >> s;

    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            cout << "No" << endl;
            return 0;
        }

        if (s[i] == 'o')
        {
            count++;
        }
    }
    
    if (count <= 0)
    {
        cout << "No" << endl;
        return 0;
    }


    cout << "Yes" << endl;
    


    return 0;
} 