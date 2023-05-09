#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, temp;
    int c, result, flag = 0;
    int razao;

    cin >> n;
    //int vtr[n+1];
    vector<int> vtr(n+1);
    
    if(n == 1 || n == 2){
        cout << 0 << endl;
    }
    else{

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            vtr[i] = temp;
            //cout << vtr[i];
        }

        if (vtr[0] == 0)
        {
            cout << 2 << endl;
            return 0;
        }
        
    
        razao = vtr[1]/vtr[0];
        
        //cout << razao << endl;
        for (int i = 0; i < n-1; i++)
        {
            if ((vtr[i+1]/vtr[i]) != razao)
            {
                //cout << "Entrou" << endl;
                vtr.erase(vtr.begin()+ i+1);
                flag = 1;
                break;      
            }
        }

                
        if (flag == 1)
        {
            for (int i = 0; i < n-1; i++)
            {
                //cout << vtr[i] << i <<  endl;
                if (i == n-2)
                {
                    cout << 1 << endl;
                    break;
                }
                
                if ((vtr[i+1]/vtr[i]) != razao)
                {
                    cout << 2 << endl;
                    break;      
                }
            }
        }
        else{
            cout << 0 << endl;
        }

    }

    return 0;
}