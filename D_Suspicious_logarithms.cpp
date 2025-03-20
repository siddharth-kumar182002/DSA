#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
#define endl '\n'
#define ilihg ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	clock_t time_req=clock();
	ilihg;
	int t=1;
	cin>>t;
	int mod=1e9+7;
	while(t--){
		ll l,r;
		cin>>l>>r;
		int c=-1;
		ll p=1;
		while(p-1<l){
			p*=2;
			c++;
		}
		ll ans=0;
		while(p<=2*r){
			ll r1=max(l,p/2);
			ll r2=min(r,p-1);
			p*=2;
			ll f=r1;
			int g=-1;
			ll x=1;
			while(f){
				f/=c;
				g++;
				if(f)x*=c;
			}
			if(r2/c>=x)x*=c;
			else x=r2+1;
			ans+=((min(r2,x-1)-r1+1)%mod)*g;
			ans%=mod;
			ans+=((r2-min(r2+1,x)+1)%mod)*(g+1);
			ans%=mod;
			c++;
		}
		cout<<ans<<endl;
	}
#ifndef ONLINE_JUDGE
    cout<<"Time : "<<fixed<<setprecision(6)<<((double)(clock()-time_req))/CLOCKS_PER_SEC<<endl;
#endif    
}