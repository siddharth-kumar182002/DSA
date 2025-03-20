#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int k;
cin>>k;
while(k--){
long long n;
cin>>n;
string s;
cin>>s;
vector<long long> arr(26,0);
string t="";
map<long long,long long> mp;
for(int i=0;i<n;i++){
if(arr[s[i]-'a']==0){
    t=t+s[i];
    arr[s[i]-'a']++;
}
}

sort(t.begin(),t.end());
//cout<<t<<endl;
for(int i=0;i<t.size();i++){
    mp[t[i]-'a']=i;
}

long long m=t.size();
for(int i=0;i<n;i++){

    s[i]=t[m-mp[s[i]-'a']-1];
}
cout<<s<<endl;

}
return 0;
}