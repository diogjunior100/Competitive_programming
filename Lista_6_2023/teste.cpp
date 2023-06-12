#include <iostream>
#include <cmath>

//#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n) {
    if (n < 2) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long n, max, tempa, tempb, a, b;
    
    while (cin >> n && n != 0) 
    {        
        a = 2;
        max = 0;
        tempa = 0, tempb = 0;

        while (a <= n / 2) {
            b = (n - a);

            if (is_prime(a) && is_prime(b) && (b - a) >= max) {
                max = b - a;
                tempa = a;
                tempb = b;
            }

            a++;
        }

        if (tempa == 0 && tempb == 0)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
        else
        {
            cout << n << " = " << tempa << " + " << tempb << endl;
        }

    }

    return 0;
}
