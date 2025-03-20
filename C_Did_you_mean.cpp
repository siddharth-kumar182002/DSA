#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int f=0;
	map<char,int> mp;
	mp['a']=1,mp['e']=1,mp['i']=1,mp['o']=1,mp['u']=1;
	for(int i=0;i<a.size();i++)
	{
		if(mp[a[i]])
		{
			f=0;
		}
		else
		{
			f++;
		}
		if(f>=3)
		{
			if(a[i]!=a[i-1]||a[i]!=a[i-2]||a[i-1]!=a[i-2])
			{
				cout<<' ';
				f=1;
			}	
		}
		cout<<a[i];
	}
}