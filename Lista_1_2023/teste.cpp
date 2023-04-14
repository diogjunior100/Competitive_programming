#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
  int n,m,cd,count;

  while(cin >> n >> m) 
  {
    if(n == 0 && m == 0) 
	{
		break;
	}

    vector<int> s;
    count = 0;

    while(n--) 
	{
      cin >> cd;
      s.push_back(cd);
    }

    while(m--) 
	{
      cin >> cd;
	  auto it = find(s.begin(), s.end(), cd);
	  
      if(it != s.end()) 
	  {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}