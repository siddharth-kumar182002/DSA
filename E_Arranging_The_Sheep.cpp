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
string s;
cin>>s;
long long ans=0;
vector<long long> arr(n+1,0);
vector<long long> brr(n+1,0);
for (int i = 1; i <=n; i++)
{
    if(s[i-1]=='*'){
        arr[i]=1+arr[i-1];
    }
    else{
        arr[i]=arr[i-1];
    }

    if(s[n-i]=='*'){
        brr[n-i]=1+brr[n-i+1];
    }
    else{
        brr[n-i]=brr[n-i+1];
    }

}
/*
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;
for(auto x:brr){
    cout<<x<<" ";
}
cout<<endl;*/

for (int i = 1; i <=n; i++)
{
    if(s[i-1]=='.'){
    ans=ans+min(arr[i],brr[i]);
    }
}
cout<<ans<<endl;



}
return 0;
}