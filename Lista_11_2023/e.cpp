#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    long long n, a, b, count;
    cin >> n;

    while (n > 0)
    {
        cin >> a >> b;
        
        int sub = abs(a - b);

        count = sub/10;
        sub %= 10;

        if (sub > 0)
        {
            count++;
        }

        cout << count << endl;
        n--;
    }
    

    return 0;
}
