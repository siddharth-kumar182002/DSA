#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,f,a,b;
cin>>n>>f>>a>>b;
vector<long long> arr(n+1);
arr[0]=0;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}
vector<long long> diff(n+1);
diff[0]=-1;
for (int i = 1; i <=n; i++)
{
    diff[i]=arr[i]-arr[i-1];
}
sort(diff.begin(),diff.end());
/*for(auto x:diff){
    cout<<x<<" ";
}
cout<<endl;*/

if(f>(arr[n])*a){
    //cout<<arr[n]<<endl;
    cout<<"YES"<<endl;
    continue;
}
long long ch=arr[n]*a;
long long flag=0;
for (int i =n; i >=1; i--)
{
    ch=ch-(diff[i])*a;
    ch=ch+b;
    if(f>ch){
         flag=1;
         break;
    }
}
if(flag==1){
    //cout<<"in"<<endl;
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



}
return 0;
}