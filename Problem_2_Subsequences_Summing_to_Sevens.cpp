#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen("div7.in", "r", stdin);
	//freopen("div7.out", "w", stdout);
long long n;
cin>>n;
vector<long long> prf(n+1);
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    prf[i+1]=(x+prf[i])%7;

}

vector<long long> last(7,-1);
long long ans=0;
for (int i = 1; i <=n; i++)
{
    if(last[prf[i]]==-1){
        last[prf[i]]=i;
    }
    else{
ans=max(ans,i-last[prf[i]]);
    }
}
cout<<ans<<endl;

return 0;
}