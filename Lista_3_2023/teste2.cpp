#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int x, tam, count = 0;
    vector<int> v;

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> tam;

        for (int j = 0; j < tam; j++)
        {
            cin >> v[j];

            if (v[j] == 0 && v[j+1] == 0)
            {
                count++;
            }
            
            if (v[j] == 1)
            {
                count = 0;
            }
            
        }
        cout << count << endl;

    }
    

}


int main()
{
    solve();    
    return 0;
}
