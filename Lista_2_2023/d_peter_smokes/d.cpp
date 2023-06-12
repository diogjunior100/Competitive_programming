#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    vector<int> values = {0, 0 , 0, 0};
    int nsmoke, sum;

    while (cin >> n >> k)
    {
        sum = n;
        while (n >= k){
            nsmoke = n/k;
            sum = sum + nsmoke;
            n = nsmoke + (n%k);
        }
        cout << sum << endl;
    }

    for (int i: values) 
    {
		cout << i << ' ';
	}

    return 0;
}