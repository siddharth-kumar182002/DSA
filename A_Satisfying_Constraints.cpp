#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long lo=1;
long long hi=1e9;
vector<long long> three;
for (int i = 0; i <n; i++)
{
    long long op,x;
    cin>>op>>x;
    if(op==1){
         lo=max(lo,x);
    }
    else if(op==2){
        hi=min(hi,x);
    }
    else{
       if(lo==x){
        lo++;
       }
       else if(hi==x){
        hi--;
       }
       else{
        three.push_back(x);
       }
    }
}

long long ans=hi-lo+1;
for (int i = 0; i < three.size(); i++)
{
    if(three[i]>=lo && three[i]<=hi){
        ans--;
    }
}
cout<<max(0*1LL,ans)<<endl;

}
return 0;
}