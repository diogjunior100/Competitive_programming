#include <iostream>

using namespace std;

int main(){
    
    int a[101][101], b[101][101], c[101][101], n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            c[n+1-j][i] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //cin >> b[i][j];
            scanf("%d", &a[i][j]);

            if (a[i][j] != b[i][j])
            {
                cout << "No" << endl;
                return 0;
            }
            
        }
    }
    
    cout << "Yes" << endl;

    return 0;
}