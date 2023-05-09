#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, temp, razao, count = 0;

    cin >> n;
    vector<int> vtr(n);
    
    if(n == 1){
        cout << 0 << endl;
    }
    else{
        for (int i = 0; i < n; i++){
            cin >> temp;
            vtr[i] = temp;
        }

		for (int i = 0; i < n; i++)
		{
			if (vtr[i] != 0)
			{
				break;
			}
			count++;
		}

		if (count == n)
		{
			cout << 0 << endl;
			return 0;
		}
		//0 0 0 0

		if (vtr[0] == 0 && n == 2)
		{
			cout << 1 << endl;
			return 0;
		}
		//0 1

        if (vtr[0] == 0)
		{
			razao = 0;
		}
		else
		{
			razao = vtr[1]/vtr[0];
			//cout << razao << endl;
		}
		
        
        for (int i = 0; i < n-1; i++){
            if ((vtr[i+1]/vtr[i]) != razao){
                vtr.erase(vtr.begin()+ i+1);
                if (vtr.size() == n-1){
                    cout << 1 << endl;
                    return 0;
                }
                break;
            }
        }

        for (int i = 0; i < n-1; i++){
            if ((vtr[i+1]/vtr[i]) != razao){
                cout << 2 << endl;
                return 0;      
            }
        }

        cout << 0 << endl;
    }

    return 0;
}
