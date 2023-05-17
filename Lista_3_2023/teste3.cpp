#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tam;

    cin >> tam;

    vector<int> vec(tam+10);

    for (int i = 0; i < tam; i++)
    {
        cin >> vec[i];
    }
    

    int count = 0;
    int maxCount = 0;
    int maxValue = vec[0];

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] == 0 && vec[i - 1] == 0) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                maxValue = vec[i - 1];
            }
            count = 1;
        }
    }

    if (count > maxCount) {
        maxCount = count;
        maxValue = vec[vec.size() - 1];
    }

    cout << "The maximum sequence of equal numbers is: " << maxCount << " (value: " << maxValue << ")" << endl;

    return 0;
}
