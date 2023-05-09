#include <iostream>
#include <vector>

using namespace std;

int main(){
    long int l = 1, h = 1;
    long int maxL = 0, maxCount = 0, count, value = 0;

    while (l != 0 && h != 0)
    {
        cin >> l >> h;

        if (l == 0 && h == 0)
        {
            break;
        }
        
        maxCount = 0;
        maxL = 0;

        for (int i = l; i <= h; i++)
        {
            count = 0;
            value = i;

            while (value > 1)
            {
                if ((value % 2) == 0)
                {
                    value = value/2;
                }
                else{
                    value = (3*value) + 1;
                }

                count++;
            }
            
            if (maxCount == count)
            {
                continue;
            }
            else if (maxCount < count)
            {
                maxCount = count;
                if (maxL < i)
                {
                    maxL = i;
                }
            }

        }
        cout << "Between " << l << " and " << h << ", " << maxL << " generates the longest sequence of " << maxCount << " values." << endl;   
    }
    
    return 0;
}