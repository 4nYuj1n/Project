#include <bits/stdc++.h>
using namespace std;
void solve(int a,int jenis)
{
		if(a>26)
		{
		int temp=(a-1)/26;
		if(temp>26)
		{
			solve(temp,1);
		}
		temp%=26;
		if(temp==0)
		{
			temp=26;
		}
		cout<<(char)(temp+'A'-1);
		}
		if(jenis==0)
		{
		a%=26;
		if(a==0)
		{
			a=26;
		}
		cout<<(char)(a+'A'-1);
		}
}
int main()
{
	int t,k;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		int a;
		cin>>a;
		cout<<"Case #"<<k<<": ";
		solve(a,0);
		cout<<endl;
	}
}
