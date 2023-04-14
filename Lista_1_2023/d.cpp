#include <iostream>

using namespace std;

int main(){
    long long int l, r, pos, max, result;

    cin >> l >> r;

    max = l ^ r;
    pos = 0;
    
    while (max != 0)
    {
        pos = (pos << 1) | 1;
        max >>= 1; 
    }
    
    cout << pos << endl;

    return 0;
}