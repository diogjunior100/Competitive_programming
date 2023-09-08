#include<bits/stdc++.h>
using namespace std;


void solve(long long int n){
    
    long long int result = n % 3;
    n = n/3;

    if (n != 0)
    {
        solve(n);
        cout << result;
    }
    
    else
    {
        cout << result;
    }
    
}


int main(){
    long long int n;

    while (cin >> n)
    {
       if (n < 0)
       {
            break;
       }
        solve(n);
        cout << endl;
    }
    

    return 0;
}