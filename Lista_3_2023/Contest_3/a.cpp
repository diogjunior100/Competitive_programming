#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 0, t = 0;
    int n, posa, post;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
            posa = i;
        }
        else
        {
            t++;
            post = i;
        }
    }
    
    if (a > t)
    {
        cout << "A" << endl;
        //cout << posa << endl;
    }
    else if (t > a)
    {
        cout << "T" << endl;
        //cout << post << endl;
    }
    else
    {
        if (posa < post)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "T" << endl;
        }
        
    }
    

    
    return 0;
}
