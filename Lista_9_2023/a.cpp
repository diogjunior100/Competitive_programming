#include <iostream>

using namespace std;

int mod (int n, int a){
    return ((n % a ) + a) % a;
}


int main(){
    int n, a;

    cin >> n >> a;

    cout << (mod(n, 500) <= a ? "Yes" : "No") << endl;

    return 0;
}
