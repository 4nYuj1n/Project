#include <bits/stdc++.h>
using namespace std;
bool sudah[1000010];
int cek(int a,int x,int b,int y)
{
	int kali=0;
	while((x+(a*kali))-y<0)
	{
		kali++;
	}
	
	while(sudah[(((a*kali)+x)-y)%b]==0)
	{
	
		int temp=(a*kali)+x;
		sudah[(temp-y)%b]=1;
		if(abs(temp-y)%b==0)
		{
			return (a*kali)+x;
		}
		kali++;
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int a,x,b,y;
	cin>>a>>x>>b>>y;
	cout<<cek(a,x,b,y)<<endl;
	memset(sudah,0,sizeof sudah);
	}
}
