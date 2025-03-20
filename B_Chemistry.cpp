#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s;
cin>>s;
vector<long long> count(26,0);
for (int i = 0; i < n; i++)
{
    count[s[i]-'a']++;
}
vector<long long> odd;
vector<long long> even;
for (int i = 0; i < 26; i++)
{
    if(count[i]==0){
          continue;
    }

    if(count[i]%2==0){
        even.push_back(count[i]);
    }
    else{
        odd.push_back(count[i]);
    }
}

long long rem=k;
long long sz=odd.size();
sort(odd.begin(),odd.end());
long long f=-1;
for (int i = 0; i <sz; i++)
{
    if(rem==0){
        f=i;
    break;
      }
    rem=rem-1;
    even.push_back((odd[i]-1));
}
//cout<<rem<<endl;
if(f!=-1 && f<sz-1){
    cout<<"NO"<<endl;
    continue;
}
//odd[n-1];
sort(even.begin(),even.end());
long long sum=0;
for (int i = 0; i < even.size(); i++)
{
    sum=sum+even[i];
}
if(sum>=rem){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}









}
return 0;
}