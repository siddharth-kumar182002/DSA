#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define fbo find_by_order
#define ook order_of_key

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef long double ld; 
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;

const int N = 10000;
int cnt[27];
string s; int n;

bool valid()
{
	for(int i = 0; i < 26; i++)
	{
		if(cnt[i] >= 2) return false;
	}
	return true;
}

void fillall()
{
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '?') s[i] = 'A';
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> s;
	n = s.length();
	if(n < 26) {cout << -1; return 0;}
	for(int i = 0; i < 26; i++) cnt[s[i]-'A']++;
	if(valid())
	{
		int cur = 0;
		while(cnt[cur]>0) cur++;
		for(int i = 0; i < 26; i++)
		{
			if(s[i] == '?')
			{
				s[i] = cur + 'A';
				cur++;
				while(cnt[cur]>0) cur++;
			}
		}
		fillall();
		cout << s;
		return 0;
	}
	for(int i = 26; i < n; i++)
	{
		cnt[s[i]-'A']++; cnt[s[i-26]-'A']--;
		if(valid())
		{
			//cout << "GG " << i << '\n';
			int cur = 0;
			while(cnt[cur]>0) cur++;
			for(int j = i - 25; j <= i; j++)
			{
				if(s[j] == '?')
				{
					s[j] = cur + 'A';
					cur++;
					while(cnt[cur]>0) cur++;
				}
			}
			fillall();
			cout << s;
			return 0;
		}
	}
	cout << -1;
	return 0;
}