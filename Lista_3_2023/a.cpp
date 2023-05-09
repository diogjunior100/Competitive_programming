#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b, c;
    float raiz1, raiz2;

    cin >> a >> b >> c;

    cout << setprecision(5) << fixed;

    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            cout << 0 << endl;
            return 0;
        }
        
    }
    
    if (a == 0)
    {
        raiz1 = (-c)/b;
        cout << 1 << endl;
        cout << raiz1 << endl;
    }

    else
    {
        float delta = (b*b) - (4*a*c);

        if(delta < 0){
            cout << 0 << endl;
        }

        else if (delta == 0)
        {
            cout << 1 << endl;
            raiz1 = (-b)/(2*a);
            cout << raiz1 << endl;
        }

        else
        {
            raiz1=(-b - sqrt(delta))/(2*a);
            raiz2=(-b + sqrt(delta))/(2*a);
            cout << 2 << endl;
            
            if (raiz1 > raiz2)
            {
                cout << raiz2 << endl;
                cout << raiz1  << endl;
            }
            else
            {
                cout << raiz1 << endl;
                cout << raiz2  << endl;
            }
            

        }
    }
        
        

    

    return 0;
}