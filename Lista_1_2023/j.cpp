#include <iostream>

#define max 1001000
using namespace std;

int main(){
    int n=1, m=1, temp, count = 0;
    int vtra[max], vtrb[max];

    while (n > 0 || m > 0)
    {
        count = 0;
        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            vtra[i] = temp;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> temp;

            for (int j = 0; j < n; j++)
            {
                if (vtra[j] == temp)
                {
                    count++;
                }
                
            }
            
        }
        cout << count << endl;
    }
    
    return 0;
}