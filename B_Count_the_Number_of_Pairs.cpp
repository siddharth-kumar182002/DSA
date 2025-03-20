#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s;
cin>>s;
vector<int> arr(26,0);
vector<int> arr1(26,0);

for (int i = 0; i < s.size(); i++)
{
    if(s[i]>=90){
        arr[s[i]-'a']++;
    }
    else{
        arr1[s[i]-'A']++;
    }
}
int ans=0;
/*for(auto x:arr1){
    cout<<x<<endl;
}*/
for (int i = 0; i <26; i++)
{
    ans=ans+min(arr[i],arr1[i]);
    int x=min(arr[i],arr1[i]);
     arr[i]=arr[i]-x; arr1[i] =arr1[i]-x;
         int add= min(k, (max(arr[i], arr1[i]) / 2));
         k=k-add;
         ans=ans+add;
        //  cout<<"ansin="<<ans<<endl;
         
}
//cout<<"ans="<<ans<<endl;
//cout<<"cnt="<<cnt<<endl;

cout<<ans<<endl;


}
return 0;
}