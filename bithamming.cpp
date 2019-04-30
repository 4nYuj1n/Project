#include <bits/stdc++.h>
using namespace std;
vector<bitset<63> > arr;
int main()
{
	int n,m;
	cin>>n>>m;

	while(n--)
	{
		bitset<63> a;
		cin>>a;
		arr.push_back(a);
	}
	int x,y;
	int ans=64;
	for(x=0;x<arr.size()-1;x++)
	{
		for(y=x+1;y<arr.size();y++)
		{
			bitset<63> last=arr[x]^arr[y];
			ans=min(ans,(int)last.count());
		}
	}
	cout<<ans<<endl;
}
