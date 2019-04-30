#include <bits/stdc++.h>
using namespace std;
int pos[1000010];
string keyboard[110]={" 0",".,?!1	","abc2","def3",
			"ghi4","jkl5","mno6","pqrs7",
			"tuv8","wxyz9"};
int main()
{
	bool mulai=0;
	int x;
	for(x=0;x<=9;x++)
	{
		int y;
		for(y=0;y<keyboard[x].size();y++)
		{
			pos[keyboard[x][y]]=x;
		}
	}
	string a;
	bool toogle=0;
	while(getline(cin,a))
	{
		if(mulai)
		{
			cout<<" ";
		}
		mulai=1;
		int x;
		for(x=0;x<a.size();x++)
		{
		
			if(a[x]>='A'&&a[x]<='Z')
			{
				if(toogle==0)
				{
					cout<<"*";
					toogle=1;
				}
				a[x]-='A';
				a[x]+='a';
			}
			else if(a[x]>='a'&&a[x]<='z')
			{
				if(toogle==1)
				{
					cout<<"*";
					toogle=0;
				}
			}
			int y;
			for(y=0;y<keyboard[pos[a[x]]].size();y++)
			{
				cout<<pos[a[x]];
				if(keyboard[pos[a[x]]][y]==a[x])
				{
					break;
				}
			}
			cout<<" ";
			
		}
		cout<<"#";
	}
	cout<<endl;
}
