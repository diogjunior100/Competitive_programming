#include <bits/stdc++.h> 

using namespace std;


int powMod(int b, int p, int mod) {
    int result = 1;
    b %= mod;
        
    while (p > 0) 
    {
        if (p & 1) 
        {
            result = (result * b) % mod;
        }

        b = (b * b) % mod;
        p >>= 1;
    }
        
        return result;
    }

int main() {
    long long b, p, m;
    int a = 1;

    while(cin >> b >> p >> m)
    {
        cout << powMod(b,p, m) << endl;
    }
    

    return 0;
}

