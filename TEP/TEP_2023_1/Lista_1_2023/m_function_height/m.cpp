#include <iostream>

using namespace std;

int main(){
    long long n, k;
    long long triangles = 0;

    cin >> n >> k;

    triangles = ((k + n - 1) / n);

    cout << triangles << endl;

    return 0;
}