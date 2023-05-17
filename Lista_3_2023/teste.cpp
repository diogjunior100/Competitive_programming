#include<bits/stdc++.h>

using namespace std;

int main()
{
	string c = "codeforces";
	string s;
	int x, count = 0;

	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			if (c[j] != s[j])
			{
				count++;
			}
		}
		cout << count << endl;
		count = 0;
	}
	
	

	return 0;
}
