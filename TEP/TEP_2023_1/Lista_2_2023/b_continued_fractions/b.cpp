#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int numerator, denominator;


    while (cin >> numerator >> denominator)
    {
        int temp = numerator/denominator;

        cout << "[" << temp << ";";

        numerator = numerator - (temp*denominator);
        swap(denominator, numerator);
        temp = numerator/denominator;
        cout << temp;

        numerator = numerator - (temp*denominator);

        while (numerator != 0)
        {
            swap(denominator,numerator);
            temp = numerator/denominator;
            cout << "," << temp;
            numerator = numerator - (temp*denominator);
        }
        cout << "]"<< endl;
    }
    
    return 0;
}