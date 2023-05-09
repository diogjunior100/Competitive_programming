#include <iostream>
#include <vector>

using namespace std;
void value(long int l, long int count, long int h);
void solve(long int l, long int h);

void solve(long int l, long int h){
    long int count = 0;

    if (l == h)
    {
        return;
    }

    value(l, count, h);
}


void value(long int l, long int count, long int h){

    if (l == 1)
    {
        cout << count << endl;
        solve(l++, h);
    }
    

    if ((l % 2) == 0)
    {
        value((l/2), count++, h);
    }
    else
    {
        value(((3*l) + 1), count++, h);
    }

}

int main(){
    long int l, h;
    cin >> l >> h;

    solve(l, h);

    return 0;
}