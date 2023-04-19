#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, count = 0, max = 0;

    cin >> n;

    while (n != -1)
    {
        int value;
        cin >> value;

        for (int i = 0; i <= value; i++)
        {
            count = count + 1;

            if (count == value){
                count = 0;
                if (max < value){
                    max = value;
                }
                
            }
            
        }
        
    }
    
    
    return 0;
}