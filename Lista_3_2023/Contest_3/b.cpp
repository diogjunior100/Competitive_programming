#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n, count = 0, result;
    vector<int> res;

    cin >> n;
    vector<int> v(n+10);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; 
    }

    for (int i = 0; i < n; i++)
    {    
        res.push_back(v[i]);

        if (i != n-1)
        {
            result = abs(v[i] - v[i+1]);
        }

        if (result == 1)
        {
            count++;
        }
        
        else
        {
            if (v[i] < v[i+1])
            {
                for (int j = v[i]; j < v[i+1]; j++)
                {                      
                    res.push_back(v[i] + 1);
                    count++;
                }   
            }
            else
            {
                for (int j = v[i]; j > v[i+1]; j--)
                {
                    cout << 1 << endl;
                    res.push_back(v[i] + 1);
                    count++;
                }
            }  
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << res[i] << " ";
        if (i == count - 1){
            cout << endl;
        }
    }
    
    
    


    return 0;
}
