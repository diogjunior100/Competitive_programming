#include <iostream>
#include <string>

using namespace std;

string solve(const string& s, int n) {

    string t = "";

    for (char c : s) 
    {
        char v = ((c - 'A' + n) % 26) + 'A';

        t += v;
    }

    return t;
}

int main() {

    int n;    
    string s, result;

    cin >> n;
    cin >> s;

    result = solve(s, n);

    cout << result << endl;

    return 0;
}
