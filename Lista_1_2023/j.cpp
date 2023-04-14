#include <iostream>

using namespace std;

int main() {
    int n,m,ja[1000010],jb[1000010], temp;
    int count;

    while (cin >> n >> m) 
    {
        if (n==0 && m==0)
        {
            break;
        }

        for (int i=0;i<n;i++){
            cin >> ja[i];
        }   

        for (int i=0;i<m;i++){
            cin >> jb[i];
        }

        count = 0;
        int i = 0, j = 0;

        while (i<n && j<m) 
        {
            while (j<=m && jb[j]< ja[i]) 
            {
                j++;
            }

            if (j>m)
            { 
                break;
            }

            if (ja[i] == jb[j]) 
            {
                count++; 
                j++;
            }
            
            i++;
        }
        cout << count << endl;
    }
}