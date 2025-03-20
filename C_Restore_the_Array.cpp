#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> a(n-1);
long long mini=1e11;
for(auto &x:a){
    cin>>x;
    mini=min(mini,x);
}
long long f=0;
long long k=-1;
vector<long long> ans;
for (int i = 0; i < n-1; i++)
{
    if(a[i]==mini && f!=1){
        ans.push_back(a[i]);
        ans.push_back(a[i]);
        k=i;
        f=1;
    }
    else{
    ans.push_back(a[i]);
    }
}

for (int i = k+2; i < n-1; i++)
{
    if(ans[i+1]<ans[i]){
        ans[i]=ans[i+1];
    }
}
for (int i = k-1; i>0; i--)
{
    if(ans[i-1]<ans[i]){
        ans[i]=ans[i-1];
    }
}

for(auto &x:ans){
    cout<<x<<" "; 
}
cout<<endl;


}
return 0;
}