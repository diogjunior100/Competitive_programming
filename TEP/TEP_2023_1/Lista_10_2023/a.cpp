#include <iostream>
#include <vector>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main()
{
    int n, sum = 0;
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    qsort (&v[0], v.size(), sizeof(int), compare);

    for (int i = 1; i < 3; i++)
    {
        sum += abs(v[i] - v[i-1]);
    }

    cout << sum << endl;

    return 0;
}
