#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}
long long cnt=0;;
long long ans=0;
long long j=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='1' && cnt==0){
        ans=ans+arr[i];
    }
    else{
        cnt=1;

        if(s[i]=='0'){
            j=i+1;
            long long mini=arr[i];
             ans=ans+arr[i];
            while(s[j]=='1'){
                mini=min(mini,arr[j]);
                ans=ans+arr[j];
                j++;
            }

            ans=ans-mini;
            i=j-1;
        }

 }
}
cout<<ans<<endl;
}
return 0;
}