#include <iostream>

using namespace std;

int main(){
    int q, cmd;
    string x;
    string s;
    s = '1';

    cin >> q;


    for (int i = 0; i < q; i++)
    {
        
        cin >> cmd;

        if (cmd > 9)
        {
            return 0;
        }

        if ((i == q-1) && cmd != 3){
            return 0;
        }

        if (cmd == 1)
        {
            cin >> x;
            s = s + x;
        }

        if (cmd == 2){
            if ((i == 1) && (s.length() < 2))
            {
                return 0;
            }
            
            for (int j = 0; j < i; j++)
            {
                s[j] = s[j+1];

                if (j == i-1)
                {
                    s[j+1] = '\0';
                }
                
            }
             
        }

        if ((i == q-1) && cmd == 3)
        {
            break;
        }

        if (cmd == 3)
        {
            cout << s << endl;
        }
    }
    
    if (stoi(s) >= 998244353)
    {
        cout << "0" << endl;
        return 0;
    }
    
    
    
    cout << s << endl;

    

    return 0;
}