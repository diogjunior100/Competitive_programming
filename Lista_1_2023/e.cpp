#include <iostream>
#include <vector>

using namespace std;

int main(){
	long long N, L, U;
	while (cin >> N >> L >> U)
    {
		long long ans = 0;
		for (long long i = (1LL << 32); i > 0; i >>= 1)
        {
            //auto mask = (1LL << i);
            //cout << "i "<< i << endl;
			long long temp = ans | i;

			if (temp > U){	
                continue;
            }

			else if (temp <= L){
                ans = temp;
            }

			else if ((N & i) > 0)	
            {
                continue;
            }
			else {
                ans = temp;
            }
		}
		cout << ans << endl;
	}
	return 0;
}