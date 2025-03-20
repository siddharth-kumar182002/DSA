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
map<string,long long> mp;
vector<string> arr;
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    arr.push_back(s);
    mp[s]++;
}
string ans="";
for (int i = 0; i < n; i++)
{
    long long f=0;
    for (int l = 0; l < arr[i].size(); l++)
    {
        string a=arr[i].substr(0,l);
        string b=arr[i].substr(l,arr[i].size()-l);
       // cout<<a<<" "<<b<<endl;
                if(mp[a]>0 && mp[b]>0){
                    f=1;
                    ans+='1';
                    break;
                }
    }
    if(f!=1){
        ans+='0';
    }
    
}

cout<<ans<<endl;

}
return 0;
}