#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

struct pessoas
{
    int x;
    int y;
    int pos;
};

long long fast_exp (long long a, int n){
    if (n == 1)
    {
        return a;
    }

    auto x = fast_exp(a, n/2);

    return x * x * (n % 2 ? a : 1);
    
}

void remove(vector<long long> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}

int main()
{
    long long n, d, x, i = 0;
    pessoas p[2010];
    vector<long long> v;

    cin >> n >> d;
    long long count = n;

    while (count > 0)
    {
        cin >> p[i].x >> p[i].y;
        p[i].pos = i;
        i++;
        count--;
    }

    for (int i = 0; i < n; i++)
    {   
        for (int j = i+1; j < n; j++)
        {
            long long exp = fast_exp((p[i].x - p[j].y), 2) + fast_exp((p[j].x - p[i].y), 2);
            long long result = sqrt(exp);

            if (result <= d)
            {
                v.push_back(p[i].pos);
                v.push_back(p[j].pos);
                break;
            }
        }
    }

    remove(v);

    for (int i = 0; i < n; i++)
    {
        
    }
    
    
    
    
    return 0;
}
