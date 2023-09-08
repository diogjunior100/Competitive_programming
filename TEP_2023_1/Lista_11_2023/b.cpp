#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    if (n % 2 != 0)
    {
        cout << "No" << endl;
    }
    else
    {
        int count = n/2;
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] == s[count])
            {
                count++;
                continue;
            }
            else
            {
                cout << "No" << endl;
                return 0;   
            }
        }
        cout << "Yes" << endl;
    }
    
    return 0;
}
