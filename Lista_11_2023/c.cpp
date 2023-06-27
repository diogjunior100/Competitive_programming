#include <iostream>
#include <string>

using namespace std;

int main()
{
    string day;
    cin >> day;

    switch (day[0])
    {
    case 'S':
        cout << ((day[1] == 'U') ? 7 : 1) << endl;
        break;

    case 'M':
        cout << 6 << endl;
        break;

    case 'T':
        cout << ((day[1] == 'U') ? 5 : 3) << endl;
        break;

    case 'W':
        cout << 4 << endl;
        break;

    case 'F':
        cout << 2 << endl;
        break;
    
    default:
        break;
    }

    return 0;
}
