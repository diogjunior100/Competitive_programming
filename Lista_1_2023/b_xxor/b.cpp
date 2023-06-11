#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long x = 0;
    long long n, k;

    cin >> n >> k;

    vector<long long> as(n);

    for (long long i = 0; i < n; ++i)
    {
        cin >> as[i];
    }

    for (int i = 60; i >= 0; --i)
    {
        auto mask = (1LL << i);
        int z = 0, o = 0;

        for (auto a: as)
        {
            //a & mask ? ++o : ++z;
            if (a & mask)
            {
                ++o;
            }
            else{
                ++z;
            }
            
        }
        if (z > o && (x | mask) <= k)
        {
            x |= mask;
        }
    }
    
    long long sum = 0;
    for (auto num : as) {
        long long result = x ^ num;
        sum = sum + result;
    }
    
    cout << sum << endl;

    return 0;
}