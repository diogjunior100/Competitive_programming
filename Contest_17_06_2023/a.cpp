#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    string str;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        str.push_back(s[i]);
        str.push_back(s[i]);
    }

    cout << str << endl;
    
    return 0;
}
