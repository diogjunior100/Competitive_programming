#include <iostream>
#include <vector>

using namespace std;

int solve(const vector<int>& v) {
    int i, j;
    
    vector<int> d;

    for (i = 0; i < v.size(); i++) 
    {
        for (j = 0; j < v.size(); j++) 
        {
            if (i != j && v[j] != 0 && v[i] % v[j] == 0) 
            {
                d.push_back(v[i]);
                break;
            }
        }
    }

    return v.size() - d.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    int result = solve(v);

    cout << result << endl;

    return 0;
}
