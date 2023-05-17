#include <iostream>
#include <vector>
#include <string>

using namespace std;
using polynomial = vector<int>;

int degree(const polynomial& a) {return a.size() - 1;}

int evaluate(const polynomial& a, int x){
    int y = 0, N = degree(a);

    for (int i = N; i >= 0; --i)
    {
        y *= x;
        y += a[i];
    }
    return y;
}

int main()
{
    int x, i, value = 1;
    vector<int> a(1000);
    string s;


    while (cin >> x)
    {      
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            a[i] = s[i];
        }
        
        cout << evaluate(a, x) << endl;
    }
    

    
    
    
    return 0;
}
