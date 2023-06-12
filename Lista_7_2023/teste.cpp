#include<iostream>
using namespace std;
int N;
long ans;
int main()
{
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		for(int j=i;j<=N;j+=i)ans+=j;
	}
	cout<<ans<<endl;
}

