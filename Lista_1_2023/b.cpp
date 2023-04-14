#include <iostream>
#include <vector>

using namespace std;

int findX(int l, int k){
    int x = 0, bit = 1;
    int a = 1, b = 0;

    while (a > b) {
        a = (l & (x + bit)) + (k ^ (x + bit));
        b = (l ^ x) + (k ^ x);
        x = x ^ bit;        
        bit <<= 1;
        
    }
    return x;
}

int main(){
    int n, k, temp, l = 0;
    vector<int> v;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    
    cout << findX(l, k) << endl;

    return 0;
}