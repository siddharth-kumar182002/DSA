#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0);
	int k,a,b; string st; 
	cin>>k>>a>>b>>st;
	
	int n=st.size();
	
	int mok,res;
	mok=n/k,res=n%k;
	
	if(mok<a || mok>b){
		cout<<"No solution\n"; return 0;
	}
	
	int s=0,e=s;
	vector<string> ans;
	int cnt=0;
	while(true){
		cnt++;
		if(cnt==k){
			if(n-s<a || n-s>b){
					cout<<"No solution\n"; return 0;
			}
			ans.push_back(st.substr(s,(n-s)));
			break;
		}
		ans.push_back(st.substr(s,mok));
		s+=mok; 
	}	
	
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<"\n";

return 0;
}