#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, k;
    int v[11];

    cin >> n;

    while (n > 0)
    {
        cin >> k;

        for (int a = 0; a < 10; a++)
        {
            v[a] = 0;
        }
        
        for (int i = 1; i <= k; i++)
        {
            if (i < 10)
            {
                if (i == 1){
                    v[1] = v[1] + 1;
                }
                else if (i == 2){
                    v[2] = v[2] + 1;
                }
                else if (i == 3){
                    v[3] = v[3] + 1;
                }
                else if (i == 4){
                    v[4] = v[4] + 1;
                }
                else if (i == 5){
                    v[5] = v[5] + 1;
                }
                else if (i == 6){
                    v[6] = v[6] + 1;
                }
                else if (i == 7){
                    v[7] = v[7] + 1;
                }
                else if (i == 8){
                    v[8] = v[8] + 1;
                }
                else if (i == 9){
                    v[9] = v[9] + 1;
                }  
            }
            else{
                int value = i;
                while(value > 0){
                    int number = value%10;
                    if (number == 0){
                        v[0] = v[0] + 1;
                    }
                    else if (number == 1){
                        v[1] = v[1] + 1;
                    }
                    else if (number == 2){
                        v[2] = v[2] + 1;
                    }
                    else if (number == 3){
                        v[3] = v[3] + 1;
                    }
                    else if (number == 4){
                        v[4] = v[4] + 1;
                    }
                    else if (number == 5){
                        v[5] = v[5] + 1;
                    }
                    else if (number == 6){
                        v[6] = v[6] + 1;
                    }
                    else if (number == 7){
                        v[7] = v[7] + 1;
                    }
                    else if (number == 8){
                        v[8] = v[8] + 1;
                    }
                    else if (number == 9){
                        v[9] = v[9] + 1;
                    } 
                    value = value / 10;
                }
            }
        }
        
        for (int i = 0; i < 10; i++)
        { 
            if (i == 9)
            {
                cout << v[i] << endl;
            }
            else { 
                cout << v[i] << ' ';
            }
        }
        n = n - 1;
    }
    
    return 0;
}