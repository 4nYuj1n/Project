#include <bits/stdc++.h>
using namespace std;
int cnt[110][110];
int cek(int pos,int a,int b,int n)
{
	int ans=0;
	int x,y;
	int i;
	for(i=pos+1;i<=n;i++)
	{
		if(cnt[i][a]!=0&&cnt[i][b]!=0)
		{
			ans++;
		}
	}
	return ans;
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{

		if(n==0&&m==0)
		{
			break;
		}
		int ans=0;
		while(m--)
		{
		int a,b;
		cin>>a>>b;
		cnt[a][b]++;
		}
		int x,i,j;
		for(x=1;x<=n;x++)
		{
			for(i=1;i<n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(cnt[x][i]!=0&&cnt[x][j]!=0)
					{
						ans+=cek(x,i,j,n);
					}
				}
			}
		}
		cout<<ans<<endl;
		memset(cnt,0,sizeof cnt);
	}
	
}
