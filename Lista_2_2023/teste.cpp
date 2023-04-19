#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;

        if (n == -1) {
            break;
        }

        int start = 1;
        int end = 2;
        int sum = 3;

        while (end <= (n+1)/2) {
            if (sum < n) {
                end++;
                sum += end;
            } 
            else if (sum > n) {
                sum -= start;
                start++;
            } 
            else {
                cout << n << " = ";
                for (int i = start; i <= end; i++) {
                    cout << start;
                    if (i < end) {
                        cout << " + ";
                    }
                }
                cout << endl;

                start++;
                end++;
                sum += end;
            }
        }

        if (n == 1) {
            cout << "1 = 1" << endl;
        }
    }

    return 0;
}
