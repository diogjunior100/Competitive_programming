#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    long long n, result, max, num;
    string s;

    cin >> n;
    getline(cin, s);

    while (n > 0)
    {
        getline(cin, s);

        istringstream iss(s);
        vector<int> v;

        while (iss >> num) 
        { 
            v.push_back(num);
        }
        
        max = 0;
        result = 0;

        for (long long i = 0; i < v.size(); ++i)
        {
            for (long long j = i+1; j < v.size(); ++j)
            {
                result = gcd(v[i], v[j]);

                if (result > max)
                {
                    max = result;
                }
                
            }
        }
        
        cout << max << endl;
        n--;
    }

    return 0;
}
