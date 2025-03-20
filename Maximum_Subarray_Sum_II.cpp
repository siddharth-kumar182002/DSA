#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,a,b;
cin>>n>>a>>b;
vector<long long> arr(n);
vector<long long> prf(n+1);

prf[0]=0;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    prf[i+1]=arr[i]+prf[i];
}


long long ans=-1e18;
multiset<long long> ms;
//0 1 3 4 5 6 7 8 7 8 9 
//  1 2 3 4 5 6 7 
for (int i = a; i <=n; i++)
{
     if(i>b){
        ms.erase(ms.find(prf[i-b-1]));
     }
     ms.insert(prf[i-a]);
     ans=max(ans,prf[i]-*ms.begin());

}


//long long ans=max(f(a,arr),f(b,arr));
cout<<ans<<endl;
return 0;
}